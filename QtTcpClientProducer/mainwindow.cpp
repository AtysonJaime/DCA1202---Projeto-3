#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <cstdlib>
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  //tcpConnect();

  connect(ui->pushButtonPut,
          SIGNAL(clicked(bool)),
          this,
          SLOT(putData()));

  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(ConnectAdress()));

  connect(ui->pushButtonDisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(DisconnectAdress()));

  connect(ui->horizontalSliderMin,
          SIGNAL(valueChanged(int)),
          ui->lcdNumberMin,
          SLOT(display(int)));

  connect(ui->horizontalSliderMax,
          SIGNAL(valueChanged(int)),
          ui->lcdNumberMax,
          SLOT(display(int)));

  connect(ui->horizontalSliderSeg,
          SIGNAL(valueChanged(int)),
          ui->lcdNumberSeg,
          SLOT(display(int)));
}

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  if(socket->state()== QAbstractSocket::ConnectedState){

    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " + QString::number(qrand()%35)+"\r\n";

      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
  }
}

void MainWindow::ConnectAdress()
{
    qDebug() << ui->textEditAdress->toPlainText();
    socket->connectToHost(ui->textEditAdress->toPlainText(),1234);
    if(socket->waitForConnected(3000)){
      qDebug() << "Connected";
    }
    else{
      qDebug() << "Disconnected";
    }
}

void MainWindow::DisconnectAdress()
{
    socket->close();
    qDebug() << "Disconnected";
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  comeca = true;

  connect(ui->pushButtonGet,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));

  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(ConnectAdress()));

  connect(ui->pushButtonStart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(start()));

  connect(ui->pushButtonStop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stop()));

  connect(ui->pushButtonDisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(DisconnectAdress()));

  connect(ui->horizontalSliderSeg,
          SIGNAL(valueChanged(int)),
          ui->lcdNumberSeg,
          SLOT(display(int)));

}

void MainWindow::ConnectAdress()
{
    QString s;
    qDebug() << ui->plainTextEditAdress->toPlainText();
    socket->connectToHost(ui->plainTextEditAdress->toPlainText(),1234);
    if(socket->waitForConnected(3000)){
        s = "Connected";
        ui->statusBar->showMessage(s);
        qDebug() << "Connected";
    }
    else{
        s = "Disconnected";
        ui->statusBar->showMessage(s);
        qDebug() << "Disconnected";
    }
}

void MainWindow::DisconnectAdress()
{
    QString s;
    socket->close();
    s = "Disconnected";
    ui->statusBar->showMessage(s);
    qDebug() << "Disconnected";
}

void MainWindow::start()
{
    temporizador = startTimer(segundos);
    comeca = true;
}

void MainWindow::stop()
{
    if(comeca){
      killTimer(temporizador);
      comeca = false;
    }
}

void MainWindow::PegaSeg(int seg)
{
   segundos = seg*800;
}

void MainWindow::getData(){
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      socket->write("get 127.0.0.1 5\r\n");
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
      }
    }
  }
}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}

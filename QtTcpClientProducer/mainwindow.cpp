#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <cstdlib>
#include <QString>
#include <QDebug>
#include <cmath>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  comeca = true;
  //tcpConnect();

  /*connect(ui->pushButtonPut,
          SIGNAL(clicked(bool)),
          this,
          SLOT(putData()));*/

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

  connect(ui->pushButtonStart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(start()));

  connect(ui->pushButtonStop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stop()));

  connect(ui->horizontalSliderSeg,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(PegaSeg(int)));

  connect(ui->horizontalSliderMax,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(setMax(int)));

  connect(ui->horizontalSliderMin,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(setMin(int)));
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

void MainWindow::setMax(int Max)
{
    Maximo = Max;
}

void MainWindow::setMin(int Min)
{
    Minimo = Min;
}

void MainWindow::PegaSeg(int seg)
{
   segundos = seg*800;
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    QDateTime datetime;
    QString str;
    qint64 msecdate;

    if(socket->state()== QAbstractSocket::ConnectedState){

        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set "+ QString::number(msecdate) + " " + QString::number(Minimo+(qrand()%(Maximo-Minimo+1)))+"\r\n";
        ui->textBrowserChegada->append(str);
        qDebug() << str;
        qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
        if(socket->waitForBytesWritten(3000)){
          qDebug() << "wrote";
        }
    }
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}

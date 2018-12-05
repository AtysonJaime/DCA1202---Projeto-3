#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
public slots:
  void getData();
  void ConnectAdress();
  /**
   * @brief DisconnectAdress Classe para se desconectar do endereço
   */
  void DisconnectAdress();
  /**
   * @brief start Classe para começar a produzir os dados
   */
  /**
   * @brief start Classe para começar a produzir os dados
   */
  void start();
  /**
   * @brief stop Classe para parar de produzir os dados
   */
  void stop();
  /**
   * @brief PegaSeg Set o tempo entre uma chamada e outra
   * @param seg parametro do valor do segundo
   */
  void PegaSeg(int seg);
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  bool comeca;
  int temporizador;
  int segundos;
};

#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QString>

namespace Ui {
class MainWindow;
}
/**
 * @brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
    /**
     * @brief MainWindow
     * @param parent
     */
    explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
public slots:
  /**
   * @brief ConnectAdress
   */
  void ConnectAdress();
  /**
   * @brief DisconnectAdress
   */
  void DisconnectAdress();
  /**
   * @brief start
   */
  void start();
  /**
   * @brief stop
   */
  void stop();
  /**
   * @brief setMax
   * @param Max
   */
  void setMax(int Max);
  /**
   * @brief setMin
   * @param Min
   */
  void setMin(int Min);
  /**
   * @brief PegaSeg
   * @param seg
   */
  void PegaSeg(int seg);
  /**
   * @brief timerEvent
   * @param event
   */
  void timerEvent(QTimerEvent *event);
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  bool comeca;
  int temporizador;
  int segundos;
  int Maximo;
  int Minimo;
};

#endif // MAINWINDOW_H

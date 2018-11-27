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
 * @brief The MainWindow class é onda esta localizado toda a parte de funcionalidades da user interface
 */
class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
    /**
     * @brief MainWindow Chamada que cria toda a classe MainWidow
     */
    explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
public slots:
  /**
   * @brief ConnectAdress Classe para se connectar no endereço passado
   */
  void ConnectAdress();
  /**
   * @brief DisconnectAdress Classe para se desconectar do endereço
   */
  void DisconnectAdress();
  /**
   * @brief start Classe para começar a produzir os dados
   */
  void start();
  /**
   * @brief stop Classe para parar de produzir os dados
   */
  void stop();
  /**
   * @brief setMax Set o valor maximo para a produção dos dados
   * @param Max paramentro do valor maximo
   */
  void setMax(int Max);
  /**
   * @brief setMin Set o valor minimo para a produção de dados
   * @param Min paramentro do valor minimo
   */
  void setMin(int Min);
  /**
   * @brief PegaSeg Set o tempo entre uma chamada e outra
   * @param seg parametro do valor do segundo
   */
  void PegaSeg(int seg);
  /**
   * @brief timerEvent Classe que é chamada de tempos em tempos a partir dos segudos setados.
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

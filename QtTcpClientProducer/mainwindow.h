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
  void putData();
  /**
   * @brief ConnectAdress
   */
  void ConnectAdress();
  /**
   * @brief DisconnectAdress
   */
  void DisconnectAdress();
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H

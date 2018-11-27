/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEditAdress;
    QGridLayout *gridLayout;
    QPushButton *pushButtonDisconnect;
    QPushButton *pushButtonConnect;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLCDNumber *lcdNumberMin;
    QSlider *horizontalSliderMin;
    QGridLayout *gridLayout_3;
    QSlider *horizontalSliderMax;
    QLabel *label_2;
    QLCDNumber *lcdNumberMax;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QLCDNumber *lcdNumberSeg;
    QSlider *horizontalSliderSeg;
    QGridLayout *gridLayout_5;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QTextBrowser *textBrowserChegada;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(509, 438);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEditAdress = new QPlainTextEdit(centralWidget);
        plainTextEditAdress->setObjectName(QStringLiteral("plainTextEditAdress"));
        plainTextEditAdress->setEnabled(true);
        QFont font;
        font.setFamily(QStringLiteral("Lucida Sans"));
        font.setPointSize(11);
        plainTextEditAdress->setFont(font);
        plainTextEditAdress->setTabStopWidth(10);

        verticalLayout->addWidget(plainTextEditAdress);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));
        QFont font1;
        font1.setPointSize(10);
        pushButtonDisconnect->setFont(font1);

        gridLayout->addWidget(pushButtonDisconnect, 0, 1, 1, 1);

        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setFont(font1);

        gridLayout->addWidget(pushButtonConnect, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        lcdNumberMin = new QLCDNumber(centralWidget);
        lcdNumberMin->setObjectName(QStringLiteral("lcdNumberMin"));
        lcdNumberMin->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumberMin, 1, 1, 1, 1);

        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName(QStringLiteral("horizontalSliderMin"));
        horizontalSliderMin->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderMin, 0, 0, 2, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSliderMax = new QSlider(centralWidget);
        horizontalSliderMax->setObjectName(QStringLiteral("horizontalSliderMax"));
        horizontalSliderMax->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderMax, 0, 0, 2, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        lcdNumberMax = new QLCDNumber(centralWidget);
        lcdNumberMax->setObjectName(QStringLiteral("lcdNumberMax"));
        lcdNumberMax->setFrameShadow(QFrame::Sunken);
        lcdNumberMax->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumberMax, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(6);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        lcdNumberSeg = new QLCDNumber(centralWidget);
        lcdNumberSeg->setObjectName(QStringLiteral("lcdNumberSeg"));
        lcdNumberSeg->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_4->addWidget(lcdNumberSeg, 0, 3, 1, 1);

        horizontalSliderSeg = new QSlider(centralWidget);
        horizontalSliderSeg->setObjectName(QStringLiteral("horizontalSliderSeg"));
        horizontalSliderSeg->setMinimum(1);
        horizontalSliderSeg->setMaximum(10);
        horizontalSliderSeg->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSliderSeg, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));
        pushButtonStart->setFont(font1);

        gridLayout_5->addWidget(pushButtonStart, 0, 0, 1, 1);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        pushButtonStop->setFont(font1);

        gridLayout_5->addWidget(pushButtonStop, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_5);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout_6->addLayout(verticalLayout_5, 0, 0, 1, 1);

        textBrowserChegada = new QTextBrowser(centralWidget);
        textBrowserChegada->setObjectName(QStringLiteral("textBrowserChegada"));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        textBrowserChegada->setFont(font2);

        gridLayout_6->addWidget(textBrowserChegada, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 509, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonDisconnect->setText(QApplication::translate("MainWindow", " Disconnect", nullptr));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        label->setText(QApplication::translate("MainWindow", "Min", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Max", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

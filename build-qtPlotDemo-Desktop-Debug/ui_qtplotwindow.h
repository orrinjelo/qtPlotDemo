/********************************************************************************
** Form generated from reading UI file 'qtplotwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPLOTWINDOW_H
#define UI_QTPLOTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_qtPlotWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *customPlot;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qtPlotWindow)
    {
        if (qtPlotWindow->objectName().isEmpty())
            qtPlotWindow->setObjectName(QString::fromUtf8("qtPlotWindow"));
        qtPlotWindow->resize(667, 515);
        centralWidget = new QWidget(qtPlotWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(9, -1, 651, 471));
        qtPlotWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qtPlotWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 667, 25));
        qtPlotWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qtPlotWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qtPlotWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qtPlotWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qtPlotWindow->setStatusBar(statusBar);

        retranslateUi(qtPlotWindow);

        QMetaObject::connectSlotsByName(qtPlotWindow);
    } // setupUi

    void retranslateUi(QMainWindow *qtPlotWindow)
    {
        qtPlotWindow->setWindowTitle(QApplication::translate("qtPlotWindow", "qtPlotWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qtPlotWindow: public Ui_qtPlotWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPLOTWINDOW_H

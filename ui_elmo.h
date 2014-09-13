/********************************************************************************
** Form generated from reading UI file 'elmo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELMO_H
#define UI_ELMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Elmo
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionNew;
    QAction *actionAdd;
    QAction *actionSaveAs;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGraphicsView *mainView;
    QMenuBar *menuBar;
    QMenu *menuElmo;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Elmo)
    {
        if (Elmo->objectName().isEmpty())
            Elmo->setObjectName(QStringLiteral("Elmo"));
        Elmo->resize(938, 437);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Elmo->sizePolicy().hasHeightForWidth());
        Elmo->setSizePolicy(sizePolicy);
        actionOpen = new QAction(Elmo);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(Elmo);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionNew = new QAction(Elmo);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionAdd = new QAction(Elmo);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionSaveAs = new QAction(Elmo);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        centralWidget = new QWidget(Elmo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mainView = new QGraphicsView(centralWidget);
        mainView->setObjectName(QStringLiteral("mainView"));
        mainView->setMouseTracking(true);
        mainView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mainView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(mainView, 0, 0, 1, 1);

        Elmo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Elmo);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 938, 25));
        menuElmo = new QMenu(menuBar);
        menuElmo->setObjectName(QStringLiteral("menuElmo"));
        Elmo->setMenuBar(menuBar);
        statusBar = new QStatusBar(Elmo);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Elmo->setStatusBar(statusBar);

        menuBar->addAction(menuElmo->menuAction());
        menuElmo->addAction(actionOpen);
        menuElmo->addAction(actionSave);
        menuElmo->addAction(actionSaveAs);
        menuElmo->addAction(actionNew);
        menuElmo->addAction(actionAdd);

        retranslateUi(Elmo);

        QMetaObject::connectSlotsByName(Elmo);
    } // setupUi

    void retranslateUi(QMainWindow *Elmo)
    {
        Elmo->setWindowTitle(QApplication::translate("Elmo", "Elmo", 0));
        actionOpen->setText(QApplication::translate("Elmo", "Open", 0));
        actionSave->setText(QApplication::translate("Elmo", "Save", 0));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("Elmo", "Save results ass", 0));
#endif // QT_NO_TOOLTIP
        actionNew->setText(QApplication::translate("Elmo", "New", 0));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("Elmo", "Open the empty project", 0));
#endif // QT_NO_TOOLTIP
        actionAdd->setText(QApplication::translate("Elmo", "Add", 0));
#ifndef QT_NO_TOOLTIP
        actionAdd->setToolTip(QApplication::translate("Elmo", "Add the file to project", 0));
#endif // QT_NO_TOOLTIP
        actionSaveAs->setText(QApplication::translate("Elmo", "Save as", 0));
        menuElmo->setTitle(QApplication::translate("Elmo", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class Elmo: public Ui_Elmo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELMO_H

/********************************************************************************
** Form generated from reading UI file 'kprint.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KPRINT_H
#define UI_KPRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kprint
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QListWidget *printerList;
    QPushButton *pushButton_2;
    QPushButton *printButton;
    QSpinBox *copies;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *duplex;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *kprint)
    {
        if (kprint->objectName().isEmpty())
            kprint->setObjectName(QStringLiteral("kprint"));
        kprint->resize(200, 444);
        centralWidget = new QWidget(kprint);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        printerList = new QListWidget(centralWidget);
        printerList->setObjectName(QStringLiteral("printerList"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        printerList->setFont(font);
        printerList->setAcceptDrops(false);
        printerList->setAutoFillBackground(false);
        printerList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        printerList->setSortingEnabled(false);

        gridLayout->addWidget(printerList, 2, 0, 1, 2);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 7, 0, 1, 2);

        printButton = new QPushButton(centralWidget);
        printButton->setObjectName(QStringLiteral("printButton"));

        gridLayout->addWidget(printButton, 6, 0, 1, 2);

        copies = new QSpinBox(centralWidget);
        copies->setObjectName(QStringLiteral("copies"));
        copies->setMinimum(1);

        gridLayout->addWidget(copies, 3, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        duplex = new QCheckBox(centralWidget);
        duplex->setObjectName(QStringLiteral("duplex"));
        duplex->setTristate(false);

        gridLayout->addWidget(duplex, 5, 1, 1, 1);

        kprint->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(kprint);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        kprint->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(kprint);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        kprint->setStatusBar(statusBar);

        retranslateUi(kprint);
        QObject::connect(pushButton_2, SIGNAL(clicked()), kprint, SLOT(close()));

        QMetaObject::connectSlotsByName(kprint);
    } // setupUi

    void retranslateUi(QMainWindow *kprint)
    {
        kprint->setWindowTitle(QApplication::translate("kprint", "kprint", 0));
        pushButton_2->setText(QApplication::translate("kprint", "Cancel", 0));
        printButton->setText(QApplication::translate("kprint", "Print", 0));
        label->setText(QApplication::translate("kprint", "Printers", 0));
        label_2->setText(QApplication::translate("kprint", "Copies", 0));
        label_3->setText(QApplication::translate("kprint", "Duplex", 0));
        duplex->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class kprint: public Ui_kprint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KPRINT_H

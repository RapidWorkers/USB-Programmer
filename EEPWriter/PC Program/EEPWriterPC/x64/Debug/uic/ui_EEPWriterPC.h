/********************************************************************************
** Form generated from reading UI file 'EEPWriterPC.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EEPWRITERPC_H
#define UI_EEPWRITERPC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EEPWriterPCClass
{
public:
    QAction *actionOpen_O;
    QAction *actionSave_S;
    QAction *actionExit_X;
    QAction *actionHelp_H;
    QAction *actionAbout_A;
    QAction *actionEnglish_Default;
    QAction *actionDetect;
    QAction *actionRead_R;
    QAction *actionWrite_W;
    QAction *actionVerify_V;
    QAction *actionErase_E;
    QAction *actionCheck_Empty_P;
    QAction *actionCancel_C;
    QAction *actionGitHub_Repo_G;
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;
    QFrame *line;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QLabel *label_6;
    QComboBox *comboBox_6;
    QLabel *label_7;
    QComboBox *comboBox_7;
    QLabel *label_8;
    QComboBox *comboBox_8;
    QLabel *label_9;
    QComboBox *comboBox_9;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *frame_2;
    QFrame *frame_3;
    QProgressBar *progressBar;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuData;
    QMenu *menuChip_Operation;
    QMenu *menuLanguage;
    QMenu *menuHelp_H;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EEPWriterPCClass)
    {
        if (EEPWriterPCClass->objectName().isEmpty())
            EEPWriterPCClass->setObjectName(QString::fromUtf8("EEPWriterPCClass"));
        EEPWriterPCClass->resize(800, 600);
        actionOpen_O = new QAction(EEPWriterPCClass);
        actionOpen_O->setObjectName(QString::fromUtf8("actionOpen_O"));
        actionSave_S = new QAction(EEPWriterPCClass);
        actionSave_S->setObjectName(QString::fromUtf8("actionSave_S"));
        actionExit_X = new QAction(EEPWriterPCClass);
        actionExit_X->setObjectName(QString::fromUtf8("actionExit_X"));
        actionHelp_H = new QAction(EEPWriterPCClass);
        actionHelp_H->setObjectName(QString::fromUtf8("actionHelp_H"));
        actionAbout_A = new QAction(EEPWriterPCClass);
        actionAbout_A->setObjectName(QString::fromUtf8("actionAbout_A"));
        actionEnglish_Default = new QAction(EEPWriterPCClass);
        actionEnglish_Default->setObjectName(QString::fromUtf8("actionEnglish_Default"));
        actionDetect = new QAction(EEPWriterPCClass);
        actionDetect->setObjectName(QString::fromUtf8("actionDetect"));
        actionRead_R = new QAction(EEPWriterPCClass);
        actionRead_R->setObjectName(QString::fromUtf8("actionRead_R"));
        actionWrite_W = new QAction(EEPWriterPCClass);
        actionWrite_W->setObjectName(QString::fromUtf8("actionWrite_W"));
        actionVerify_V = new QAction(EEPWriterPCClass);
        actionVerify_V->setObjectName(QString::fromUtf8("actionVerify_V"));
        actionErase_E = new QAction(EEPWriterPCClass);
        actionErase_E->setObjectName(QString::fromUtf8("actionErase_E"));
        actionCheck_Empty_P = new QAction(EEPWriterPCClass);
        actionCheck_Empty_P->setObjectName(QString::fromUtf8("actionCheck_Empty_P"));
        actionCancel_C = new QAction(EEPWriterPCClass);
        actionCancel_C->setObjectName(QString::fromUtf8("actionCancel_C"));
        actionGitHub_Repo_G = new QAction(EEPWriterPCClass);
        actionGitHub_Repo_G->setObjectName(QString::fromUtf8("actionGitHub_Repo_G"));
        centralwidget = new QWidget(EEPWriterPCClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 801, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 10, 121, 61));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 71, 16));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(80, 10, 111, 22));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 71, 16));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_2 = new QComboBox(frame);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(80, 30, 111, 22));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 70, 121, 61));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(330, 0, 16, 141));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 10, 441, 23));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(350, 30, 441, 23));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 60, 91, 16));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_3 = new QComboBox(frame);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(450, 60, 341, 22));
        comboBox_4 = new QComboBox(frame);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(450, 80, 341, 22));
        comboBox_5 = new QComboBox(frame);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(450, 100, 341, 22));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 50, 71, 16));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_6 = new QComboBox(frame);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(80, 50, 111, 22));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 70, 71, 16));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_7 = new QComboBox(frame);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        comboBox_7->setGeometry(QRect(80, 70, 111, 22));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 90, 71, 16));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_8 = new QComboBox(frame);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
        comboBox_8->setGeometry(QRect(80, 90, 111, 22));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 110, 71, 16));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_9 = new QComboBox(frame);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));
        comboBox_9->setGeometry(QRect(80, 110, 111, 22));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 80, 91, 16));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(350, 100, 91, 16));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 140, 801, 271));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 410, 801, 141));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        progressBar = new QProgressBar(frame_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 110, 770, 16));
        progressBar->setValue(24);
        plainTextEdit = new QPlainTextEdit(frame_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 800, 101));
        EEPWriterPCClass->setCentralWidget(centralwidget);
        frame_3->raise();
        frame_2->raise();
        frame->raise();
        menubar = new QMenuBar(EEPWriterPCClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuData = new QMenu(menubar);
        menuData->setObjectName(QString::fromUtf8("menuData"));
        menuChip_Operation = new QMenu(menubar);
        menuChip_Operation->setObjectName(QString::fromUtf8("menuChip_Operation"));
        menuLanguage = new QMenu(menubar);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuHelp_H = new QMenu(menubar);
        menuHelp_H->setObjectName(QString::fromUtf8("menuHelp_H"));
        EEPWriterPCClass->setMenuBar(menubar);
        statusbar = new QStatusBar(EEPWriterPCClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EEPWriterPCClass->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuData->menuAction());
        menubar->addAction(menuChip_Operation->menuAction());
        menubar->addAction(menuLanguage->menuAction());
        menubar->addAction(menuHelp_H->menuAction());
        menuFile->addAction(actionOpen_O);
        menuFile->addAction(actionSave_S);
        menuFile->addSeparator();
        menuFile->addAction(actionExit_X);
        menuChip_Operation->addAction(actionDetect);
        menuChip_Operation->addSeparator();
        menuChip_Operation->addAction(actionRead_R);
        menuChip_Operation->addAction(actionWrite_W);
        menuChip_Operation->addAction(actionVerify_V);
        menuChip_Operation->addSeparator();
        menuChip_Operation->addAction(actionErase_E);
        menuChip_Operation->addAction(actionCheck_Empty_P);
        menuChip_Operation->addSeparator();
        menuChip_Operation->addAction(actionCancel_C);
        menuLanguage->addAction(actionEnglish_Default);
        menuHelp_H->addAction(actionHelp_H);
        menuHelp_H->addAction(actionAbout_A);
        menuHelp_H->addSeparator();
        menuHelp_H->addAction(actionGitHub_Repo_G);

        retranslateUi(EEPWriterPCClass);

        QMetaObject::connectSlotsByName(EEPWriterPCClass);
    } // setupUi

    void retranslateUi(QMainWindow *EEPWriterPCClass)
    {
        EEPWriterPCClass->setWindowTitle(QApplication::translate("EEPWriterPCClass", "EEPWriter", nullptr));
        actionOpen_O->setText(QApplication::translate("EEPWriterPCClass", "Open(&O)", nullptr));
        actionSave_S->setText(QApplication::translate("EEPWriterPCClass", "Save(&S)", nullptr));
        actionExit_X->setText(QApplication::translate("EEPWriterPCClass", "Exit(&X)", nullptr));
        actionHelp_H->setText(QApplication::translate("EEPWriterPCClass", "Help(&H)", nullptr));
        actionAbout_A->setText(QApplication::translate("EEPWriterPCClass", "About(&A)", nullptr));
        actionEnglish_Default->setText(QApplication::translate("EEPWriterPCClass", "English(Default)", nullptr));
        actionDetect->setText(QApplication::translate("EEPWriterPCClass", "Detect(&D)", nullptr));
        actionRead_R->setText(QApplication::translate("EEPWriterPCClass", "Read(&R)", nullptr));
        actionWrite_W->setText(QApplication::translate("EEPWriterPCClass", "Write(&W)", nullptr));
        actionVerify_V->setText(QApplication::translate("EEPWriterPCClass", "Verify(&V)", nullptr));
        actionErase_E->setText(QApplication::translate("EEPWriterPCClass", "Erase(&E)", nullptr));
        actionCheck_Empty_P->setText(QApplication::translate("EEPWriterPCClass", "Check Empty(&P)", nullptr));
        actionCancel_C->setText(QApplication::translate("EEPWriterPCClass", "Cancel(&C)", nullptr));
        actionGitHub_Repo_G->setText(QApplication::translate("EEPWriterPCClass", "GitHub Repo(&G)", nullptr));
        pushButton->setText(QApplication::translate("EEPWriterPCClass", "Connect(&C)", nullptr));
        label->setText(QApplication::translate("EEPWriterPCClass", "COM Port: ", nullptr));
        label_2->setText(QApplication::translate("EEPWriterPCClass", "Baud Rate: ", nullptr));
        pushButton_2->setText(QApplication::translate("EEPWriterPCClass", "Refresh(&R)", nullptr));
        pushButton_3->setText(QApplication::translate("EEPWriterPCClass", "Search Chip Database", nullptr));
        pushButton_4->setText(QApplication::translate("EEPWriterPCClass", "Auto Detect (&A) (Correct Chip Type must be selected!!)", nullptr));
        label_3->setText(QApplication::translate("EEPWriterPCClass", "Chip Type: ", nullptr));
        label_6->setText(QApplication::translate("EEPWriterPCClass", "Data bit: ", nullptr));
        label_7->setText(QApplication::translate("EEPWriterPCClass", "Parity: ", nullptr));
        label_8->setText(QApplication::translate("EEPWriterPCClass", "Stop bit: ", nullptr));
        label_9->setText(QApplication::translate("EEPWriterPCClass", "Flow Cont.: ", nullptr));
        label_4->setText(QApplication::translate("EEPWriterPCClass", "Manufacture: ", nullptr));
        label_5->setText(QApplication::translate("EEPWriterPCClass", "Chip Name: ", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("EEPWriterPCClass", "EEPWriter, A Universal EEPROM Programmer Project\n"
"Copyright 2019 RapidWorkers, All rights reserved.\n"
"===========================================", nullptr));
        menuFile->setTitle(QApplication::translate("EEPWriterPCClass", "File(&F)", nullptr));
        menuData->setTitle(QApplication::translate("EEPWriterPCClass", "Data(&B)", nullptr));
        menuChip_Operation->setTitle(QApplication::translate("EEPWriterPCClass", "Chip Operation(&P)", nullptr));
        menuLanguage->setTitle(QApplication::translate("EEPWriterPCClass", "Language(&L)", nullptr));
        menuHelp_H->setTitle(QApplication::translate("EEPWriterPCClass", "Help(&H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EEPWriterPCClass: public Ui_EEPWriterPCClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EEPWRITERPC_H

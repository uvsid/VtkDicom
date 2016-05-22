/********************************************************************************
** Form generated from reading UI file 'QtVTKRenderWindows.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTVTKRENDERWINDOWS_H
#define UI_QTVTKRENDERWINDOWS_H

#include <QVTKWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtVTKRenderWindows
{
public:
    QAction *actionOpenFile;
    QAction *actionExit;
    QAction *actionPrint;
    QAction *actionHelp;
    QAction *actionSave;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QVTKWidget *view2;
    QVTKWidget *view4;
    QVTKWidget *view3;
    QVTKWidget *view1;
    QFrame *frame;
    QCheckBox *resliceModeCheckBox;
    QCheckBox *thickModeCheckBox;
    QGroupBox *blendModeGroupBox;
    QRadioButton *radioButton_Min;
    QRadioButton *radioButton_Max;
    QRadioButton *radioButton_Mean;
    QPushButton *resetButton;
    QPushButton *btnOpenDicom;
    QSpinBox *spinBox;
    QFrame *frame_2;
    QPushButton *AddDistance1Button;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;

    void setupUi(QMainWindow *QtVTKRenderWindows)
    {
        if (QtVTKRenderWindows->objectName().isEmpty())
            QtVTKRenderWindows->setObjectName(QStringLiteral("QtVTKRenderWindows"));
        QtVTKRenderWindows->resize(990, 583);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        QtVTKRenderWindows->setWindowIcon(icon);
        QtVTKRenderWindows->setIconSize(QSize(22, 22));
        actionOpenFile = new QAction(QtVTKRenderWindows);
        actionOpenFile->setObjectName(QStringLiteral("actionOpenFile"));
        actionOpenFile->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFile->setIcon(icon1);
        actionExit = new QAction(QtVTKRenderWindows);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionPrint = new QAction(QtVTKRenderWindows);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icons/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon3);
        actionHelp = new QAction(QtVTKRenderWindows);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionHelp->setIcon(icon);
        actionSave = new QAction(QtVTKRenderWindows);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icons/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon4);
        centralwidget = new QWidget(QtVTKRenderWindows);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 591, 531));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        view2 = new QVTKWidget(gridLayoutWidget);
        view2->setObjectName(QStringLiteral("view2"));

        gridLayout_2->addWidget(view2, 1, 0, 1, 1);

        view4 = new QVTKWidget(gridLayoutWidget);
        view4->setObjectName(QStringLiteral("view4"));

        gridLayout_2->addWidget(view4, 0, 1, 1, 1);

        view3 = new QVTKWidget(gridLayoutWidget);
        view3->setObjectName(QStringLiteral("view3"));

        gridLayout_2->addWidget(view3, 1, 1, 1, 1);

        view1 = new QVTKWidget(gridLayoutWidget);
        view1->setObjectName(QStringLiteral("view1"));

        gridLayout_2->addWidget(view1, 0, 0, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(640, 20, 161, 521));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        resliceModeCheckBox = new QCheckBox(frame);
        resliceModeCheckBox->setObjectName(QStringLiteral("resliceModeCheckBox"));
        resliceModeCheckBox->setGeometry(QRect(30, 20, 101, 17));
        thickModeCheckBox = new QCheckBox(frame);
        thickModeCheckBox->setObjectName(QStringLiteral("thickModeCheckBox"));
        thickModeCheckBox->setGeometry(QRect(30, 80, 101, 17));
        blendModeGroupBox = new QGroupBox(frame);
        blendModeGroupBox->setObjectName(QStringLiteral("blendModeGroupBox"));
        blendModeGroupBox->setGeometry(QRect(10, 120, 141, 91));
        radioButton_Min = new QRadioButton(blendModeGroupBox);
        radioButton_Min->setObjectName(QStringLiteral("radioButton_Min"));
        radioButton_Min->setGeometry(QRect(10, 20, 111, 17));
        radioButton_Max = new QRadioButton(blendModeGroupBox);
        radioButton_Max->setObjectName(QStringLiteral("radioButton_Max"));
        radioButton_Max->setGeometry(QRect(10, 40, 121, 17));
        radioButton_Mean = new QRadioButton(blendModeGroupBox);
        radioButton_Mean->setObjectName(QStringLiteral("radioButton_Mean"));
        radioButton_Mean->setGeometry(QRect(10, 60, 111, 17));
        resetButton = new QPushButton(frame);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(10, 220, 51, 21));
        btnOpenDicom = new QPushButton(centralwidget);
        btnOpenDicom->setObjectName(QStringLiteral("btnOpenDicom"));
        btnOpenDicom->setGeometry(QRect(10, 0, 75, 23));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(840, 280, 42, 22));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(650, 300, 161, 211));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        AddDistance1Button = new QPushButton(frame_2);
        AddDistance1Button->setObjectName(QStringLiteral("AddDistance1Button"));
        AddDistance1Button->setGeometry(QRect(0, 0, 131, 21));
        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(880, 280, 42, 22));
        spinBox_3 = new QSpinBox(centralwidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(930, 280, 42, 22));
        QtVTKRenderWindows->setCentralWidget(centralwidget);

        retranslateUi(QtVTKRenderWindows);

        QMetaObject::connectSlotsByName(QtVTKRenderWindows);
    } // setupUi

    void retranslateUi(QMainWindow *QtVTKRenderWindows)
    {
        QtVTKRenderWindows->setWindowTitle(QApplication::translate("QtVTKRenderWindows", "QtVTKRenderWindows", 0));
        actionOpenFile->setText(QApplication::translate("QtVTKRenderWindows", "Open File...", 0));
        actionExit->setText(QApplication::translate("QtVTKRenderWindows", "Exit", 0));
        actionPrint->setText(QApplication::translate("QtVTKRenderWindows", "Print", 0));
        actionHelp->setText(QApplication::translate("QtVTKRenderWindows", "Help", 0));
        actionSave->setText(QApplication::translate("QtVTKRenderWindows", "Save", 0));
        resliceModeCheckBox->setText(QApplication::translate("QtVTKRenderWindows", "Oblique Reslice", 0));
        thickModeCheckBox->setText(QApplication::translate("QtVTKRenderWindows", "Thick Slab", 0));
        blendModeGroupBox->setTitle(QApplication::translate("QtVTKRenderWindows", "Blend mode", 0));
        radioButton_Min->setText(QApplication::translate("QtVTKRenderWindows", "Min Intensity Blend", 0));
        radioButton_Max->setText(QApplication::translate("QtVTKRenderWindows", "Max Intensity Blend", 0));
        radioButton_Mean->setText(QApplication::translate("QtVTKRenderWindows", "Mean Blend", 0));
        resetButton->setText(QApplication::translate("QtVTKRenderWindows", "Reset", 0));
        btnOpenDicom->setText(QApplication::translate("QtVTKRenderWindows", "LoadDicom", 0));
        AddDistance1Button->setText(QApplication::translate("QtVTKRenderWindows", "Add Distance On View 1", 0));
    } // retranslateUi

};

namespace Ui {
    class QtVTKRenderWindows: public Ui_QtVTKRenderWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTVTKRENDERWINDOWS_H

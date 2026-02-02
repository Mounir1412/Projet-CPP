/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *sidebar;
    QVBoxLayout *verticalLayout_2;
    QLabel *logoLabel;
    QPushButton *btnFournisseurs;
    QPushButton *btnCamions;
    QPushButton *btnPoubelles;
    QPushButton *btnChauffeurs;
    QPushButton *btnDechets;
    QPushButton *btnPointsRecyclage;
    QPushButton *btnExit;
    QStackedWidget *stackedWidget;
    QWidget *pageFournisseurs;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_13;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_7;
    QWidget *pageCamions;
    QFrame *tableFrame;
    QVBoxLayout *verticalLayout_12;
    QFrame *formFrame;
    QLabel *formTitle;
    QLabel *labelCapacite;
    QComboBox *comboEtat;
    QLineEdit *editMatricule;
    QComboBox *comboDisponibilite;
    QLabel *labelMatricule;
    QLabel *labelDisponibilite;
    QLabel *labelEtat;
    QLineEdit *editCapacite;
    QFrame *tableContainer;
    QFrame *toolbarFrame;
    QPushButton *btnSupprimer;
    QPushButton *btnPDF;
    QLineEdit *searchCamions;
    QPushButton *btnAjouter;
    QPushButton *btnModifier;
    QPushButton *btnPDF_2;
    QPushButton *btnPDF_3;
    QTableWidget *tableWidget;
    QCalendarWidget *calendarWidget;
    QGroupBox *groupBox;
    QLabel *label_15;
    QWidget *pagePoubelles;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_3;
    QWidget *pageChauffeurs;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_4;
    QWidget *pageDechets;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_5;
    QWidget *pagePointsRecyclage;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_11;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1776, 796);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sidebar = new QFrame(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setMinimumSize(QSize(260, 0));
        sidebar->setMaximumSize(QSize(260, 16777215));
        sidebar->setStyleSheet(QString::fromUtf8("QFrame {\n"
"  background-color: #1e40af;\n"
"  border-right: 2px solid #1e3a8a;\n"
"}"));
        sidebar->setFrameShape(QFrame::Shape::StyledPanel);
        sidebar->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(sidebar);
        verticalLayout_2->setSpacing(25);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 30, 20, 30);
        logoLabel = new QLabel(sidebar);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"font-size: 24px;\n"
"font-weight: 700;\n"
"padding-bottom: 5px;"));

        verticalLayout_2->addWidget(logoLabel);

        btnFournisseurs = new QPushButton(sidebar);
        btnFournisseurs->setObjectName("btnFournisseurs");
        btnFournisseurs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));

        verticalLayout_2->addWidget(btnFournisseurs);

        btnCamions = new QPushButton(sidebar);
        btnCamions->setObjectName("btnCamions");
        btnCamions->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: white;\n"
"  background-color: #3b82f6;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"  font-weight: bold;\n"
"}"));

        verticalLayout_2->addWidget(btnCamions);

        btnPoubelles = new QPushButton(sidebar);
        btnPoubelles->setObjectName("btnPoubelles");
        btnPoubelles->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));

        verticalLayout_2->addWidget(btnPoubelles);

        btnChauffeurs = new QPushButton(sidebar);
        btnChauffeurs->setObjectName("btnChauffeurs");
        btnChauffeurs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));

        verticalLayout_2->addWidget(btnChauffeurs);

        btnDechets = new QPushButton(sidebar);
        btnDechets->setObjectName("btnDechets");
        btnDechets->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));

        verticalLayout_2->addWidget(btnDechets);

        btnPointsRecyclage = new QPushButton(sidebar);
        btnPointsRecyclage->setObjectName("btnPointsRecyclage");
        btnPointsRecyclage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));

        verticalLayout_2->addWidget(btnPointsRecyclage);

        btnExit = new QPushButton(sidebar);
        btnExit->setObjectName("btnExit");
        btnExit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));

        verticalLayout_2->addWidget(btnExit);


        horizontalLayout->addWidget(sidebar);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        pageFournisseurs = new QWidget();
        pageFournisseurs->setObjectName("pageFournisseurs");
        pageFournisseurs->setStyleSheet(QString::fromUtf8("background: #f8fafc;"));
        verticalLayout_9 = new QVBoxLayout(pageFournisseurs);
        verticalLayout_9->setSpacing(20);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(40, 40, 40, 40);
        label_13 = new QLabel(pageFournisseurs);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"font-size: 28px;\n"
"font-weight: 700;\n"
"padding-bottom: 20px;"));

        verticalLayout_9->addWidget(label_13);

        label_14 = new QLabel(pageFournisseurs);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"font-size: 18px;\n"
"background: white;\n"
"padding: 40px;\n"
"border-radius: 12px;\n"
"border: 2px dashed #10b981;\n"
"text-align: center;"));
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(label_14);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);

        stackedWidget->addWidget(pageFournisseurs);
        pageCamions = new QWidget();
        pageCamions->setObjectName("pageCamions");
        pageCamions->setStyleSheet(QString::fromUtf8("background-color: #f8fafc;"));
        tableFrame = new QFrame(pageCamions);
        tableFrame->setObjectName("tableFrame");
        tableFrame->setGeometry(QRect(1010, 90, 16, 16));
        tableFrame->setStyleSheet(QString::fromUtf8("background: transparent;"));
        tableFrame->setFrameShape(QFrame::Shape::StyledPanel);
        tableFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_12 = new QVBoxLayout(tableFrame);
        verticalLayout_12->setSpacing(20);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        formFrame = new QFrame(pageCamions);
        formFrame->setObjectName("formFrame");
        formFrame->setGeometry(QRect(30, 100, 380, 351));
        formFrame->setMinimumSize(QSize(380, 0));
        formFrame->setMaximumSize(QSize(380, 16777215));
        formFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"  background: white;\n"
"  border-radius: 12px;\n"
"  border: 2px solid #e5e7eb;\n"
"}"));
        formFrame->setFrameShape(QFrame::Shape::StyledPanel);
        formFrame->setFrameShadow(QFrame::Shadow::Raised);
        formTitle = new QLabel(formFrame);
        formTitle->setObjectName("formTitle");
        formTitle->setGeometry(QRect(30, 40, 195, 41));
        formTitle->setStyleSheet(QString::fromUtf8("color: #047857;\n"
"font-size: 20px;\n"
"font-weight: 700;\n"
"padding-bottom: 10px;\n"
"border-bottom: 2px solid #10b981;"));
        labelCapacite = new QLabel(formFrame);
        labelCapacite->setObjectName("labelCapacite");
        labelCapacite->setGeometry(QRect(10, 140, 101, 31));
        labelCapacite->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));
        comboEtat = new QComboBox(formFrame);
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->setObjectName("comboEtat");
        comboEtat->setGeometry(QRect(133, 182, 219, 41));
        comboEtat->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"  padding: 10px 12px;\n"
"  border: 2px solid #e5e7eb;\n"
"  border-radius: 8px;\n"
"  background: white;\n"
"  font-size: 14px;\n"
"  color: #000000;\n"
"}\n"
"QComboBox:focus {\n"
"  border: 2px solid #10b981;\n"
"}"));
        editMatricule = new QLineEdit(formFrame);
        editMatricule->setObjectName("editMatricule");
        editMatricule->setGeometry(QRect(133, 94, 219, 41));
        editMatricule->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 12px 15px;\n"
"    border: 2px solid #d1d5db;\n"
"    border-radius: 10px;\n"
"    font-size: 15px;\n"
"    color: #1f2937;\n"
"    background-color: white;\n"
"    selection-background-color: #10b981;\n"
"    selection-color: white;\n"
"    font-family: \"Segoe UI\", \"Roboto\", sans-serif;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #10b981;\n"
"    border-left: 2px solid #10b981;\n"
"    border-right: 2px solid #10b981;\n"
"    background-color: #f9fafb;\n"
"    border-bottom: 4px solid #10b981;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 2px solid #9ca3af;\n"
"    background-color: #f9fafb;\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: #f3f4f6;\n"
"    color: #9ca3af;\n"
"    border: 2px solid #e5e7eb;\n"
"}\n"
"\n"
"QLineEdit[readOnly=\"true\"] {\n"
"    background-color: #f9fafb;\n"
"    color: #6b7280;\n"
"    border: 2px solid #e5e7eb;\n"
"    font-style: italic;\n"
"}"));
        comboDisponibilite = new QComboBox(formFrame);
        comboDisponibilite->addItem(QString());
        comboDisponibilite->addItem(QString());
        comboDisponibilite->addItem(QString());
        comboDisponibilite->addItem(QString());
        comboDisponibilite->setObjectName("comboDisponibilite");
        comboDisponibilite->setGeometry(QRect(133, 226, 219, 41));
        comboDisponibilite->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"  padding: 10px 12px;\n"
"  border: 2px solid #e5e7eb;\n"
"  border-radius: 8px;\n"
"  background: white;\n"
"  font-size: 14px;\n"
"  color: #000000;\n"
"}\n"
"QComboBox:focus {\n"
"  border: 2px solid #10b981;\n"
"}"));
        labelMatricule = new QLabel(formFrame);
        labelMatricule->setObjectName("labelMatricule");
        labelMatricule->setGeometry(QRect(10, 90, 101, 31));
        labelMatricule->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));
        labelDisponibilite = new QLabel(formFrame);
        labelDisponibilite->setObjectName("labelDisponibilite");
        labelDisponibilite->setGeometry(QRect(10, 220, 101, 31));
        labelDisponibilite->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));
        labelEtat = new QLabel(formFrame);
        labelEtat->setObjectName("labelEtat");
        labelEtat->setGeometry(QRect(10, 180, 101, 31));
        labelEtat->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));
        editCapacite = new QLineEdit(formFrame);
        editCapacite->setObjectName("editCapacite");
        editCapacite->setGeometry(QRect(133, 138, 219, 41));
        editCapacite->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 12px 15px;\n"
"    border: 2px solid #d1d5db;\n"
"    border-radius: 10px;\n"
"    font-size: 15px;\n"
"    color: #1f2937;\n"
"    background-color: white;\n"
"    selection-background-color: #10b981;\n"
"    selection-color: white;\n"
"    font-family: \"Segoe UI\", \"Roboto\", sans-serif;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #10b981;\n"
"    border-left: 2px solid #10b981;\n"
"    border-right: 2px solid #10b981;\n"
"    background-color: #f9fafb;\n"
"    border-bottom: 4px solid #10b981;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 2px solid #9ca3af;\n"
"    background-color: #f9fafb;\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: #f3f4f6;\n"
"    color: #9ca3af;\n"
"    border: 2px solid #e5e7eb;\n"
"}\n"
"\n"
"QLineEdit[readOnly=\"true\"] {\n"
"    background-color: #f9fafb;\n"
"    color: #6b7280;\n"
"    border: 2px solid #e5e7eb;\n"
"    font-style: italic;\n"
"}"));
        tableContainer = new QFrame(pageCamions);
        tableContainer->setObjectName("tableContainer");
        tableContainer->setGeometry(QRect(411, 90, 1031, 611));
        tableContainer->setStyleSheet(QString::fromUtf8("QFrame {\n"
"  background: white;\n"
"  border-radius: 12px;\n"
"  border: 2px solid #e5e7eb;\n"
"}"));
        tableContainer->setFrameShape(QFrame::Shape::StyledPanel);
        tableContainer->setFrameShadow(QFrame::Shadow::Raised);
        toolbarFrame = new QFrame(tableContainer);
        toolbarFrame->setObjectName("toolbarFrame");
        toolbarFrame->setGeometry(QRect(10, 350, 961, 131));
        toolbarFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"  background: white;\n"
"  border-radius: 12px;\n"
"  border: 2px solid #e5e7eb;\n"
"}"));
        toolbarFrame->setFrameShape(QFrame::Shape::StyledPanel);
        toolbarFrame->setFrameShadow(QFrame::Shadow::Raised);
        btnSupprimer = new QPushButton(toolbarFrame);
        btnSupprimer->setObjectName("btnSupprimer");
        btnSupprimer->setGeometry(QRect(330, 80, 140, 39));
        btnSupprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color: #3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        btnPDF = new QPushButton(toolbarFrame);
        btnPDF->setObjectName("btnPDF");
        btnPDF->setGeometry(QRect(480, 80, 140, 39));
        btnPDF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color: #3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        searchCamions = new QLineEdit(toolbarFrame);
        searchCamions->setObjectName("searchCamions");
        searchCamions->setGeometry(QRect(580, 10, 334, 49));
        searchCamions->setMinimumSize(QSize(334, 40));
        searchCamions->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  padding: 12px 15px;\n"
"  border: 2px solid #e5e7eb;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  color: #000000;\n"
"  background: white;\n"
"  min-width: 300px;\n"
"}\n"
"QLineEdit:focus {\n"
"  border: 2px solid #10b981;\n"
"}"));
        btnAjouter = new QPushButton(toolbarFrame);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setGeometry(QRect(30, 80, 140, 39));
        btnAjouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color:#3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        btnModifier = new QPushButton(toolbarFrame);
        btnModifier->setObjectName("btnModifier");
        btnModifier->setGeometry(QRect(180, 80, 140, 39));
        btnModifier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color: #3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        btnPDF_2 = new QPushButton(toolbarFrame);
        btnPDF_2->setObjectName("btnPDF_2");
        btnPDF_2->setGeometry(QRect(630, 80, 140, 39));
        btnPDF_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color:#3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        btnPDF_3 = new QPushButton(toolbarFrame);
        btnPDF_3->setObjectName("btnPDF_3");
        btnPDF_3->setGeometry(QRect(780, 80, 140, 39));
        btnPDF_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color:#3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        tableWidget = new QTableWidget(tableContainer);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(50, 0, 501, 331));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"  border: none;\n"
"  gridline-color: #e5e7eb;\n"
"  selection-background-color: #dcfce7;\n"
"  selection-color: #000000;\n"
"  font-size: 14px;\n"
"}\n"
"QHeaderView::section {\n"
"  background-color: #f0fdf4;\n"
"  color: #000000;\n"
"  font-weight: 700;\n"
"  padding: 12px 10px;\n"
"  border-bottom: 2px solid #10b981;\n"
"  border-right: 1px solid #e5e7eb;\n"
"  font-size: 13px;\n"
"}\n"
"QTableWidget::item {\n"
"  padding: 10px;\n"
"  border-bottom: 1px solid #f8fafc;\n"
"  color: #000000;\n"
"}\n"
"QTableWidget::item:selected {\n"
"  background-color: #dcfce7;\n"
"  color: #000000;\n"
"  font-weight: 600;\n"
"}\n"
""));
        calendarWidget = new QCalendarWidget(tableContainer);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(620, 10, 321, 281));
        groupBox = new QGroupBox(tableContainer);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 480, 951, 121));
        groupBox->setStyleSheet(QString::fromUtf8("/* \360\237\214\237 QGroupBox fond presque blanc avec bleu et gris tr\303\250s subtil */\n"
"QGroupBox {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #F8FAFC,   /* blanc avec un peu de gris */\n"
"        stop:1 #EFF5FA    /* bleu tr\303\250s tr\303\250s p\303\242le + gris l\303\251ger */\n"
"    );\n"
"    border: 2px solid #D1D9E6;  /* gris tr\303\250s clair pour la bordure */\n"
"    border-radius: 16px;\n"
"    margin-top: 22px;\n"
"    padding-top: 30px;\n"
"    font-weight: 600;\n"
"    font-size: 14px;\n"
"    color: #032242;\n"
"}\n"
"\n"
"/* Effet de relief */\n"
"QGroupBox {\n"
"    border-bottom: 3px solid #C0C8D8; /* gris tr\303\250s clair pour le relief */\n"
"}\n"
"\n"
"/* \360\237\224\265 Titre = couleur de r\303\251f\303\251rence #3b82f6 */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 7px 20px;\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        st"
                        "op:0 #3b82f6,\n"
"        stop:0.5 #5a95f8,\n"
"        stop:1 #3b82f6\n"
"    );\n"
"    color: #ffffff; /* texte blanc pour contraste */\n"
"    border: 2px solid #3b82f6;\n"
"    border-radius: 10px;\n"
"    margin-left: 16px;\n"
"    font-weight: 700;\n"
"    letter-spacing: 0.7px;\n"
"}\n"
"\n"
"/* \360\237\224\271 Bouton statistique avec la m\303\252me couleur de r\303\251f\303\251rence */\n"
"QPushButton#statButton {\n"
"    background-color: #3b82f6;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    font-weight: 600;\n"
"}\n"
"QPushButton#statButton:hover {\n"
"    background-color: #60a0f8;\n"
"}\n"
"QPushButton#statButton:pressed {\n"
"    background-color: #2565d6;\n"
"}\n"
"\n"
"\n"
""));
        label_15 = new QLabel(pageCamions);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 10, 351, 51));
        label_15->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"font-size: 28px;\n"
"font-weight: 700;"));
        stackedWidget->addWidget(pageCamions);
        pagePoubelles = new QWidget();
        pagePoubelles->setObjectName("pagePoubelles");
        pagePoubelles->setStyleSheet(QString::fromUtf8("background: #f8fafc;"));
        verticalLayout_3 = new QVBoxLayout(pagePoubelles);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(40, 40, 40, 40);
        label_5 = new QLabel(pagePoubelles);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"font-size: 28px;\n"
"font-weight: 700;\n"
"padding-bottom: 20px;"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(pagePoubelles);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"font-size: 18px;\n"
"background: white;\n"
"padding: 40px;\n"
"border-radius: 12px;\n"
"border: 2px dashed #10b981;\n"
"text-align: center;"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        stackedWidget->addWidget(pagePoubelles);
        pageChauffeurs = new QWidget();
        pageChauffeurs->setObjectName("pageChauffeurs");
        pageChauffeurs->setStyleSheet(QString::fromUtf8("background: #f8fafc;"));
        verticalLayout_4 = new QVBoxLayout(pageChauffeurs);
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(40, 40, 40, 40);
        label_7 = new QLabel(pageChauffeurs);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"font-size: 28px;\n"
"font-weight: 700;\n"
"padding-bottom: 20px;"));

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(pageChauffeurs);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"font-size: 18px;\n"
"background: white;\n"
"padding: 40px;\n"
"border-radius: 12px;\n"
"border: 2px dashed #10b981;\n"
"text-align: center;"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_8);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        stackedWidget->addWidget(pageChauffeurs);
        pageDechets = new QWidget();
        pageDechets->setObjectName("pageDechets");
        pageDechets->setStyleSheet(QString::fromUtf8("background: #f8fafc;"));
        verticalLayout_5 = new QVBoxLayout(pageDechets);
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(40, 40, 40, 40);
        label_9 = new QLabel(pageDechets);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"font-size: 28px;\n"
"font-weight: 700;\n"
"padding-bottom: 20px;"));

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(pageDechets);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"font-size: 18px;\n"
"background: white;\n"
"padding: 40px;\n"
"border-radius: 12px;\n"
"border: 2px dashed #10b981;\n"
"text-align: center;"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_10);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        stackedWidget->addWidget(pageDechets);
        pagePointsRecyclage = new QWidget();
        pagePointsRecyclage->setObjectName("pagePointsRecyclage");
        pagePointsRecyclage->setStyleSheet(QString::fromUtf8("background: #f8fafc;"));
        verticalLayout_6 = new QVBoxLayout(pagePointsRecyclage);
        verticalLayout_6->setSpacing(20);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(40, 40, 40, 40);
        label_11 = new QLabel(pagePointsRecyclage);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"font-size: 28px;\n"
"font-weight: 700;\n"
"padding-bottom: 20px;"));

        verticalLayout_6->addWidget(label_11);

        label_12 = new QLabel(pagePointsRecyclage);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"font-size: 18px;\n"
"background: white;\n"
"padding: 40px;\n"
"border-radius: 12px;\n"
"border: 2px dashed #10b981;\n"
"text-align: center;"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_12);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        stackedWidget->addWidget(pagePointsRecyclage);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "EcoSmart Collect - Gestion Intelligente des D\303\251chets", nullptr));
        logoLabel->setText(QCoreApplication::translate("MainWindow", "\342\231\273 EcoSmart", nullptr));
        btnFournisseurs->setText(QCoreApplication::translate("MainWindow", "\360\237\217\242 Fournisseurs", nullptr));
        btnCamions->setText(QCoreApplication::translate("MainWindow", "\360\237\232\232 Camions", nullptr));
        btnPoubelles->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Poubelles", nullptr));
        btnChauffeurs->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 Chauffeurs", nullptr));
        btnDechets->setText(QCoreApplication::translate("MainWindow", "\342\231\273\357\270\217 D\303\251chets", nullptr));
        btnPointsRecyclage->setText(QCoreApplication::translate("MainWindow", "\360\237\223\215 Points Recyclage", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "\342\217\273 Quitter", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\360\237\217\242 Gestion des Fournisseurs", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\342\217\263 Module en cours de d\303\251veloppement...", nullptr));
        formTitle->setText(QCoreApplication::translate("MainWindow", "Formulaire Camion", nullptr));
        labelCapacite->setText(QCoreApplication::translate("MainWindow", "Capacit\303\251 :", nullptr));
        comboEtat->setItemText(0, QCoreApplication::translate("MainWindow", "Bon \303\251tat", nullptr));
        comboEtat->setItemText(1, QCoreApplication::translate("MainWindow", "En maintenance", nullptr));
        comboEtat->setItemText(2, QCoreApplication::translate("MainWindow", "N\303\251cessite r\303\251vision", nullptr));
        comboEtat->setItemText(3, QCoreApplication::translate("MainWindow", "Excellent", nullptr));

        editMatricule->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: TN-123-AB", nullptr));
        comboDisponibilite->setItemText(0, QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        comboDisponibilite->setItemText(1, QCoreApplication::translate("MainWindow", "En mission", nullptr));
        comboDisponibilite->setItemText(2, QCoreApplication::translate("MainWindow", "Indisponible", nullptr));
        comboDisponibilite->setItemText(3, QCoreApplication::translate("MainWindow", "En r\303\251paration", nullptr));

        labelMatricule->setText(QCoreApplication::translate("MainWindow", "Matricule :", nullptr));
        labelDisponibilite->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251 :", nullptr));
        labelEtat->setText(QCoreApplication::translate("MainWindow", "\303\211tat :", nullptr));
        editCapacite->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: 15 Tonnes", nullptr));
        btnSupprimer->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221 Supprimer", nullptr));
        btnPDF->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204 PDF", nullptr));
        searchCamions->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Rechercher un camion...", nullptr));
        btnAjouter->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Ajouter", nullptr));
        btnModifier->setText(QCoreApplication::translate("MainWindow", "\342\234\217 Modifier", nullptr));
        btnPDF_2->setText(QCoreApplication::translate("MainWindow", "\360\237\227\272\357\270\217MAP", nullptr));
        btnPDF_3->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212STATISTIQUE", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Matricule", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Capacit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Etat", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Disponibilte", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\360\237\223\212STATISTIQUE", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\360\237\232\232 Gestion des Camions", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Gestion des Poubelles", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\342\217\263 Module en cours de d\303\251veloppement...", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 Gestion des Chauffeurs", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\342\217\263 Module en cours de d\303\251veloppement...", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\342\231\273\357\270\217 Gestion des D\303\251chets", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\342\217\263 Module en cours de d\303\251veloppement...", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\360\237\223\215 Points de Recyclage", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\342\217\263 Module en cours de d\303\251veloppement...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

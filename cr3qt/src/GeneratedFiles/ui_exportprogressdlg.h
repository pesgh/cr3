/********************************************************************************
** Form generated from reading UI file 'exportprogressdlg.ui'
**
** Created: Wed 19. Dec 17:04:45 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTPROGRESSDLG_H
#define UI_EXPORTPROGRESSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportProgressDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QProgressBar *progressBar;

    void setupUi(QDialog *ExportProgressDlg)
    {
        if (ExportProgressDlg->objectName().isEmpty())
            ExportProgressDlg->setObjectName(QString::fromUtf8("ExportProgressDlg"));
        ExportProgressDlg->resize(289, 105);
        verticalLayout = new QVBoxLayout(ExportProgressDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ExportProgressDlg);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        progressBar = new QProgressBar(ExportProgressDlg);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        retranslateUi(ExportProgressDlg);

        QMetaObject::connectSlotsByName(ExportProgressDlg);
    } // setupUi

    void retranslateUi(QDialog *ExportProgressDlg)
    {
        ExportProgressDlg->setWindowTitle(QApplication::translate("ExportProgressDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExportProgressDlg", "Export is in progress...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportProgressDlg: public Ui_ExportProgressDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTPROGRESSDLG_H

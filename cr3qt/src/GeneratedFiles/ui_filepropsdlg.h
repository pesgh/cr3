/********************************************************************************
** Form generated from reading UI file 'filepropsdlg.ui'
**
** Created: Wed 19. Dec 17:04:45 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEPROPSDLG_H
#define UI_FILEPROPSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilePropsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FilePropsDialog)
    {
        if (FilePropsDialog->objectName().isEmpty())
            FilePropsDialog->setObjectName(QString::fromUtf8("FilePropsDialog"));
        FilePropsDialog->resize(554, 420);
        verticalLayout = new QVBoxLayout(FilePropsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(FilePropsDialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(tableWidget);

        buttonBox = new QDialogButtonBox(FilePropsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FilePropsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FilePropsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FilePropsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilePropsDialog);
    } // setupUi

    void retranslateUi(QDialog *FilePropsDialog)
    {
        FilePropsDialog->setWindowTitle(QApplication::translate("FilePropsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FilePropsDialog: public Ui_FilePropsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEPROPSDLG_H

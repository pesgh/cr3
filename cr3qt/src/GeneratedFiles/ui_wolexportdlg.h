/********************************************************************************
** Form generated from reading UI file 'wolexportdlg.ui'
**
** Created: Wed 19. Dec 17:04:45 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOLEXPORTDLG_H
#define UI_WOLEXPORTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WolExportDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cbBitsPerPixel;
    QLabel *label_2;
    QComboBox *cbTocLevels;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WolExportDlg)
    {
        if (WolExportDlg->objectName().isEmpty())
            WolExportDlg->setObjectName(QString::fromUtf8("WolExportDlg"));
        WolExportDlg->resize(301, 176);
        verticalLayout = new QVBoxLayout(WolExportDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(WolExportDlg);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbBitsPerPixel = new QComboBox(WolExportDlg);
        cbBitsPerPixel->setObjectName(QString::fromUtf8("cbBitsPerPixel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cbBitsPerPixel);

        label_2 = new QLabel(WolExportDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cbTocLevels = new QComboBox(WolExportDlg);
        cbTocLevels->setObjectName(QString::fromUtf8("cbTocLevels"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cbTocLevels);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(WolExportDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(WolExportDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), WolExportDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WolExportDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(WolExportDlg);
    } // setupUi

    void retranslateUi(QDialog *WolExportDlg)
    {
        WolExportDlg->setWindowTitle(QApplication::translate("WolExportDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WolExportDlg", "Bits per pixel", 0, QApplication::UnicodeUTF8));
        cbBitsPerPixel->clear();
        cbBitsPerPixel->insertItems(0, QStringList()
         << QApplication::translate("WolExportDlg", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WolExportDlg", "2", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("WolExportDlg", "Table of Contents levels", 0, QApplication::UnicodeUTF8));
        cbTocLevels->clear();
        cbTocLevels->insertItems(0, QStringList()
         << QApplication::translate("WolExportDlg", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WolExportDlg", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WolExportDlg", "3", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class WolExportDlg: public Ui_WolExportDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOLEXPORTDLG_H

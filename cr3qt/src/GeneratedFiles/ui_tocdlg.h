/********************************************************************************
** Form generated from reading UI file 'tocdlg.ui'
**
** Created: Wed 19. Dec 17:04:45 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOCDLG_H
#define UI_TOCDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TocDlg
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TocDlg)
    {
        if (TocDlg->objectName().isEmpty())
            TocDlg->setObjectName(QString::fromUtf8("TocDlg"));
        TocDlg->resize(537, 385);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/action/icons/view-table-of-contents-ltr.png"), QSize(), QIcon::Normal, QIcon::Off);
        TocDlg->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(TocDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(TocDlg);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setAlternatingRowColors(false);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(TocDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TocDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), TocDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TocDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(TocDlg);
    } // setupUi

    void retranslateUi(QDialog *TocDlg)
    {
        TocDlg->setWindowTitle(QApplication::translate("TocDlg", "Table of Contents", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TocDlg: public Ui_TocDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOCDLG_H

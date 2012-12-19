/********************************************************************************
** Form generated from reading UI file 'recentdlg.ui'
**
** Created: Wed 19. Dec 17:04:45 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECENTDLG_H
#define UI_RECENTDLG_H

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

class Ui_RecentBooksDlg
{
public:
    QAction *actionRemoveItem;
    QAction *actionClearAll;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RecentBooksDlg)
    {
        if (RecentBooksDlg->objectName().isEmpty())
            RecentBooksDlg->setObjectName(QString::fromUtf8("RecentBooksDlg"));
        RecentBooksDlg->resize(711, 479);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/action/icons/folder_favorite.png"), QSize(), QIcon::Normal, QIcon::Off);
        RecentBooksDlg->setWindowIcon(icon);
        actionRemoveItem = new QAction(RecentBooksDlg);
        actionRemoveItem->setObjectName(QString::fromUtf8("actionRemoveItem"));
        actionClearAll = new QAction(RecentBooksDlg);
        actionClearAll->setObjectName(QString::fromUtf8("actionClearAll"));
        verticalLayout = new QVBoxLayout(RecentBooksDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(RecentBooksDlg);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout->addWidget(tableWidget);

        buttonBox = new QDialogButtonBox(RecentBooksDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RecentBooksDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), RecentBooksDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RecentBooksDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(RecentBooksDlg);
    } // setupUi

    void retranslateUi(QDialog *RecentBooksDlg)
    {
        RecentBooksDlg->setWindowTitle(QApplication::translate("RecentBooksDlg", "Recent Books", 0, QApplication::UnicodeUTF8));
        actionRemoveItem->setText(QApplication::translate("RecentBooksDlg", "Remove Item", 0, QApplication::UnicodeUTF8));
        actionRemoveItem->setShortcut(QApplication::translate("RecentBooksDlg", "Del", 0, QApplication::UnicodeUTF8));
        actionClearAll->setText(QApplication::translate("RecentBooksDlg", "Clear All", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RecentBooksDlg: public Ui_RecentBooksDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTDLG_H

/********************************************************************************
** Form generated from reading UI file 'bookmarklistdlg.ui'
**
** Created: Wed 19. Dec 17:04:45 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMARKLISTDLG_H
#define UI_BOOKMARKLISTDLG_H

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

class Ui_BookmarkListDialog
{
public:
    QAction *actionGoToBookmark;
    QAction *actionRemoveBookmark;
    QAction *actionRemoveALLBookmarks;
    QAction *actionEdit_Bookmark;
    QAction *actionClose;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BookmarkListDialog)
    {
        if (BookmarkListDialog->objectName().isEmpty())
            BookmarkListDialog->setObjectName(QString::fromUtf8("BookmarkListDialog"));
        BookmarkListDialog->resize(730, 451);
        actionGoToBookmark = new QAction(BookmarkListDialog);
        actionGoToBookmark->setObjectName(QString::fromUtf8("actionGoToBookmark"));
        actionRemoveBookmark = new QAction(BookmarkListDialog);
        actionRemoveBookmark->setObjectName(QString::fromUtf8("actionRemoveBookmark"));
        actionRemoveALLBookmarks = new QAction(BookmarkListDialog);
        actionRemoveALLBookmarks->setObjectName(QString::fromUtf8("actionRemoveALLBookmarks"));
        actionEdit_Bookmark = new QAction(BookmarkListDialog);
        actionEdit_Bookmark->setObjectName(QString::fromUtf8("actionEdit_Bookmark"));
        actionClose = new QAction(BookmarkListDialog);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        verticalLayout = new QVBoxLayout(BookmarkListDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(BookmarkListDialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(true);
        tableWidget->verticalHeader()->setMinimumSectionSize(18);

        verticalLayout->addWidget(tableWidget);

        buttonBox = new QDialogButtonBox(BookmarkListDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(BookmarkListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BookmarkListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BookmarkListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BookmarkListDialog);
    } // setupUi

    void retranslateUi(QDialog *BookmarkListDialog)
    {
        BookmarkListDialog->setWindowTitle(QApplication::translate("BookmarkListDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        actionGoToBookmark->setText(QApplication::translate("BookmarkListDialog", "Go to Bookmark", 0, QApplication::UnicodeUTF8));
        actionGoToBookmark->setShortcut(QApplication::translate("BookmarkListDialog", "Return", 0, QApplication::UnicodeUTF8));
        actionRemoveBookmark->setText(QApplication::translate("BookmarkListDialog", "Remove Bookmark", 0, QApplication::UnicodeUTF8));
        actionRemoveBookmark->setShortcut(QApplication::translate("BookmarkListDialog", "Del", 0, QApplication::UnicodeUTF8));
        actionRemoveALLBookmarks->setText(QApplication::translate("BookmarkListDialog", "Remove ALL Bookmarks", 0, QApplication::UnicodeUTF8));
        actionEdit_Bookmark->setText(QApplication::translate("BookmarkListDialog", "Edit Bookmark", 0, QApplication::UnicodeUTF8));
        actionEdit_Bookmark->setShortcut(QApplication::translate("BookmarkListDialog", "F4", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("BookmarkListDialog", "Close", 0, QApplication::UnicodeUTF8));
        actionClose->setShortcut(QApplication::translate("BookmarkListDialog", "Esc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BookmarkListDialog: public Ui_BookmarkListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKLISTDLG_H

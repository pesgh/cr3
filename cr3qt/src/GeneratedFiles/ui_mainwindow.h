/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 19. Dec 17:04:45 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "cr3widget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionOpen;
    QAction *actionToggle_Pages_Scroll;
    QAction *actionClose;
    QAction *actionMinimize;
    QAction *actionNextPage;
    QAction *actionPrevPage;
    QAction *actionNextLine;
    QAction *actionPrevLine;
    QAction *actionFirstPage;
    QAction *actionLastPage;
    QAction *actionBack;
    QAction *actionForward;
    QAction *actionNextChapter;
    QAction *actionPrevChapter;
    QAction *actionToggle_Full_Screen;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionTOC;
    QAction *actionRecentBooks;
    QAction *actionSettings;
    QAction *actionCopy;
    QAction *actionCopy2;
    QAction *actionAboutQT;
    QAction *actionAboutCoolReader;
    QAction *actionAddBookmark;
    QAction *actionShowBookmarksList;
    QAction *actionFileProperties;
    QAction *actionRotate;
    QAction *actionFindText;
    QAction *actionToggleEditMode;
    QAction *actionExport;
    QAction *actionNextPage2;
    QAction *actionPrevPage2;
    QAction *actionNextPage3;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    CR3View *view;
    QScrollBar *scroll;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuNavigation;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(600, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/cr3.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        actionOpen = new QAction(MainWindowClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/action/icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionToggle_Pages_Scroll = new QAction(MainWindowClass);
        actionToggle_Pages_Scroll->setObjectName(QString::fromUtf8("actionToggle_Pages_Scroll"));
        actionClose = new QAction(MainWindowClass);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/action/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionMinimize = new QAction(MainWindowClass);
        actionMinimize->setObjectName(QString::fromUtf8("actionMinimize"));
        actionMinimize->setShortcutContext(Qt::WindowShortcut);
        actionNextPage = new QAction(MainWindowClass);
        actionNextPage->setObjectName(QString::fromUtf8("actionNextPage"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/action/icons/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNextPage->setIcon(icon3);
        actionPrevPage = new QAction(MainWindowClass);
        actionPrevPage->setObjectName(QString::fromUtf8("actionPrevPage"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/action/icons/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrevPage->setIcon(icon4);
        actionNextLine = new QAction(MainWindowClass);
        actionNextLine->setObjectName(QString::fromUtf8("actionNextLine"));
        actionPrevLine = new QAction(MainWindowClass);
        actionPrevLine->setObjectName(QString::fromUtf8("actionPrevLine"));
        actionFirstPage = new QAction(MainWindowClass);
        actionFirstPage->setObjectName(QString::fromUtf8("actionFirstPage"));
        actionLastPage = new QAction(MainWindowClass);
        actionLastPage->setObjectName(QString::fromUtf8("actionLastPage"));
        actionBack = new QAction(MainWindowClass);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        actionForward = new QAction(MainWindowClass);
        actionForward->setObjectName(QString::fromUtf8("actionForward"));
        actionNextChapter = new QAction(MainWindowClass);
        actionNextChapter->setObjectName(QString::fromUtf8("actionNextChapter"));
        actionPrevChapter = new QAction(MainWindowClass);
        actionPrevChapter->setObjectName(QString::fromUtf8("actionPrevChapter"));
        actionToggle_Full_Screen = new QAction(MainWindowClass);
        actionToggle_Full_Screen->setObjectName(QString::fromUtf8("actionToggle_Full_Screen"));
        actionToggle_Full_Screen->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/action/icons/window_fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggle_Full_Screen->setIcon(icon5);
        actionZoom_In = new QAction(MainWindowClass);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/action/icons/viewmag+.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_In->setIcon(icon6);
        actionZoom_Out = new QAction(MainWindowClass);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/action/icons/viewmag-.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_Out->setIcon(icon7);
        actionTOC = new QAction(MainWindowClass);
        actionTOC->setObjectName(QString::fromUtf8("actionTOC"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/action/icons/view-table-of-contents-ltr.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTOC->setIcon(icon8);
        actionRecentBooks = new QAction(MainWindowClass);
        actionRecentBooks->setObjectName(QString::fromUtf8("actionRecentBooks"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/action/icons/folder_favorite.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecentBooks->setIcon(icon9);
        actionSettings = new QAction(MainWindowClass);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/action/icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon10);
        actionCopy = new QAction(MainWindowClass);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/action/icons/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon11);
        actionCopy2 = new QAction(MainWindowClass);
        actionCopy2->setObjectName(QString::fromUtf8("actionCopy2"));
        actionAboutQT = new QAction(MainWindowClass);
        actionAboutQT->setObjectName(QString::fromUtf8("actionAboutQT"));
        actionAboutCoolReader = new QAction(MainWindowClass);
        actionAboutCoolReader->setObjectName(QString::fromUtf8("actionAboutCoolReader"));
        actionAddBookmark = new QAction(MainWindowClass);
        actionAddBookmark->setObjectName(QString::fromUtf8("actionAddBookmark"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/action/icons/bookmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddBookmark->setIcon(icon12);
        actionShowBookmarksList = new QAction(MainWindowClass);
        actionShowBookmarksList->setObjectName(QString::fromUtf8("actionShowBookmarksList"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/action/icons/bookmark_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowBookmarksList->setIcon(icon13);
        actionFileProperties = new QAction(MainWindowClass);
        actionFileProperties->setObjectName(QString::fromUtf8("actionFileProperties"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/action/icons/player_playlist.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileProperties->setIcon(icon14);
        actionRotate = new QAction(MainWindowClass);
        actionRotate->setObjectName(QString::fromUtf8("actionRotate"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/action/icons/rotate_cw.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate->setIcon(icon15);
        actionFindText = new QAction(MainWindowClass);
        actionFindText->setObjectName(QString::fromUtf8("actionFindText"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/action/icons/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFindText->setIcon(icon16);
        actionToggleEditMode = new QAction(MainWindowClass);
        actionToggleEditMode->setObjectName(QString::fromUtf8("actionToggleEditMode"));
        actionExport = new QAction(MainWindowClass);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionNextPage2 = new QAction(MainWindowClass);
        actionNextPage2->setObjectName(QString::fromUtf8("actionNextPage2"));
        actionPrevPage2 = new QAction(MainWindowClass);
        actionPrevPage2->setObjectName(QString::fromUtf8("actionPrevPage2"));
        actionNextPage3 = new QAction(MainWindowClass);
        actionNextPage3->setObjectName(QString::fromUtf8("actionNextPage3"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(300, 300));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        view = new CR3View(centralWidget);
        view->setObjectName(QString::fromUtf8("view"));
        view->setContextMenuPolicy(Qt::CustomContextMenu);

        horizontalLayout_2->addWidget(view);

        scroll = new QScrollBar(centralWidget);
        scroll->setObjectName(QString::fromUtf8("scroll"));
        scroll->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(scroll);


        horizontalLayout->addLayout(horizontalLayout_2);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuNavigation = new QMenu(menuBar);
        menuNavigation->setObjectName(QString::fromUtf8("menuNavigation"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuNavigation->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionRecentBooks);
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(actionFileProperties);
        menuFile->addAction(actionSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuView->addAction(actionFindText);
        menuView->addAction(actionToggle_Pages_Scroll);
        menuView->addAction(actionMinimize);
        menuView->addAction(actionToggle_Full_Screen);
        menuView->addAction(actionZoom_In);
        menuView->addAction(actionZoom_Out);
        menuView->addAction(actionRotate);
        menuView->addSeparator();
        menuView->addAction(actionTOC);
        menuView->addAction(actionShowBookmarksList);
        menuView->addAction(actionAddBookmark);
        menuNavigation->addAction(actionNextPage);
        menuNavigation->addAction(actionPrevPage);
        menuNavigation->addAction(actionNextLine);
        menuNavigation->addAction(actionPrevLine);
        menuNavigation->addAction(actionFirstPage);
        menuNavigation->addAction(actionLastPage);
        menuNavigation->addAction(actionNextChapter);
        menuNavigation->addAction(actionPrevChapter);
        menuNavigation->addSeparator();
        menuNavigation->addAction(actionBack);
        menuNavigation->addAction(actionForward);
        menuHelp->addAction(actionAboutQT);
        menuHelp->addAction(actionAboutCoolReader);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionRecentBooks);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTOC);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFindText);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPrevPage);
        mainToolBar->addAction(actionNextPage);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionZoom_In);
        mainToolBar->addAction(actionZoom_Out);
        mainToolBar->addAction(actionRotate);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSettings);

        retranslateUi(MainWindowClass);
        QObject::connect(view, SIGNAL(customContextMenuRequested(QPoint)), MainWindowClass, SLOT(contextMenu(QPoint)));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "CoolReader", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindowClass", "Open...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindowClass", "Open file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("MainWindowClass", "F3", 0, QApplication::UnicodeUTF8));
        actionToggle_Pages_Scroll->setText(QApplication::translate("MainWindowClass", "Toggle Pages/Scroll", 0, QApplication::UnicodeUTF8));
        actionToggle_Pages_Scroll->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("MainWindowClass", "Close", 0, QApplication::UnicodeUTF8));
        actionClose->setShortcut(QApplication::translate("MainWindowClass", "F12", 0, QApplication::UnicodeUTF8));
        actionMinimize->setText(QApplication::translate("MainWindowClass", "Minimize", 0, QApplication::UnicodeUTF8));
        actionMinimize->setShortcut(QApplication::translate("MainWindowClass", "Esc", 0, QApplication::UnicodeUTF8));
        actionNextPage->setText(QApplication::translate("MainWindowClass", "Page Down", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNextPage->setToolTip(QApplication::translate("MainWindowClass", "Go to next page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNextPage->setShortcut(QApplication::translate("MainWindowClass", "PgDown", 0, QApplication::UnicodeUTF8));
        actionPrevPage->setText(QApplication::translate("MainWindowClass", "Page Up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPrevPage->setToolTip(QApplication::translate("MainWindowClass", "Back by page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPrevPage->setShortcut(QApplication::translate("MainWindowClass", "PgUp", 0, QApplication::UnicodeUTF8));
        actionNextLine->setText(QApplication::translate("MainWindowClass", "Line Down", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNextLine->setToolTip(QApplication::translate("MainWindowClass", "Forward by one line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNextLine->setShortcut(QApplication::translate("MainWindowClass", "Down", 0, QApplication::UnicodeUTF8));
        actionPrevLine->setText(QApplication::translate("MainWindowClass", "Line Up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPrevLine->setToolTip(QApplication::translate("MainWindowClass", "Back by line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPrevLine->setShortcut(QApplication::translate("MainWindowClass", "Up", 0, QApplication::UnicodeUTF8));
        actionFirstPage->setText(QApplication::translate("MainWindowClass", "First Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFirstPage->setToolTip(QApplication::translate("MainWindowClass", "Go to first page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFirstPage->setShortcut(QApplication::translate("MainWindowClass", "Home", 0, QApplication::UnicodeUTF8));
        actionLastPage->setText(QApplication::translate("MainWindowClass", "Last Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLastPage->setToolTip(QApplication::translate("MainWindowClass", "Go to last page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLastPage->setShortcut(QApplication::translate("MainWindowClass", "End", 0, QApplication::UnicodeUTF8));
        actionBack->setText(QApplication::translate("MainWindowClass", "Back", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBack->setToolTip(QApplication::translate("MainWindowClass", "Back in navigation history", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBack->setShortcut(QApplication::translate("MainWindowClass", "Backspace", 0, QApplication::UnicodeUTF8));
        actionForward->setText(QApplication::translate("MainWindowClass", "Forward", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionForward->setToolTip(QApplication::translate("MainWindowClass", "Go to the next position in navigation history", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionForward->setShortcut(QApplication::translate("MainWindowClass", "Shift+Backspace", 0, QApplication::UnicodeUTF8));
        actionNextChapter->setText(QApplication::translate("MainWindowClass", "Next Chapter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNextChapter->setToolTip(QApplication::translate("MainWindowClass", "Go to next chapter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNextChapter->setShortcut(QApplication::translate("MainWindowClass", "Alt+Down", 0, QApplication::UnicodeUTF8));
        actionPrevChapter->setText(QApplication::translate("MainWindowClass", "Previous Chapter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPrevChapter->setToolTip(QApplication::translate("MainWindowClass", "Go to previous chapter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPrevChapter->setShortcut(QApplication::translate("MainWindowClass", "Alt+Up", 0, QApplication::UnicodeUTF8));
        actionToggle_Full_Screen->setText(QApplication::translate("MainWindowClass", "Toggle Full Screen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggle_Full_Screen->setToolTip(QApplication::translate("MainWindowClass", "Toggle Full Screen mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggle_Full_Screen->setShortcut(QApplication::translate("MainWindowClass", "Alt+Return", 0, QApplication::UnicodeUTF8));
        actionZoom_In->setText(QApplication::translate("MainWindowClass", "Zoom In", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoom_In->setToolTip(QApplication::translate("MainWindowClass", "Increase font size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoom_In->setShortcut(QApplication::translate("MainWindowClass", "+", 0, QApplication::UnicodeUTF8));
        actionZoom_Out->setText(QApplication::translate("MainWindowClass", "Zoom Out", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoom_Out->setToolTip(QApplication::translate("MainWindowClass", "Decrease font size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoom_Out->setShortcut(QApplication::translate("MainWindowClass", "-", 0, QApplication::UnicodeUTF8));
        actionTOC->setText(QApplication::translate("MainWindowClass", "Table of Contents...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTOC->setToolTip(QApplication::translate("MainWindowClass", "Show table of contents", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTOC->setShortcut(QApplication::translate("MainWindowClass", "F4", 0, QApplication::UnicodeUTF8));
        actionRecentBooks->setText(QApplication::translate("MainWindowClass", "Recent Books", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRecentBooks->setToolTip(QApplication::translate("MainWindowClass", "Show recent books list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRecentBooks->setShortcut(QApplication::translate("MainWindowClass", "F5", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("MainWindowClass", "Settings...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSettings->setToolTip(QApplication::translate("MainWindowClass", "Settings dialog", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSettings->setShortcut(QApplication::translate("MainWindowClass", "F9", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindowClass", "Copy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MainWindowClass", "Copy selected text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCopy->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionCopy2->setText(QApplication::translate("MainWindowClass", "copy2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCopy2->setToolTip(QApplication::translate("MainWindowClass", "Copy alternative shortcut", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCopy2->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+Ins", 0, QApplication::UnicodeUTF8));
        actionAboutQT->setText(QApplication::translate("MainWindowClass", "About Qt", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAboutQT->setToolTip(QApplication::translate("MainWindowClass", "About Qt", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAboutCoolReader->setText(QApplication::translate("MainWindowClass", "About CoolReader", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAboutCoolReader->setToolTip(QApplication::translate("MainWindowClass", "About CoolReader", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAboutCoolReader->setShortcut(QApplication::translate("MainWindowClass", "F1", 0, QApplication::UnicodeUTF8));
        actionAddBookmark->setText(QApplication::translate("MainWindowClass", "Add Bookmark", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddBookmark->setToolTip(QApplication::translate("MainWindowClass", "Add bookmark", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddBookmark->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        actionShowBookmarksList->setText(QApplication::translate("MainWindowClass", "Bookmark List...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowBookmarksList->setToolTip(QApplication::translate("MainWindowClass", "Show bookmarks list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowBookmarksList->setShortcut(QApplication::translate("MainWindowClass", "F6", 0, QApplication::UnicodeUTF8));
        actionFileProperties->setText(QApplication::translate("MainWindowClass", "File Properties...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFileProperties->setToolTip(QApplication::translate("MainWindowClass", "Show file properties", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFileProperties->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+F1", 0, QApplication::UnicodeUTF8));
        actionRotate->setText(QApplication::translate("MainWindowClass", "Rotate", 0, QApplication::UnicodeUTF8));
        actionRotate->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionFindText->setText(QApplication::translate("MainWindowClass", "Find text...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFindText->setToolTip(QApplication::translate("MainWindowClass", "Find text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFindText->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionToggleEditMode->setText(QApplication::translate("MainWindowClass", "Toggle Edit Mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleEditMode->setToolTip(QApplication::translate("MainWindowClass", "Toggle edit mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleEditMode->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("MainWindowClass", "Export", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport->setToolTip(QApplication::translate("MainWindowClass", "Export document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExport->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionNextPage2->setText(QApplication::translate("MainWindowClass", "Next Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNextPage2->setToolTip(QApplication::translate("MainWindowClass", "Next Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNextPage2->setShortcut(QApplication::translate("MainWindowClass", "Right", 0, QApplication::UnicodeUTF8));
        actionPrevPage2->setText(QApplication::translate("MainWindowClass", "Previous Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPrevPage2->setToolTip(QApplication::translate("MainWindowClass", "Previous Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPrevPage2->setShortcut(QApplication::translate("MainWindowClass", "Left", 0, QApplication::UnicodeUTF8));
        actionNextPage3->setText(QApplication::translate("MainWindowClass", "Next Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNextPage3->setToolTip(QApplication::translate("MainWindowClass", "Next Page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNextPage3->setShortcut(QApplication::translate("MainWindowClass", "Space", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindowClass", "File", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindowClass", "View", 0, QApplication::UnicodeUTF8));
        menuNavigation->setTitle(QApplication::translate("MainWindowClass", "Navigation", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindowClass", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

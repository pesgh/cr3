/********************************************************************************
** Form generated from reading UI file 'searchdlg.ui'
**
** Created: Wed 19. Dec 17:04:45 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDLG_H
#define UI_SEARCHDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QCheckBox *cbCaseSensitive;
    QRadioButton *rbForward;
    QRadioButton *rbBackward;
    QLineEdit *edPattern;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnFindNext;
    QPushButton *btnClose;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QString::fromUtf8("SearchDialog"));
        SearchDialog->setWindowModality(Qt::ApplicationModal);
        SearchDialog->resize(400, 214);
        verticalLayout = new QVBoxLayout(SearchDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(SearchDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbCaseSensitive = new QCheckBox(SearchDialog);
        cbCaseSensitive->setObjectName(QString::fromUtf8("cbCaseSensitive"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cbCaseSensitive);

        rbForward = new QRadioButton(SearchDialog);
        rbForward->setObjectName(QString::fromUtf8("rbForward"));

        formLayout->setWidget(2, QFormLayout::FieldRole, rbForward);

        rbBackward = new QRadioButton(SearchDialog);
        rbBackward->setObjectName(QString::fromUtf8("rbBackward"));

        formLayout->setWidget(3, QFormLayout::FieldRole, rbBackward);

        edPattern = new QLineEdit(SearchDialog);
        edPattern->setObjectName(QString::fromUtf8("edPattern"));

        formLayout->setWidget(0, QFormLayout::FieldRole, edPattern);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnFindNext = new QPushButton(SearchDialog);
        btnFindNext->setObjectName(QString::fromUtf8("btnFindNext"));
        btnFindNext->setDefault(true);

        horizontalLayout->addWidget(btnFindNext);

        btnClose = new QPushButton(SearchDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(edPattern, cbCaseSensitive);
        QWidget::setTabOrder(cbCaseSensitive, rbForward);
        QWidget::setTabOrder(rbForward, rbBackward);
        QWidget::setTabOrder(rbBackward, btnFindNext);
        QWidget::setTabOrder(btnFindNext, btnClose);

        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SearchDialog", "Text", 0, QApplication::UnicodeUTF8));
        cbCaseSensitive->setText(QApplication::translate("SearchDialog", "Case Sensitive", 0, QApplication::UnicodeUTF8));
        rbForward->setText(QApplication::translate("SearchDialog", "Search forward", 0, QApplication::UnicodeUTF8));
        rbBackward->setText(QApplication::translate("SearchDialog", "Search backward", 0, QApplication::UnicodeUTF8));
        btnFindNext->setText(QApplication::translate("SearchDialog", "Find Next", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("SearchDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDLG_H

/********************************************************************************
** Form generated from reading UI file 'addbookmarkdlg.ui'
**
** Created: Wed 19. Dec 17:04:45 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKMARKDLG_H
#define UI_ADDBOOKMARKDLG_H

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
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddBookmarkDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cbType;
    QLabel *label_2;
    QLabel *lblPosition;
    QLabel *label_4;
    QLabel *lblComment;
    QPlainTextEdit *edComment;
    QPlainTextEdit *edPositionText;
    QLabel *label_6;
    QLabel *lblTitle;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddBookmarkDialog)
    {
        if (AddBookmarkDialog->objectName().isEmpty())
            AddBookmarkDialog->setObjectName(QString::fromUtf8("AddBookmarkDialog"));
        AddBookmarkDialog->resize(535, 402);
        verticalLayout = new QVBoxLayout(AddBookmarkDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(AddBookmarkDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbType = new QComboBox(AddBookmarkDialog);
        cbType->setObjectName(QString::fromUtf8("cbType"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cbType);

        label_2 = new QLabel(AddBookmarkDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lblPosition = new QLabel(AddBookmarkDialog);
        lblPosition->setObjectName(QString::fromUtf8("lblPosition"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lblPosition);

        label_4 = new QLabel(AddBookmarkDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lblComment = new QLabel(AddBookmarkDialog);
        lblComment->setObjectName(QString::fromUtf8("lblComment"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblComment);

        edComment = new QPlainTextEdit(AddBookmarkDialog);
        edComment->setObjectName(QString::fromUtf8("edComment"));

        formLayout->setWidget(4, QFormLayout::FieldRole, edComment);

        edPositionText = new QPlainTextEdit(AddBookmarkDialog);
        edPositionText->setObjectName(QString::fromUtf8("edPositionText"));

        formLayout->setWidget(3, QFormLayout::FieldRole, edPositionText);

        label_6 = new QLabel(AddBookmarkDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        lblTitle = new QLabel(AddBookmarkDialog);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lblTitle);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(AddBookmarkDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddBookmarkDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddBookmarkDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddBookmarkDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddBookmarkDialog);
    } // setupUi

    void retranslateUi(QDialog *AddBookmarkDialog)
    {
        AddBookmarkDialog->setWindowTitle(QApplication::translate("AddBookmarkDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddBookmarkDialog", "Bookmark type", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddBookmarkDialog", "Position", 0, QApplication::UnicodeUTF8));
        lblPosition->setText(QApplication::translate("AddBookmarkDialog", "Page 1/10 10%", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddBookmarkDialog", "Position text", 0, QApplication::UnicodeUTF8));
        lblComment->setText(QApplication::translate("AddBookmarkDialog", "Comment", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AddBookmarkDialog", "Title", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QApplication::translate("AddBookmarkDialog", "sample title", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddBookmarkDialog: public Ui_AddBookmarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKMARKDLG_H

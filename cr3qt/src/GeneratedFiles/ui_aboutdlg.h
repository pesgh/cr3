/********************************************************************************
** Form generated from reading UI file 'aboutdlg.ui'
**
** Created: Wed 19. Dec 17:04:45 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnSite;
    QLabel *lblVersion;
    QLabel *lblDate;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tabMain;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QWidget *tabLicense;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *plainTextEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(479, 368);
        verticalLayout_2 = new QVBoxLayout(AboutDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnSite = new QToolButton(AboutDialog);
        btnSite->setObjectName(QString::fromUtf8("btnSite"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/action/icons/coolreader.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSite->setIcon(icon);

        horizontalLayout_2->addWidget(btnSite);

        lblVersion = new QLabel(AboutDialog);
        lblVersion->setObjectName(QString::fromUtf8("lblVersion"));
        QFont font;
        font.setPointSize(16);
        lblVersion->setFont(font);
        lblVersion->setText(QString::fromUtf8("Cool Reader 3.0.22"));

        horizontalLayout_2->addWidget(lblVersion);

        lblDate = new QLabel(AboutDialog);
        lblDate->setObjectName(QString::fromUtf8("lblDate"));
        lblDate->setText(QString::fromUtf8("28-06-2010"));
        lblDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lblDate);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setText(QString::fromUtf8("(c) 1998-2010 Vadim Lopatin"));

        verticalLayout->addWidget(label_2);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabMain = new QWidget();
        tabMain->setObjectName(QString::fromUtf8("tabMain"));
        horizontalLayout = new QHBoxLayout(tabMain);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(tabMain);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);

        tabWidget->addTab(tabMain, QString());
        tabLicense = new QWidget();
        tabLicense->setObjectName(QString::fromUtf8("tabLicense"));
        verticalLayout_3 = new QVBoxLayout(tabLicense);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        plainTextEdit = new QPlainTextEdit(tabLicense);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(plainTextEdit);

        tabWidget->addTab(tabLicense, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        plainTextEdit_2 = new QPlainTextEdit(tab);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEdit_2->setReadOnly(true);

        verticalLayout_4->addWidget(plainTextEdit_2);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        btnSite->setText(QApplication::translate("AboutDialog", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        textBrowser->setAccessibleName(QApplication::translate("AboutDialog", "About Cool Reader", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        textBrowser->setHtml(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\">CoolReader is free open source e-book viewer based on CoolReader engine.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\">Source code is available at SourceForge </span><span style=\" font-family:'DejaVu Sans'; font-size:9pt; text-decoration: underline;\">http://sourceforge.net/projects/crengine </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:"
                        "0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\">under the terms of GNU GPL2 license.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt; text-decoration: underline;\">Third party components used:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\">Qt4.5 - as GUI library</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-"
                        "size:9pt;\">FreeType - font engine</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\">ZLib - ompressing library</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\">libpng - PNG image format support</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\">libjpeg - JPEG image format support</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\">Hyphenation dictionaries - from AlReader</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margi"
                        "n-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:9pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabMain), QApplication::translate("AboutDialog", "About", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("AboutDialog", "		    GNU GENERAL PUBLIC LICENSE\n"
"		       Version 2, June 1991\n"
"\n"
" Copyright (C) 1989, 1991 Free Software Foundation, Inc.\n"
"                       59 Temple Place, Suite 330, Boston, MA  02111-1307  USA\n"
" Everyone is permitted to copy and distribute verbatim copies\n"
" of this license document, but changing it is not allowed.\n"
"\n"
"			    Preamble\n"
"\n"
"  The licenses for most software are designed to take away your\n"
"freedom to share and change it.  By contrast, the GNU General Public\n"
"License is intended to guarantee your freedom to share and change free\n"
"software--to make sure the software is free for all its users.  This\n"
"General Public License applies to most of the Free Software\n"
"Foundation's software and to any other program whose authors commit to\n"
"using it.  (Some other Free Software Foundation software is covered by\n"
"the GNU Library General Public License instead.)  You can apply it to\n"
"your programs, too.\n"
"\n"
"  When we speak of free software, we are"
                        " referring to freedom, not\n"
"price.  Our General Public Licenses are designed to make sure that you\n"
"have the freedom to distribute copies of free software (and charge for\n"
"this service if you wish), that you receive source code or can get it\n"
"if you want it, that you can change the software or use pieces of it\n"
"in new free programs; and that you know you can do these things.\n"
"\n"
"  To protect your rights, we need to make restrictions that forbid\n"
"anyone to deny you these rights or to ask you to surrender the rights.\n"
"These restrictions translate to certain responsibilities for you if you\n"
"distribute copies of the software, or if you modify it.\n"
"\n"
"  For example, if you distribute copies of such a program, whether\n"
"gratis or for a fee, you must give the recipients all the rights that\n"
"you have.  You must make sure that they, too, receive or can get the\n"
"source code.  And you must show them these terms so they know their\n"
"rights.\n"
"\n"
"  We protect your rights with"
                        " two steps: (1) copyright the software, and\n"
"(2) offer you this license which gives you legal permission to copy,\n"
"distribute and/or modify the software.\n"
"\n"
"  Also, for each author's protection and ours, we want to make certain\n"
"that everyone understands that there is no warranty for this free\n"
"software.  If the software is modified by someone else and passed on, we\n"
"want its recipients to know that what they have is not the original, so\n"
"that any problems introduced by others will not reflect on the original\n"
"authors' reputations.\n"
"\n"
"  Finally, any free program is threatened constantly by software\n"
"patents.  We wish to avoid the danger that redistributors of a free\n"
"program will individually obtain patent licenses, in effect making the\n"
"program proprietary.  To prevent this, we have made it clear that any\n"
"patent must be licensed for everyone's free use or not licensed at all.\n"
"\n"
"  The precise terms and conditions for copying, distribution and\n"
"modificatio"
                        "n follow.\n"
"\n"
"		    GNU GENERAL PUBLIC LICENSE\n"
"   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION\n"
"\n"
"  0. This License applies to any program or other work which contains\n"
"a notice placed by the copyright holder saying it may be distributed\n"
"under the terms of this General Public License.  The \"Program\", below,\n"
"refers to any such program or work, and a \"work based on the Program\"\n"
"means either the Program or any derivative work under copyright law:\n"
"that is to say, a work containing the Program or a portion of it,\n"
"either verbatim or with modifications and/or translated into another\n"
"language.  (Hereinafter, translation is included without limitation in\n"
"the term \"modification\".)  Each licensee is addressed as \"you\".\n"
"\n"
"Activities other than copying, distribution and modification are not\n"
"covered by this License; they are outside its scope.  The act of\n"
"running the Program is not restricted, and the output from the Program\n"
"is cover"
                        "ed only if its contents constitute a work based on the\n"
"Program (independent of having been made by running the Program).\n"
"Whether that is true depends on what the Program does.\n"
"\n"
"  1. You may copy and distribute verbatim copies of the Program's\n"
"source code as you receive it, in any medium, provided that you\n"
"conspicuously and appropriately publish on each copy an appropriate\n"
"copyright notice and disclaimer of warranty; keep intact all the\n"
"notices that refer to this License and to the absence of any warranty;\n"
"and give any other recipients of the Program a copy of this License\n"
"along with the Program.\n"
"\n"
"You may charge a fee for the physical act of transferring a copy, and\n"
"you may at your option offer warranty protection in exchange for a fee.\n"
"\n"
"  2. You may modify your copy or copies of the Program or any portion\n"
"of it, thus forming a work based on the Program, and copy and\n"
"distribute such modifications or work under the terms of Section 1\n"
"above, "
                        "provided that you also meet all of these conditions:\n"
"\n"
"    a) You must cause the modified files to carry prominent notices\n"
"    stating that you changed the files and the date of any change.\n"
"\n"
"    b) You must cause any work that you distribute or publish, that in\n"
"    whole or in part contains or is derived from the Program or any\n"
"    part thereof, to be licensed as a whole at no charge to all third\n"
"    parties under the terms of this License.\n"
"\n"
"    c) If the modified program normally reads commands interactively\n"
"    when run, you must cause it, when started running for such\n"
"    interactive use in the most ordinary way, to print or display an\n"
"    announcement including an appropriate copyright notice and a\n"
"    notice that there is no warranty (or else, saying that you provide\n"
"    a warranty) and that users may redistribute the program under\n"
"    these conditions, and telling the user how to view a copy of this\n"
"    License.  (Exception: if the Progra"
                        "m itself is interactive but\n"
"    does not normally print such an announcement, your work based on\n"
"    the Program is not required to print an announcement.)\n"
"\n"
"These requirements apply to the modified work as a whole.  If\n"
"identifiable sections of that work are not derived from the Program,\n"
"and can be reasonably considered independent and separate works in\n"
"themselves, then this License, and its terms, do not apply to those\n"
"sections when you distribute them as separate works.  But when you\n"
"distribute the same sections as part of a whole which is a work based\n"
"on the Program, the distribution of the whole must be on the terms of\n"
"this License, whose permissions for other licensees extend to the\n"
"entire whole, and thus to each and every part regardless of who wrote it.\n"
"\n"
"Thus, it is not the intent of this section to claim rights or contest\n"
"your rights to work written entirely by you; rather, the intent is to\n"
"exercise the right to control the distribution of "
                        "derivative or\n"
"collective works based on the Program.\n"
"\n"
"In addition, mere aggregation of another work not based on the Program\n"
"with the Program (or with a work based on the Program) on a volume of\n"
"a storage or distribution medium does not bring the other work under\n"
"the scope of this License.\n"
"\n"
"  3. You may copy and distribute the Program (or a work based on it,\n"
"under Section 2) in object code or executable form under the terms of\n"
"Sections 1 and 2 above provided that you also do one of the following:\n"
"\n"
"    a) Accompany it with the complete corresponding machine-readable\n"
"    source code, which must be distributed under the terms of Sections\n"
"    1 and 2 above on a medium customarily used for software interchange; or,\n"
"\n"
"    b) Accompany it with a written offer, valid for at least three\n"
"    years, to give any third party, for a charge no more than your\n"
"    cost of physically performing source distribution, a complete\n"
"    machine-readable copy of"
                        " the corresponding source code, to be\n"
"    distributed under the terms of Sections 1 and 2 above on a medium\n"
"    customarily used for software interchange; or,\n"
"\n"
"    c) Accompany it with the information you received as to the offer\n"
"    to distribute corresponding source code.  (This alternative is\n"
"    allowed only for noncommercial distribution and only if you\n"
"    received the program in object code or executable form with such\n"
"    an offer, in accord with Subsection b above.)\n"
"\n"
"The source code for a work means the preferred form of the work for\n"
"making modifications to it.  For an executable work, complete source\n"
"code means all the source code for all modules it contains, plus any\n"
"associated interface definition files, plus the scripts used to\n"
"control compilation and installation of the executable.  However, as a\n"
"special exception, the source code distributed need not include\n"
"anything that is normally distributed (in either source or binary\n"
"form)"
                        " with the major components (compiler, kernel, and so on) of the\n"
"operating system on which the executable runs, unless that component\n"
"itself accompanies the executable.\n"
"\n"
"If distribution of executable or object code is made by offering\n"
"access to copy from a designated place, then offering equivalent\n"
"access to copy the source code from the same place counts as\n"
"distribution of the source code, even though third parties are not\n"
"compelled to copy the source along with the object code.\n"
"\n"
"  4. You may not copy, modify, sublicense, or distribute the Program\n"
"except as expressly provided under this License.  Any attempt\n"
"otherwise to copy, modify, sublicense or distribute the Program is\n"
"void, and will automatically terminate your rights under this License.\n"
"However, parties who have received copies, or rights, from you under\n"
"this License will not have their licenses terminated so long as such\n"
"parties remain in full compliance.\n"
"\n"
"  5. You are not required"
                        " to accept this License, since you have not\n"
"signed it.  However, nothing else grants you permission to modify or\n"
"distribute the Program or its derivative works.  These actions are\n"
"prohibited by law if you do not accept this License.  Therefore, by\n"
"modifying or distributing the Program (or any work based on the\n"
"Program), you indicate your acceptance of this License to do so, and\n"
"all its terms and conditions for copying, distributing or modifying\n"
"the Program or works based on it.\n"
"\n"
"  6. Each time you redistribute the Program (or any work based on the\n"
"Program), the recipient automatically receives a license from the\n"
"original licensor to copy, distribute or modify the Program subject to\n"
"these terms and conditions.  You may not impose any further\n"
"restrictions on the recipients' exercise of the rights granted herein.\n"
"You are not responsible for enforcing compliance by third parties to\n"
"this License.\n"
"\n"
"  7. If, as a consequence of a court judgment or al"
                        "legation of patent\n"
"infringement or for any other reason (not limited to patent issues),\n"
"conditions are imposed on you (whether by court order, agreement or\n"
"otherwise) that contradict the conditions of this License, they do not\n"
"excuse you from the conditions of this License.  If you cannot\n"
"distribute so as to satisfy simultaneously your obligations under this\n"
"License and any other pertinent obligations, then as a consequence you\n"
"may not distribute the Program at all.  For example, if a patent\n"
"license would not permit royalty-free redistribution of the Program by\n"
"all those who receive copies directly or indirectly through you, then\n"
"the only way you could satisfy both it and this License would be to\n"
"refrain entirely from distribution of the Program.\n"
"\n"
"If any portion of this section is held invalid or unenforceable under\n"
"any particular circumstance, the balance of the section is intended to\n"
"apply and the section as a whole is intended to apply in other\n"
""
                        "circumstances.\n"
"\n"
"It is not the purpose of this section to induce you to infringe any\n"
"patents or other property right claims or to contest validity of any\n"
"such claims; this section has the sole purpose of protecting the\n"
"integrity of the free software distribution system, which is\n"
"implemented by public license practices.  Many people have made\n"
"generous contributions to the wide range of software distributed\n"
"through that system in reliance on consistent application of that\n"
"system; it is up to the author/donor to decide if he or she is willing\n"
"to distribute software through any other system and a licensee cannot\n"
"impose that choice.\n"
"\n"
"This section is intended to make thoroughly clear what is believed to\n"
"be a consequence of the rest of this License.\n"
"\n"
"  8. If the distribution and/or use of the Program is restricted in\n"
"certain countries either by patents or by copyrighted interfaces, the\n"
"original copyright holder who places the Program under this Li"
                        "cense\n"
"may add an explicit geographical distribution limitation excluding\n"
"those countries, so that distribution is permitted only in or among\n"
"countries not thus excluded.  In such case, this License incorporates\n"
"the limitation as if written in the body of this License.\n"
"\n"
"  9. The Free Software Foundation may publish revised and/or new versions\n"
"of the General Public License from time to time.  Such new versions will\n"
"be similar in spirit to the present version, but may differ in detail to\n"
"address new problems or concerns.\n"
"\n"
"Each version is given a distinguishing version number.  If the Program\n"
"specifies a version number of this License which applies to it and \"any\n"
"later version\", you have the option of following the terms and conditions\n"
"either of that version or of any later version published by the Free\n"
"Software Foundation.  If the Program does not specify a version number of\n"
"this License, you may choose any version ever published by the Free Softwa"
                        "re\n"
"Foundation.\n"
"\n"
"  10. If you wish to incorporate parts of the Program into other free\n"
"programs whose distribution conditions are different, write to the author\n"
"to ask for permission.  For software which is copyrighted by the Free\n"
"Software Foundation, write to the Free Software Foundation; we sometimes\n"
"make exceptions for this.  Our decision will be guided by the two goals\n"
"of preserving the free status of all derivatives of our free software and\n"
"of promoting the sharing and reuse of software generally.\n"
"\n"
"			    NO WARRANTY\n"
"\n"
"  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY\n"
"FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN\n"
"OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES\n"
"PROVIDE THE PROGRAM \"AS IS\" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED\n"
"OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF\n"
"MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE E"
                        "NTIRE RISK AS\n"
"TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE\n"
"PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,\n"
"REPAIR OR CORRECTION.\n"
"\n"
"  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING\n"
"WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR\n"
"REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,\n"
"INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING\n"
"OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED\n"
"TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY\n"
"YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER\n"
"PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE\n"
"POSSIBILITY OF SUCH DAMAGES.\n"
"\n"
"		     END OF TERMS AND CONDITIONS\n"
"", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabLicense), QApplication::translate("AboutDialog", "License", 0, QApplication::UnicodeUTF8));
        plainTextEdit_2->setPlainText(QApplication::translate("AboutDialog", "Source code may be downloaded from sourceforge crengine project page:\n"
"http://sourceforge.net/projects/crengine/\n"
"\n"
"Latest source code is available from GIT repository:\n"
"> git clone git://crengine.git.sourceforge.net/gitroot/crengine/crengine\n"
"\n"
"See README.TXT at root directory of project for build instructions.\n"
"", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AboutDialog", "Source Code", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H

/********************************************************************************
** Form generated from reading UI file 'qalq_widget.ui'
**
** Created: Sun 29. Jan 18:10:28 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QALQ_WIDGET_H
#define UI_QALQ_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qalq_widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *qalq_main_layout;
    QPushButton *one;
    QPushButton *four;
    QPushButton *seven;
    QPushButton *times;
    QPushButton *eight;
    QPushButton *five;
    QPushButton *two;
    QPushButton *div;
    QPushButton *nine;
    QPushButton *six;
    QPushButton *three;
    QPushButton *zero;
    QLineEdit *line_edit;
    QPushButton *point;
    QPushButton *equals;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *clear;
    QPushButton *sqrt;
    QLineEdit *state;

    void setupUi(QWidget *qalq_widget)
    {
        if (qalq_widget->objectName().isEmpty())
            qalq_widget->setObjectName(QString::fromUtf8("qalq_widget"));
        qalq_widget->resize(371, 442);
        qalq_widget->setMinimumSize(QSize(371, 442));
        qalq_widget->setMaximumSize(QSize(381, 442));
        gridLayoutWidget = new QWidget(qalq_widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 351, 422));
        qalq_main_layout = new QGridLayout(gridLayoutWidget);
        qalq_main_layout->setSpacing(6);
        qalq_main_layout->setContentsMargins(0, 0, 0, 0);
        qalq_main_layout->setObjectName(QString::fromUtf8("qalq_main_layout"));
        qalq_main_layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        qalq_main_layout->setHorizontalSpacing(15);
        qalq_main_layout->setVerticalSpacing(10);
        qalq_main_layout->setContentsMargins(0, 0, 0, 0);
        one = new QPushButton(gridLayoutWidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(one, 6, 0, 1, 1);

        four = new QPushButton(gridLayoutWidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(four, 5, 0, 1, 1);

        seven = new QPushButton(gridLayoutWidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(seven, 4, 0, 1, 1);

        times = new QPushButton(gridLayoutWidget);
        times->setObjectName(QString::fromUtf8("times"));
        times->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(times, 3, 1, 1, 1);

        eight = new QPushButton(gridLayoutWidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(eight, 4, 1, 1, 1);

        five = new QPushButton(gridLayoutWidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(five, 5, 1, 1, 1);

        two = new QPushButton(gridLayoutWidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(two, 6, 1, 1, 1);

        div = new QPushButton(gridLayoutWidget);
        div->setObjectName(QString::fromUtf8("div"));
        div->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(div, 3, 2, 1, 1);

        nine = new QPushButton(gridLayoutWidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(nine, 4, 2, 1, 1);

        six = new QPushButton(gridLayoutWidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(six, 5, 2, 1, 1);

        three = new QPushButton(gridLayoutWidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(three, 6, 2, 1, 1);

        zero = new QPushButton(gridLayoutWidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(zero, 7, 0, 1, 2);

        line_edit = new QLineEdit(gridLayoutWidget);
        line_edit->setObjectName(QString::fromUtf8("line_edit"));
        line_edit->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(24);
        line_edit->setFont(font);
        line_edit->setAcceptDrops(false);
        line_edit->setInputMethodHints(Qt::ImhDigitsOnly);
        line_edit->setInputMask(QString::fromUtf8(""));
        line_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_edit->setReadOnly(true);

        qalq_main_layout->addWidget(line_edit, 1, 0, 1, 4);

        point = new QPushButton(gridLayoutWidget);
        point->setObjectName(QString::fromUtf8("point"));
        point->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(point, 7, 2, 1, 1);

        equals = new QPushButton(gridLayoutWidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        equals->setMinimumSize(QSize(0, 120));

        qalq_main_layout->addWidget(equals, 6, 3, 2, 1);

        plus = new QPushButton(gridLayoutWidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(plus, 5, 3, 1, 1);

        minus = new QPushButton(gridLayoutWidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(minus, 4, 3, 1, 1);

        clear = new QPushButton(gridLayoutWidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(clear, 3, 3, 1, 1);

        sqrt = new QPushButton(gridLayoutWidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sqrt->setMinimumSize(QSize(0, 50));

        qalq_main_layout->addWidget(sqrt, 3, 0, 1, 1);

        state = new QLineEdit(gridLayoutWidget);
        state->setObjectName(QString::fromUtf8("state"));
        state->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(22);
        state->setFont(font1);
        state->setAlignment(Qt::AlignCenter);
        state->setReadOnly(true);

        qalq_main_layout->addWidget(state, 0, 3, 1, 1);


        retranslateUi(qalq_widget);

        QMetaObject::connectSlotsByName(qalq_widget);
    } // setupUi

    void retranslateUi(QWidget *qalq_widget)
    {
        qalq_widget->setWindowTitle(QApplication::translate("qalq_widget", "qalq", 0, QApplication::UnicodeUTF8));
        one->setText(QApplication::translate("qalq_widget", "1", 0, QApplication::UnicodeUTF8));
        four->setText(QApplication::translate("qalq_widget", "4", 0, QApplication::UnicodeUTF8));
        seven->setText(QApplication::translate("qalq_widget", "7", 0, QApplication::UnicodeUTF8));
        times->setText(QApplication::translate("qalq_widget", "x", 0, QApplication::UnicodeUTF8));
        eight->setText(QApplication::translate("qalq_widget", "8", 0, QApplication::UnicodeUTF8));
        five->setText(QApplication::translate("qalq_widget", "5", 0, QApplication::UnicodeUTF8));
        two->setText(QApplication::translate("qalq_widget", "2", 0, QApplication::UnicodeUTF8));
        div->setText(QApplication::translate("qalq_widget", "/", 0, QApplication::UnicodeUTF8));
        nine->setText(QApplication::translate("qalq_widget", "9", 0, QApplication::UnicodeUTF8));
        six->setText(QApplication::translate("qalq_widget", "6", 0, QApplication::UnicodeUTF8));
        three->setText(QApplication::translate("qalq_widget", "3", 0, QApplication::UnicodeUTF8));
        zero->setText(QApplication::translate("qalq_widget", "0", 0, QApplication::UnicodeUTF8));
        line_edit->setText(QString());
        point->setText(QApplication::translate("qalq_widget", ".", 0, QApplication::UnicodeUTF8));
        equals->setText(QApplication::translate("qalq_widget", "=", 0, QApplication::UnicodeUTF8));
        plus->setText(QApplication::translate("qalq_widget", "+", 0, QApplication::UnicodeUTF8));
        minus->setText(QApplication::translate("qalq_widget", "-", 0, QApplication::UnicodeUTF8));
        clear->setText(QApplication::translate("qalq_widget", "C", 0, QApplication::UnicodeUTF8));
        sqrt->setText(QApplication::translate("qalq_widget", "Sqrt", 0, QApplication::UnicodeUTF8));
        state->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qalq_widget: public Ui_qalq_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QALQ_WIDGET_H

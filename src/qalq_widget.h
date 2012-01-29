/**************************************************************************
** qalq_widget.h
** This file is part of the "qalq" project,
**   and is released under the MIT Licence.
** Created by Huba Nagy on 27/01/12.
** Copyright (c) 2012 Huba Z. Nagy
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
** NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
** HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
** WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
** OTHER DEALINGS IN THE SOFTWARE.
**************************************************************************/

#ifndef QALQ_WIDGET_H
#define QALQ_WIDGET_H

#include <QWidget>

namespace Ui {
    class qalq_widget;
}

enum Operation {
    BUTTON_NONE = 0,
    BUTTON_PLUS = 1,
    BUTTON_MINUS,
    BUTTON_MULTIPLY,
    BUTTON_DIVIDE,
    BUTTON_EQUALS
};


class qalq_widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit qalq_widget(QWidget *parent = 0);
    ~qalq_widget();
    
private slots:
    void on_sqrt_clicked();

    void on_times_clicked();

    void on_div_clicked();

    void on_clear_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_minus_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_plus_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_equals_clicked();

    void on_zero_clicked();

    void on_point_clicked();

private:
    Ui::qalq_widget *ui;

    Operation _operation;

    int _total, _current;
    int _count_decimal_places;
    bool _summary;

    void reset();
    void next();
    void update_output();
    void number_pressed(int value);
    void operation_pressed(Operation operation);
    void update_state();
};

#endif // QALQ_WIDGET_H

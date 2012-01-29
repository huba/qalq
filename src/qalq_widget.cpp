/**************************************************************************
** <filename>
** This file is part of the "<project>" project,
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

#include "qalq_widget.h"
#include "ui_qalq_widget.h"

qalq_widget::qalq_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qalq_widget)
{
    ui->setupUi(this);

    ui->point->setDisabled(true);
    ui->sqrt->setDisabled(true);

    reset();
}

qalq_widget::~qalq_widget()
{
    delete ui;
}

void qalq_widget::reset()
{
    _operation = BUTTON_NONE;
    _summary = true;
    _total = 0;
    _current = 0;
    _count_decimal_places = 0;

    update_output();
}

void qalq_widget::next()
{
    switch (_operation){
        case BUTTON_PLUS:
            _total += _current;
            break;
        case BUTTON_MINUS:
            _total -= _current;
            break;
        case BUTTON_MULTIPLY:
            _total *= _current;
            break;
        case BUTTON_DIVIDE:
            _total /= _current;
            break;
        default:
            _total = _current;
    }

    _current = 0;
    _summary = true;

    update_output();
}

void qalq_widget::update_output()
{
    int value = 0;

    if (_summary) {
        value = _total;
    } else {
        value = _current;
    }

    update_state();
    ui->line_edit->setText(QString::number(value));
}

void qalq_widget::number_pressed(int value)
{
    /*if (_decimal_fract){
        _current = _current + (value / (10 ^ _count_decimal_places++));
    } else {
        _current = (_current * 10) + value;
    }*/
    _current = (_current * 10) + value;
    _summary = false;

    update_output();
}

void qalq_widget::operation_pressed(Operation operation)
{
    next();

    _operation = operation;
    update_output();
}

void qalq_widget::update_state()
{
    QString state;

    switch (_operation){
        case BUTTON_PLUS:
            state = "+";
            break;
        case BUTTON_MINUS:
            state = "-";
            break;
        case BUTTON_MULTIPLY:
            state = "×";
            break;
        case BUTTON_DIVIDE:
            state = "/";
            break;
        case BUTTON_NONE:
            state = "";
            break;
        default:
            state = "";
    }

    ui->state->setText(state);
}

void qalq_widget::on_sqrt_clicked()
{

}

void qalq_widget::on_times_clicked()
{
    operation_pressed(BUTTON_MULTIPLY);
}

void qalq_widget::on_div_clicked()
{
    operation_pressed(BUTTON_DIVIDE);
}

void qalq_widget::on_clear_clicked()
{
    reset();
}

void qalq_widget::on_seven_clicked()
{
    number_pressed(7);
}

void qalq_widget::on_eight_clicked()
{
    number_pressed(8);
}

void qalq_widget::on_nine_clicked()
{
    number_pressed(9);
}

void qalq_widget::on_minus_clicked()
{
    operation_pressed(BUTTON_MINUS);
}

void qalq_widget::on_four_clicked()
{
    number_pressed(4);
}

void qalq_widget::on_five_clicked()
{
    number_pressed(5);
}

void qalq_widget::on_six_clicked()
{
    number_pressed(6);
}

void qalq_widget::on_plus_clicked()
{
    operation_pressed(BUTTON_PLUS);
}

void qalq_widget::on_one_clicked()
{
    number_pressed(1);
}

void qalq_widget::on_two_clicked()
{
    number_pressed(2);
}

void qalq_widget::on_three_clicked()
{
    number_pressed(3);
}

void qalq_widget::on_equals_clicked()
{
    operation_pressed(BUTTON_EQUALS);
}

void qalq_widget::on_zero_clicked()
{
    number_pressed(0);
}

void qalq_widget::on_point_clicked()
{
    /*if (!_decimal_fract){
        append_to_output(".");

        _current += 0.0;

        _decimal_fract = true;
    }*/
}

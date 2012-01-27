/**************************************************************************
** calc.h
** This file is part of the "qalq" project,
**   and is released under the MIT Licence.
** Created by Huba Nagy on 10/01/12.
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

#ifndef CALC_H
#define CALC_H

#include <QWidget>
#include <iostream>
#include <sstream>
#include <qmath.h>

namespace Ui {
class Calc;
}

class Calc : public QWidget
{
    Q_OBJECT
    
public:
    explicit Calc(QWidget *parent = 0);
    ~Calc();
    
private slots:

    void on_clear_clicked();

    void on_times_clicked();

    void on_div_clicked();

    void on_minus_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_plus_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_zero_clicked();

    void on_equals_clicked();

    void on_point_clicked();

    void on_sqrt_clicked();

private:
    Ui::Calc *ui;

    void loadLicence();
    void notImplemented();
    void number(QString s);

    int donone;
    int add;
    int subtract;
    int multiply;
    int divide;
    bool decimal;
    bool multiple;
    bool multiplediff;
    bool first;

    int operation;

    double number1;
    double number2;
};

#endif // CALC_H

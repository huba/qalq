/**************************************************************************
** calc.cpp
** This file is part of the "qalq" project,
**   and is released under the MIT Licence.
** Created by Huba Nagy on %DATE%.
** Copyright (c) %YEAR% Huba Z. Nagy
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

#include "calc.h"
#include "ui_calc.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Calc::Calc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calc)
{
    ui->setupUi(this);

    //Here the values assigned to the operations are defined
    //so the operations can later be changed more easily.
    donone = 0;
    add = 1;
    subtract = 2;
    multiply = 3;
    divide = 4;
    //The variable that holds the actual value
    operation = donone;

    number1 = 0;
    number2 = 0;

    //True if the current number already has ONE decimal pointer
    decimal = false;
    //True if the equals button is clicked when the operator is
    //holding a value, it turns false as soon as you start entering
    //a new number after that.
    multiple = false;
    multiplediff = false;
    first = false;

    ui->lineEdit->setText(QString::number(number1));

    //Loads the licence from a text file.
    loadLicence();
}

Calc::~Calc()
{
    delete ui;
}

void Calc::loadLicence(){
    QFile inputFile(":/MIT.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->licenceField->setPlainText(line);
}

void Calc::on_clear_clicked()
{
    number1 = 0;
    number2 = 0;
    decimal = false;
    ui->lineEdit->setText(QString::number(number1));
    operation = donone;
}

void Calc::on_times_clicked()
{
    operation = multiply;
    decimal = false;
    first = true;
    number1 = ui->lineEdit->text().toDouble(false);
}

void Calc::on_div_clicked()
{
    operation = divide;
    decimal = false;
    if (first){
        multiplediff = true;
    }
    first = true;
    if (!multiplediff){
        number1 = ui->lineEdit->text().toFloat(false);
    }
}

void Calc::on_minus_clicked()
{
    operation = subtract;
    decimal = false;
    first = true;
    number1 = ui->lineEdit->text().toFloat(false);
}

void Calc::on_seven_clicked()
{
    number("7");
}

void Calc::on_eight_clicked()
{
    number("8");
}

void Calc::on_nine_clicked()
{
    number("9");
}

void Calc::on_plus_clicked()
{
    operation = add;
    decimal = false;
    first = true;
    number1 = ui->lineEdit->text().toFloat(false);
}

void Calc::on_four_clicked()
{
    number("4");
}

void Calc::on_five_clicked()
{
    number("5");
}

void Calc::on_six_clicked()
{
    number("6");
}

void Calc::on_equals_clicked()
{
    if(!multiple){
        if (operation ==donone){

        } else if (operation == add){
            number2 = ui->lineEdit->text().toFloat(false);
            number1 = number1 + number2;
            ui->lineEdit->setText(QString::number(number1));
        } else if (operation == subtract){
            number2 = ui->lineEdit->text().toFloat(false);
            number1 = number1 - number2;
            ui->lineEdit->setText(QString::number(number1));
        } else if (operation == multiply){
            number2 = ui->lineEdit->text().toFloat(false);
            number1 = number1 * number2;
            ui->lineEdit->setText(QString::number(number1));
        } else if (operation == divide){
            number2 = ui->lineEdit->text().toFloat(false);
            number1 = number1 / number2;
            ui->lineEdit->setText(QString::number(number1));
        }
    } else if (multiple || multiplediff){
        if (operation ==donone){

        } else if (operation == add){
            number1 = number1 + number2;
            ui->lineEdit->setText(QString::number(number1));
        } else if (operation == subtract){
            number1 = number1 - number2;
            ui->lineEdit->setText(QString::number(number1));
        } else if (operation == multiply){
            number1 = number1 * number2;
            ui->lineEdit->setText(QString::number(number1));
        } else if (operation == divide){
            number1 = number1 / number2;
            ui->lineEdit->setText(QString::number(number1));
        }
    }

    first = true;
    multiple = true;

}

void Calc::on_one_clicked()
{
    number("1");
}

void Calc::on_two_clicked()
{
    number("2");
}

void Calc::on_three_clicked()
{
    number("3");
}

void Calc::on_zero_clicked()
{
    number("0");
}

void Calc::on_point_clicked()
{
    if (!decimal) {
        if (operation == donone){
            ui->lineEdit->setText(ui->lineEdit->text().append("."));
        } else if ((operation != donone) && (first)) {
            ui->lineEdit->setText("0.");
            first = false;
        } else if ((operation != donone) && (!first)){
            ui->lineEdit->setText(ui->lineEdit->text().append("."));
        }

        decimal = true;
    }
}


void Calc::on_sqrt_clicked()
{
    notImplemented();
}

void Calc::notImplemented()
{
    QMessageBox::critical(this, tr("Error"), tr("Function not implemented yet."));
}

void Calc::number(QString s)
{
    if ((operation == donone) && (ui->lineEdit->text() == "0")){
        ui->lineEdit->setText(s);
    } else if ((operation == donone) && (ui->lineEdit->text() != "0")) {
        ui->lineEdit->setText(ui->lineEdit->text().append(s));
    } else if ((operation != donone) && (ui->lineEdit->text() == QString::number(number1))){
        ui->lineEdit->setText(s);
    } else if ((operation != donone) && (ui->lineEdit->text() != QString::number(number1))){
        ui->lineEdit->setText(ui->lineEdit->text().append(s));
    }

    if (multiple || multiplediff){
        operation = donone;
    }

    multiple = false;
    first = false;
}

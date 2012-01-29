/**************************************************************************
** main.cpp
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

#include <QtGui/QApplication>
#include "qalq_widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qalq_widget w;
    w.show();
    
    return a.exec();
}

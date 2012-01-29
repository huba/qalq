/****************************************************************************
** Meta object code from reading C++ file 'qalq_widget.h'
**
** Created: Sun 29. Jan 18:10:29 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qalq_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qalq_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qalq_widget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      31,   12,   12,   12, 0x08,
      50,   12,   12,   12, 0x08,
      67,   12,   12,   12, 0x08,
      86,   12,   12,   12, 0x08,
     105,   12,   12,   12, 0x08,
     124,   12,   12,   12, 0x08,
     142,   12,   12,   12, 0x08,
     161,   12,   12,   12, 0x08,
     179,   12,   12,   12, 0x08,
     197,   12,   12,   12, 0x08,
     214,   12,   12,   12, 0x08,
     232,   12,   12,   12, 0x08,
     249,   12,   12,   12, 0x08,
     266,   12,   12,   12, 0x08,
     285,   12,   12,   12, 0x08,
     305,   12,   12,   12, 0x08,
     323,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qalq_widget[] = {
    "qalq_widget\0\0on_sqrt_clicked()\0"
    "on_times_clicked()\0on_div_clicked()\0"
    "on_clear_clicked()\0on_seven_clicked()\0"
    "on_eight_clicked()\0on_nine_clicked()\0"
    "on_minus_clicked()\0on_four_clicked()\0"
    "on_five_clicked()\0on_six_clicked()\0"
    "on_plus_clicked()\0on_one_clicked()\0"
    "on_two_clicked()\0on_three_clicked()\0"
    "on_equals_clicked()\0on_zero_clicked()\0"
    "on_point_clicked()\0"
};

const QMetaObject qalq_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qalq_widget,
      qt_meta_data_qalq_widget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qalq_widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qalq_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qalq_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qalq_widget))
        return static_cast<void*>(const_cast< qalq_widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int qalq_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_sqrt_clicked(); break;
        case 1: on_times_clicked(); break;
        case 2: on_div_clicked(); break;
        case 3: on_clear_clicked(); break;
        case 4: on_seven_clicked(); break;
        case 5: on_eight_clicked(); break;
        case 6: on_nine_clicked(); break;
        case 7: on_minus_clicked(); break;
        case 8: on_four_clicked(); break;
        case 9: on_five_clicked(); break;
        case 10: on_six_clicked(); break;
        case 11: on_plus_clicked(); break;
        case 12: on_one_clicked(); break;
        case 13: on_two_clicked(); break;
        case 14: on_three_clicked(); break;
        case 15: on_equals_clicked(); break;
        case 16: on_zero_clicked(); break;
        case 17: on_point_clicked(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

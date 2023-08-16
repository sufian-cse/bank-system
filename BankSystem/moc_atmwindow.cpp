/****************************************************************************
** Meta object code from reading C++ file 'atmwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bankSystem(temp)/atmwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'atmwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_atmwindow_t {
    QByteArrayData data[9];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_atmwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_atmwindow_t qt_meta_stringdata_atmwindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "atmwindow"
QT_MOC_LITERAL(1, 10, 16), // "close_atm_window"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 30), // "on_pushButton_withdraw_clicked"
QT_MOC_LITERAL(4, 59, 27), // "on_pushButton_check_clicked"
QT_MOC_LITERAL(5, 87, 13), // "digit_pressed"
QT_MOC_LITERAL(6, 101, 28), // "on_pushButton_clear_released"
QT_MOC_LITERAL(7, 130, 26), // "on_pushButton_exit_clicked"
QT_MOC_LITERAL(8, 157, 29) // "on_pushButton_confirm_clicked"

    },
    "atmwindow\0close_atm_window\0\0"
    "on_pushButton_withdraw_clicked\0"
    "on_pushButton_check_clicked\0digit_pressed\0"
    "on_pushButton_clear_released\0"
    "on_pushButton_exit_clicked\0"
    "on_pushButton_confirm_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_atmwindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void atmwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        atmwindow *_t = static_cast<atmwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->close_atm_window(); break;
        case 1: _t->on_pushButton_withdraw_clicked(); break;
        case 2: _t->on_pushButton_check_clicked(); break;
        case 3: _t->digit_pressed(); break;
        case 4: _t->on_pushButton_clear_released(); break;
        case 5: _t->on_pushButton_exit_clicked(); break;
        case 6: _t->on_pushButton_confirm_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (atmwindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&atmwindow::close_atm_window)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject atmwindow::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_atmwindow.data,
    qt_meta_data_atmwindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *atmwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *atmwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_atmwindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int atmwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void atmwindow::close_atm_window()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

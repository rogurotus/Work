/****************************************************************************
** Meta object code from reading C++ file 'maincomendant.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../work_proto/maincomendant.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maincomendant.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainComendant_t {
    QByteArrayData data[11];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainComendant_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainComendant_t qt_meta_stringdata_MainComendant = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MainComendant"
QT_MOC_LITERAL(1, 14, 6), // "update"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "on_action_triggered"
QT_MOC_LITERAL(4, 42, 21), // "on_action_2_triggered"
QT_MOC_LITERAL(5, 64, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(6, 86, 21), // "on_action_4_triggered"
QT_MOC_LITERAL(7, 108, 21), // "on_action_5_triggered"
QT_MOC_LITERAL(8, 130, 21), // "on_action_6_triggered"
QT_MOC_LITERAL(9, 152, 21), // "on_action_7_triggered"
QT_MOC_LITERAL(10, 174, 21) // "on_pushButton_clicked"

    },
    "MainComendant\0update\0\0on_action_triggered\0"
    "on_action_2_triggered\0on_action_3_triggered\0"
    "on_action_4_triggered\0on_action_5_triggered\0"
    "on_action_6_triggered\0on_action_7_triggered\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainComendant[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       3,    0,   62,    2, 0x08 /* Private */,
       4,    0,   63,    2, 0x08 /* Private */,
       5,    0,   64,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainComendant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainComendant *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_action_triggered(); break;
        case 2: _t->on_action_2_triggered(); break;
        case 3: _t->on_action_3_triggered(); break;
        case 4: _t->on_action_4_triggered(); break;
        case 5: _t->on_action_5_triggered(); break;
        case 6: _t->on_action_6_triggered(); break;
        case 7: _t->on_action_7_triggered(); break;
        case 8: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainComendant::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainComendant.data,
    qt_meta_data_MainComendant,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainComendant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainComendant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainComendant.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainComendant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'SnapTool.h'
**
** Created: Mon Aug 16 20:37:31 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SnapTool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SnapTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SnapTool[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      17,    9,    9,    9, 0x0a,
      31,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SnapTool[] = {
    "SnapTool\0\0done()\0snapAndSend()\0"
    "emitDone()\0"
};

const QMetaObject SnapTool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SnapTool,
      qt_meta_data_SnapTool, 0 }
};

const QMetaObject *SnapTool::metaObject() const
{
    return &staticMetaObject;
}

void *SnapTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SnapTool))
        return static_cast<void*>(const_cast< SnapTool*>(this));
    return QObject::qt_metacast(_clname);
}

int SnapTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: done(); break;
        case 1: snapAndSend(); break;
        case 2: emitDone(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SnapTool::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE

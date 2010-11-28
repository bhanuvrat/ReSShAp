/****************************************************************************
** Meta object code from reading C++ file 'Connection.h'
**
** Created: Tue Aug 17 08:42:38 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Connection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Connection[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      31,   11,   11,   11, 0x05,
      55,   11,   11,   11, 0x05,
      75,   11,   11,   11, 0x05,
      98,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     120,   11,   11,   11, 0x0a,
     137,   11,   11,   11, 0x0a,
     154,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Connection[] = {
    "Connection\0\0rConnectRecieved()\0"
    "rStartSharingRecieved()\0rSendMoreRecieved()\0"
    "rStopSharingRecieved()\0rDisconnectRecieved()\0"
    "processRequest()\0invokeSnapTool()\0"
    "setPixmapSize(QSize)\0"
};

const QMetaObject Connection::staticMetaObject = {
    { &ConnectionData::staticMetaObject, qt_meta_stringdata_Connection,
      qt_meta_data_Connection, 0 }
};

const QMetaObject *Connection::metaObject() const
{
    return &staticMetaObject;
}

void *Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Connection))
        return static_cast<void*>(const_cast< Connection*>(this));
    return ConnectionData::qt_metacast(_clname);
}

int Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectionData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rConnectRecieved(); break;
        case 1: rStartSharingRecieved(); break;
        case 2: rSendMoreRecieved(); break;
        case 3: rStopSharingRecieved(); break;
        case 4: rDisconnectRecieved(); break;
        case 5: processRequest(); break;
        case 6: invokeSnapTool(); break;
        case 7: setPixmapSize((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Connection::rConnectRecieved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Connection::rStartSharingRecieved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Connection::rSendMoreRecieved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Connection::rStopSharingRecieved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Connection::rDisconnectRecieved()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE

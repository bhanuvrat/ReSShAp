/****************************************************************************
** Meta object code from reading C++ file 'Connection.h'
**
** Created: Sun Nov 28 17:23:40 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Connection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Connection[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      31,   11,   11,   11, 0x05,
      49,   11,   11,   11, 0x05,
      70,   11,   11,   11, 0x05,
      89,   11,   11,   11, 0x05,
     108,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     132,   11,   11,   11, 0x0a,
     157,   11,  153,   11, 0x0a,
     168,   11,   11,   11, 0x0a,
     182,   11,   11,   11, 0x0a,
     204,   11,   11,   11, 0x0a,
     219,   11,   11,   11, 0x0a,
     236,   11,   11,   11, 0x0a,
     250,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Connection[] = {
    "Connection\0\0pixmapSizeNeeded()\0"
    "mPixmapReceived()\0mConnectedReceived()\0"
    "mStartedReceived()\0mStoppedReceived()\0"
    "mDisconnectedReceived()\0sendRequest(Request)\0"
    "int\0readData()\0acquireInfo()\0"
    "establishConnection()\0startSharing()\0"
    "requestForMore()\0stopSharing()\0"
    "terminateConnection()\0"
};

const QMetaObject Connection::staticMetaObject = {
    { &ConnectionData::staticMetaObject, qt_meta_stringdata_Connection,
      qt_meta_data_Connection, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Connection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
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
        case 0: pixmapSizeNeeded(); break;
        case 1: mPixmapReceived(); break;
        case 2: mConnectedReceived(); break;
        case 3: mStartedReceived(); break;
        case 4: mStoppedReceived(); break;
        case 5: mDisconnectedReceived(); break;
        case 6: sendRequest((*reinterpret_cast< Request(*)>(_a[1]))); break;
        case 7: { int _r = readData();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: acquireInfo(); break;
        case 9: establishConnection(); break;
        case 10: startSharing(); break;
        case 11: requestForMore(); break;
        case 12: stopSharing(); break;
        case 13: terminateConnection(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Connection::pixmapSizeNeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Connection::mPixmapReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Connection::mConnectedReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Connection::mStartedReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Connection::mStoppedReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Connection::mDisconnectedReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE

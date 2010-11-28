/****************************************************************************
** Meta object code from reading C++ file 'AccessorApp.h'
**
** Created: Sun Nov 28 17:23:38 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AccessorApp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccessorApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AccessorApp[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   12,   12,   12, 0x0a,
      49,   12,   12,   12, 0x0a,
      69,   12,   12,   12, 0x0a,
      90,   12,   12,   12, 0x0a,
     109,   12,   12,   12, 0x0a,
     122,   12,   12,   12, 0x0a,
     141,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AccessorApp[] = {
    "AccessorApp\0\0wantsToExit()\0"
    "handleNewConnection()\0handleStartAction()\0"
    "saveImageLabelSize()\0handleStopAction()\0"
    "showPixmap()\0handleExitAction()\0"
    "displayAboutBox()\0"
};

const QMetaObject AccessorApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AccessorApp,
      qt_meta_data_AccessorApp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AccessorApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AccessorApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AccessorApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AccessorApp))
        return static_cast<void*>(const_cast< AccessorApp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AccessorApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: wantsToExit(); break;
        case 1: handleNewConnection(); break;
        case 2: handleStartAction(); break;
        case 3: saveImageLabelSize(); break;
        case 4: handleStopAction(); break;
        case 5: showPixmap(); break;
        case 6: handleExitAction(); break;
        case 7: displayAboutBox(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AccessorApp::wantsToExit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'TrackingWindow.h'
**
** Created: Sun Feb 19 19:57:22 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TrackingWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrackingWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TrackingWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x0a,
      55,   16,   15,   15, 0x0a,
      94,   87,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TrackingWindow[] = {
    "TrackingWindow\0\0image\0"
    "updateDepthImage(unsigned char*)\0"
    "updateMaskImage(unsigned char*)\0x,y,id\0"
    "addPoint(uint,uint,JointID)\0"
};

const QMetaObject TrackingWindow::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_TrackingWindow,
      qt_meta_data_TrackingWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TrackingWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TrackingWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TrackingWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TrackingWindow))
        return static_cast<void*>(const_cast< TrackingWindow*>(this));
    return QLabel::qt_metacast(_clname);
}

int TrackingWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateDepthImage((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 1: updateMaskImage((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 2: addPoint((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< JointID(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
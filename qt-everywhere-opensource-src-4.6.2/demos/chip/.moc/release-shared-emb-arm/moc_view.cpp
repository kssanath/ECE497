/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created: Mon Feb 13 23:32:17 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../view.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_View[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      18,    5,    5,    5, 0x08,
      42,    5,    5,    5, 0x08,
      56,    5,    5,    5, 0x08,
      71,    5,    5,    5, 0x08,
      92,    5,    5,    5, 0x08,
     100,    5,    5,    5, 0x08,
     109,    5,    5,    5, 0x08,
     119,    5,    5,    5, 0x08,
     132,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_View[] = {
    "View\0\0resetView()\0setResetButtonEnabled()\0"
    "setupMatrix()\0toggleOpenGL()\0"
    "toggleAntialiasing()\0print()\0zoomIn()\0"
    "zoomOut()\0rotateLeft()\0rotateRight()\0"
};

const QMetaObject View::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_View,
      qt_meta_data_View, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &View::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *View::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_View))
        return static_cast<void*>(const_cast< View*>(this));
    return QFrame::qt_metacast(_clname);
}

int View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: resetView(); break;
        case 1: setResetButtonEnabled(); break;
        case 2: setupMatrix(); break;
        case 3: toggleOpenGL(); break;
        case 4: toggleAntialiasing(); break;
        case 5: print(); break;
        case 6: zoomIn(); break;
        case 7: zoomOut(); break;
        case 8: rotateLeft(); break;
        case 9: rotateRight(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
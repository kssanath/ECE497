/****************************************************************************
** Meta object code from reading C++ file 'simplestyle.h'
**
** Created: Mon Feb 13 23:22:34 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../simplestyle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simplestyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimpleStyle[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_SimpleStyle[] = {
    "SimpleStyle\0"
};

const QMetaObject SimpleStyle::staticMetaObject = {
    { &QWindowsStyle::staticMetaObject, qt_meta_stringdata_SimpleStyle,
      qt_meta_data_SimpleStyle, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimpleStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimpleStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimpleStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleStyle))
        return static_cast<void*>(const_cast< SimpleStyle*>(this));
    return QWindowsStyle::qt_metacast(_clname);
}

int SimpleStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindowsStyle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

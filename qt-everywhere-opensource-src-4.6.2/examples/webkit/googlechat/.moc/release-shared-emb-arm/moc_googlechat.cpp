/****************************************************************************
** Meta object code from reading C++ file 'googlechat.h'
**
** Created: Mon Feb 13 23:30:01 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../googlechat.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googlechat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GoogleChat[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      32,   11,   11,   11, 0x08,
      48,   11,   11,   11, 0x08,
      61,   58,   11,   11, 0x08,
      79,   58,   11,   11, 0x08,
      95,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GoogleChat[] = {
    "GoogleChat\0\0adjustLoginButton()\0"
    "inputPassword()\0doLogin()\0ok\0"
    "initialPage(bool)\0loginPage(bool)\0"
    "hideElements()\0"
};

const QMetaObject GoogleChat::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GoogleChat,
      qt_meta_data_GoogleChat, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GoogleChat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GoogleChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GoogleChat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleChat))
        return static_cast<void*>(const_cast< GoogleChat*>(this));
    return QWidget::qt_metacast(_clname);
}

int GoogleChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: adjustLoginButton(); break;
        case 1: inputPassword(); break;
        case 2: doLogin(); break;
        case 3: initialPage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: loginPage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: hideElements(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
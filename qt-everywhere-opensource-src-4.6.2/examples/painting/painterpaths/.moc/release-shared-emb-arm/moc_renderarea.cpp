/****************************************************************************
** Meta object code from reading C++ file 'renderarea.h'
**
** Created: Mon Feb 13 23:17:17 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../renderarea.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'renderarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RenderArea[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x0a,
      57,   43,   11,   11, 0x0a,
      94,   88,   11,   11, 0x0a,
     117,  111,   11,   11, 0x0a,
     145,  137,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RenderArea[] = {
    "RenderArea\0\0rule\0setFillRule(Qt::FillRule)\0"
    "color1,color2\0setFillGradient(QColor,QColor)\0"
    "width\0setPenWidth(int)\0color\0"
    "setPenColor(QColor)\0degrees\0"
    "setRotationAngle(int)\0"
};

const QMetaObject RenderArea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RenderArea,
      qt_meta_data_RenderArea, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RenderArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RenderArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RenderArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RenderArea))
        return static_cast<void*>(const_cast< RenderArea*>(this));
    return QWidget::qt_metacast(_clname);
}

int RenderArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setFillRule((*reinterpret_cast< Qt::FillRule(*)>(_a[1]))); break;
        case 1: setFillGradient((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 2: setPenWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setPenColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: setRotationAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'qtoolbar.h'
**
** Created: Mon Feb 13 22:02:58 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qtoolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QToolBar[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       7,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   10,    9,    9, 0x05,
      51,   43,    9,    9, 0x05,
      85,   72,    9,    9, 0x05,
     135,  123,    9,    9, 0x05,
     180,  171,    9,    9, 0x05,
     219,  203,    9,    9, 0x05,
     272,  263,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     294,  171,    9,    9, 0x0a,
     313,  203,    9,    9, 0x0a,
     353,    9,    9,    9, 0x08,
     373,    9,    9,    9, 0x08,
     398,    9,    9,    9, 0x08,

 // properties: name, type, flags
      43,  444, 0x01495103,
      72,  449, 0x0049510b,
     123,  466, 0x0049510b,
     171,  482, 0x15495103,
     203,  488, 0x0049510b,
     508,  444, 0x01095001,
     517,  444, 0x01095103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_QToolBar[] = {
    "QToolBar\0\0action\0actionTriggered(QAction*)\0"
    "movable\0movableChanged(bool)\0allowedAreas\0"
    "allowedAreasChanged(Qt::ToolBarAreas)\0"
    "orientation\0orientationChanged(Qt::Orientation)\0"
    "iconSize\0iconSizeChanged(QSize)\0"
    "toolButtonStyle\0"
    "toolButtonStyleChanged(Qt::ToolButtonStyle)\0"
    "topLevel\0topLevelChanged(bool)\0"
    "setIconSize(QSize)\0"
    "setToolButtonStyle(Qt::ToolButtonStyle)\0"
    "_q_toggleView(bool)\0_q_updateIconSize(QSize)\0"
    "_q_updateToolButtonStyle(Qt::ToolButtonStyle)\0"
    "bool\0Qt::ToolBarAreas\0Qt::Orientation\0"
    "QSize\0Qt::ToolButtonStyle\0floating\0"
    "floatable\0"
};

const QMetaObject QToolBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QToolBar,
      qt_meta_data_QToolBar, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QToolBar))
        return static_cast<void*>(const_cast< QToolBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: movableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: allowedAreasChanged((*reinterpret_cast< Qt::ToolBarAreas(*)>(_a[1]))); break;
        case 3: orientationChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 4: iconSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 5: toolButtonStyleChanged((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 6: topLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: setIconSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 8: setToolButtonStyle((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 9: d_func()->_q_toggleView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: d_func()->_q_updateIconSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 11: d_func()->_q_updateToolButtonStyle((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isMovable(); break;
        case 1: *reinterpret_cast< Qt::ToolBarAreas*>(_v) = allowedAreas(); break;
        case 2: *reinterpret_cast< Qt::Orientation*>(_v) = orientation(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = iconSize(); break;
        case 4: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = toolButtonStyle(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isFloating(); break;
        case 6: *reinterpret_cast< bool*>(_v) = isFloatable(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMovable(*reinterpret_cast< bool*>(_v)); break;
        case 1: setAllowedAreas(*reinterpret_cast< Qt::ToolBarAreas*>(_v)); break;
        case 2: setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 3: setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 4: setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        case 6: setFloatable(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 0: *_b = (qobject_cast<QMainWindow*>(parentWidget())!=0); break;
        case 1: *_b = (qobject_cast<QMainWindow*>(parentWidget())!=0); break;
        case 2: *_b = (qobject_cast<QMainWindow*>(parentWidget())==0); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QToolBar::actionTriggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QToolBar::movableChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QToolBar::allowedAreasChanged(Qt::ToolBarAreas _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QToolBar::orientationChanged(Qt::Orientation _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QToolBar::iconSizeChanged(const QSize & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QToolBar::toolButtonStyleChanged(Qt::ToolButtonStyle _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QToolBar::topLevelChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

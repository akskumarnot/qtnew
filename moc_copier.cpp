/****************************************************************************
** Meta object code from reading C++ file 'copier.h'
**
** Created: Fri Jan 11 21:32:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "copier.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'copier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_copier[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,    7,    7,    7, 0x0a,
      38,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_copier[] = {
    "copier\0\0operationdone()\0dooperation()\0"
    "done()\0"
};

void copier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        copier *_t = static_cast<copier *>(_o);
        switch (_id) {
        case 0: _t->operationdone(); break;
        case 1: _t->dooperation(); break;
        case 2: _t->done(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData copier::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject copier::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_copier,
      qt_meta_data_copier, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &copier::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *copier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *copier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_copier))
        return static_cast<void*>(const_cast< copier*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int copier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void copier::operationdone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE

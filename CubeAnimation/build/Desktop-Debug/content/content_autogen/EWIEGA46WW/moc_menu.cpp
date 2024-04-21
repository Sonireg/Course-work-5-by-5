/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../content/menu.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainMenuENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainMenuENDCLASS = QtMocHelpers::stringData(
    "MainMenu",
    "QML.Singleton",
    "true",
    "QML.Element",
    "auto",
    "currStateChanged",
    "",
    "setCurrState",
    "quit",
    "currState",
    "prevState"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainMenuENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       2,   14, // classinfo
       3,   18, // methods
       2,   41, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   36,    6, 0x06,    3 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   37,    6, 0x02,    4 /* Public */,
       8,    0,   40,    6, 0x02,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00015003, uint(0), 0,
      10, QMetaType::Int, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'currState'
        int,
        // property 'prevState'
        int,
        // Q_OBJECT / Q_GADGET
        MainMenu,
        // method 'currStateChanged'
        void,
        // method 'setCurrState'
        void,
        int,
        // method 'quit'
        void
    >,
    nullptr
} };

void MainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currStateChanged(); break;
        case 1: _t->setCurrState((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->quit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainMenu::*)();
            if (_t _q_method = &MainMenu::currStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainMenu *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currState; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->prevState; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MainMenu *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->currState != *reinterpret_cast< int*>(_v)) {
                _t->currState = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->currStateChanged();
            }
            break;
        case 1:
            if (_t->prevState != *reinterpret_cast< int*>(_v)) {
                _t->prevState = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->currStateChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainMenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MainMenu::currStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP

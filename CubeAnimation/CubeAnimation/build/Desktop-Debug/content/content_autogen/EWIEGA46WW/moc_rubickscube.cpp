/****************************************************************************
** Meta object code from reading C++ file 'rubickscube.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../content/rubickscube.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rubickscube.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRubicksCubeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRubicksCubeENDCLASS = QtMocHelpers::stringData(
    "RubicksCube",
    "QML.Element",
    "auto",
    "QML.Singleton",
    "true",
    "solutionTextChanged",
    "",
    "moveChanged",
    "animatingButtonTextChanged",
    "getXRotationOf",
    "getYRotationOf",
    "getZRotationOf",
    "setColor",
    "stateIsValid",
    "animateRotU",
    "animateRotUSt",
    "animateRotR",
    "animateRotRSt",
    "animateRotD",
    "animateRotDSt",
    "animateRotL",
    "animateRotLSt",
    "animateRotF",
    "animateRotFSt",
    "animateRotB",
    "animateRotBSt",
    "animateRotu",
    "animateRotuSt",
    "animateRotd",
    "animateRotdSt",
    "animateRotl",
    "animateRotlSt",
    "animateRotr",
    "animateRotrSt",
    "animateRotb",
    "animateRotbSt",
    "animateRotf",
    "animateRotfSt",
    "setStateFromScramble",
    "setRandomState",
    "setStateFromScan",
    "setSolved",
    "solve",
    "onForwardClicked",
    "onBackClicked",
    "disableSolveButtons",
    "onStartStopClicked",
    "currMoveText",
    "prevSolutionMoves",
    "nextSolutionMoves",
    "amountOfMovesInSolution",
    "currStepOfSolution",
    "isFirstMove",
    "isLastMove",
    "isAutoAnimating",
    "animatingButtonText"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRubicksCubeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       2,   14, // classinfo
      41,   18, // methods
       9,  317, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,  264,    6, 0x06,   10 /* Public */,
       7,    0,  265,    6, 0x06,   11 /* Public */,
       8,    0,  266,    6, 0x06,   12 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  267,    6, 0x02,   13 /* Public */,
      10,    1,  270,    6, 0x02,   15 /* Public */,
      11,    1,  273,    6, 0x02,   17 /* Public */,
      12,    2,  276,    6, 0x02,   19 /* Public */,
      13,    0,  281,    6, 0x02,   22 /* Public */,
      14,    0,  282,    6, 0x02,   23 /* Public */,
      15,    0,  283,    6, 0x02,   24 /* Public */,
      16,    0,  284,    6, 0x02,   25 /* Public */,
      17,    0,  285,    6, 0x02,   26 /* Public */,
      18,    0,  286,    6, 0x02,   27 /* Public */,
      19,    0,  287,    6, 0x02,   28 /* Public */,
      20,    0,  288,    6, 0x02,   29 /* Public */,
      21,    0,  289,    6, 0x02,   30 /* Public */,
      22,    0,  290,    6, 0x02,   31 /* Public */,
      23,    0,  291,    6, 0x02,   32 /* Public */,
      24,    0,  292,    6, 0x02,   33 /* Public */,
      25,    0,  293,    6, 0x02,   34 /* Public */,
      26,    0,  294,    6, 0x02,   35 /* Public */,
      27,    0,  295,    6, 0x02,   36 /* Public */,
      28,    0,  296,    6, 0x02,   37 /* Public */,
      29,    0,  297,    6, 0x02,   38 /* Public */,
      30,    0,  298,    6, 0x02,   39 /* Public */,
      31,    0,  299,    6, 0x02,   40 /* Public */,
      32,    0,  300,    6, 0x02,   41 /* Public */,
      33,    0,  301,    6, 0x02,   42 /* Public */,
      34,    0,  302,    6, 0x02,   43 /* Public */,
      35,    0,  303,    6, 0x02,   44 /* Public */,
      36,    0,  304,    6, 0x02,   45 /* Public */,
      37,    0,  305,    6, 0x02,   46 /* Public */,
      38,    1,  306,    6, 0x02,   47 /* Public */,
      39,    0,  309,    6, 0x02,   49 /* Public */,
      40,    0,  310,    6, 0x02,   50 /* Public */,
      41,    0,  311,    6, 0x02,   51 /* Public */,
      42,    0,  312,    6, 0x02,   52 /* Public */,
      43,    0,  313,    6, 0x02,   53 /* Public */,
      44,    0,  314,    6, 0x02,   54 /* Public */,
      45,    0,  315,    6, 0x02,   55 /* Public */,
      46,    0,  316,    6, 0x02,   56 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QReal, QMetaType::QString,    6,
    QMetaType::QReal, QMetaType::QString,    6,
    QMetaType::QReal, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    6,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      47, QMetaType::QString, 0x00015003, uint(0), 0,
      48, QMetaType::QString, 0x00015003, uint(0), 0,
      49, QMetaType::QString, 0x00015003, uint(0), 0,
      50, QMetaType::Int, 0x00015003, uint(0), 0,
      51, QMetaType::Int, 0x00015003, uint(0), 0,
      52, QMetaType::Bool, 0x00015003, uint(1), 0,
      53, QMetaType::Bool, 0x00015003, uint(1), 0,
      54, QMetaType::Bool, 0x00015003, uint(1), 0,
      55, QMetaType::QString, 0x00015003, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject RubicksCube::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRubicksCubeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRubicksCubeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'currMoveText'
        QString,
        // property 'prevSolutionMoves'
        QString,
        // property 'nextSolutionMoves'
        QString,
        // property 'amountOfMovesInSolution'
        int,
        // property 'currStepOfSolution'
        int,
        // property 'isFirstMove'
        bool,
        // property 'isLastMove'
        bool,
        // property 'isAutoAnimating'
        bool,
        // property 'animatingButtonText'
        QString,
        // Q_OBJECT / Q_GADGET
        RubicksCube,
        // method 'solutionTextChanged'
        void,
        // method 'moveChanged'
        void,
        // method 'animatingButtonTextChanged'
        void,
        // method 'getXRotationOf'
        qreal,
        QString,
        // method 'getYRotationOf'
        qreal,
        QString,
        // method 'getZRotationOf'
        qreal,
        QString,
        // method 'setColor'
        void,
        QString,
        QString,
        // method 'stateIsValid'
        bool,
        // method 'animateRotU'
        void,
        // method 'animateRotUSt'
        void,
        // method 'animateRotR'
        void,
        // method 'animateRotRSt'
        void,
        // method 'animateRotD'
        void,
        // method 'animateRotDSt'
        void,
        // method 'animateRotL'
        void,
        // method 'animateRotLSt'
        void,
        // method 'animateRotF'
        void,
        // method 'animateRotFSt'
        void,
        // method 'animateRotB'
        void,
        // method 'animateRotBSt'
        void,
        // method 'animateRotu'
        void,
        // method 'animateRotuSt'
        void,
        // method 'animateRotd'
        void,
        // method 'animateRotdSt'
        void,
        // method 'animateRotl'
        void,
        // method 'animateRotlSt'
        void,
        // method 'animateRotr'
        void,
        // method 'animateRotrSt'
        void,
        // method 'animateRotb'
        void,
        // method 'animateRotbSt'
        void,
        // method 'animateRotf'
        void,
        // method 'animateRotfSt'
        void,
        // method 'setStateFromScramble'
        bool,
        QString,
        // method 'setRandomState'
        void,
        // method 'setStateFromScan'
        void,
        // method 'setSolved'
        void,
        // method 'solve'
        void,
        // method 'onForwardClicked'
        void,
        // method 'onBackClicked'
        void,
        // method 'disableSolveButtons'
        void,
        // method 'onStartStopClicked'
        void
    >,
    nullptr
} };

void RubicksCube::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RubicksCube *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->solutionTextChanged(); break;
        case 1: _t->moveChanged(); break;
        case 2: _t->animatingButtonTextChanged(); break;
        case 3: { qreal _r = _t->getXRotationOf((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 4: { qreal _r = _t->getYRotationOf((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 5: { qreal _r = _t->getZRotationOf((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setColor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: { bool _r = _t->stateIsValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->animateRotU(); break;
        case 9: _t->animateRotUSt(); break;
        case 10: _t->animateRotR(); break;
        case 11: _t->animateRotRSt(); break;
        case 12: _t->animateRotD(); break;
        case 13: _t->animateRotDSt(); break;
        case 14: _t->animateRotL(); break;
        case 15: _t->animateRotLSt(); break;
        case 16: _t->animateRotF(); break;
        case 17: _t->animateRotFSt(); break;
        case 18: _t->animateRotB(); break;
        case 19: _t->animateRotBSt(); break;
        case 20: _t->animateRotu(); break;
        case 21: _t->animateRotuSt(); break;
        case 22: _t->animateRotd(); break;
        case 23: _t->animateRotdSt(); break;
        case 24: _t->animateRotl(); break;
        case 25: _t->animateRotlSt(); break;
        case 26: _t->animateRotr(); break;
        case 27: _t->animateRotrSt(); break;
        case 28: _t->animateRotb(); break;
        case 29: _t->animateRotbSt(); break;
        case 30: _t->animateRotf(); break;
        case 31: _t->animateRotfSt(); break;
        case 32: { bool _r = _t->setStateFromScramble((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->setRandomState(); break;
        case 34: _t->setStateFromScan(); break;
        case 35: _t->setSolved(); break;
        case 36: _t->solve(); break;
        case 37: _t->onForwardClicked(); break;
        case 38: _t->onBackClicked(); break;
        case 39: _t->disableSolveButtons(); break;
        case 40: _t->onStartStopClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RubicksCube::*)();
            if (_t _q_method = &RubicksCube::solutionTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RubicksCube::*)();
            if (_t _q_method = &RubicksCube::moveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RubicksCube::*)();
            if (_t _q_method = &RubicksCube::animatingButtonTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RubicksCube *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currMoveText; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->prevSolutionMoves; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->nextSolutionMoves; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->amountOfMovesInSolution; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->currStepOfSolution; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isFirstMove; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isLastMove; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isAutoAnimating; break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->animatingButtonText; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RubicksCube *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->currMoveText != *reinterpret_cast< QString*>(_v)) {
                _t->currMoveText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->solutionTextChanged();
            }
            break;
        case 1:
            if (_t->prevSolutionMoves != *reinterpret_cast< QString*>(_v)) {
                _t->prevSolutionMoves = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->solutionTextChanged();
            }
            break;
        case 2:
            if (_t->nextSolutionMoves != *reinterpret_cast< QString*>(_v)) {
                _t->nextSolutionMoves = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->solutionTextChanged();
            }
            break;
        case 3:
            if (_t->amountOfMovesInSolution != *reinterpret_cast< int*>(_v)) {
                _t->amountOfMovesInSolution = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->solutionTextChanged();
            }
            break;
        case 4:
            if (_t->currStepOfSolution != *reinterpret_cast< int*>(_v)) {
                _t->currStepOfSolution = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->solutionTextChanged();
            }
            break;
        case 5:
            if (_t->isFirstMove != *reinterpret_cast< bool*>(_v)) {
                _t->isFirstMove = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->moveChanged();
            }
            break;
        case 6:
            if (_t->isLastMove != *reinterpret_cast< bool*>(_v)) {
                _t->isLastMove = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->moveChanged();
            }
            break;
        case 7:
            if (_t->isAutoAnimating != *reinterpret_cast< bool*>(_v)) {
                _t->isAutoAnimating = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->moveChanged();
            }
            break;
        case 8:
            if (_t->animatingButtonText != *reinterpret_cast< QString*>(_v)) {
                _t->animatingButtonText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->animatingButtonTextChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *RubicksCube::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RubicksCube::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRubicksCubeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RubicksCube::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 41;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void RubicksCube::solutionTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RubicksCube::moveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RubicksCube::animatingButtonTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

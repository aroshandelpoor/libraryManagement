/****************************************************************************
** Meta object code from reading C++ file 'mainform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bookyad/mainform.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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
struct qt_meta_stringdata_CLASSMainFormENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainFormENDCLASS = QtMocHelpers::stringData(
    "MainForm",
    "on_action_insertbook_triggered",
    "",
    "on_action_borrowbook_triggered",
    "on_action_members_triggered",
    "on_action_staffs_triggered",
    "on_action_bio_triggered",
    "on_action_exit_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainFormENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[9];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[28];
    char stringdata5[27];
    char stringdata6[24];
    char stringdata7[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainFormENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainFormENDCLASS_t qt_meta_stringdata_CLASSMainFormENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "MainForm"
        QT_MOC_LITERAL(9, 30),  // "on_action_insertbook_triggered"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 30),  // "on_action_borrowbook_triggered"
        QT_MOC_LITERAL(72, 27),  // "on_action_members_triggered"
        QT_MOC_LITERAL(100, 26),  // "on_action_staffs_triggered"
        QT_MOC_LITERAL(127, 23),  // "on_action_bio_triggered"
        QT_MOC_LITERAL(151, 24)   // "on_action_exit_triggered"
    },
    "MainForm",
    "on_action_insertbook_triggered",
    "",
    "on_action_borrowbook_triggered",
    "on_action_members_triggered",
    "on_action_staffs_triggered",
    "on_action_bio_triggered",
    "on_action_exit_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainFormENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainFormENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainFormENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainFormENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainForm, std::true_type>,
        // method 'on_action_insertbook_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_borrowbook_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_members_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_staffs_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_bio_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_exit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_action_insertbook_triggered(); break;
        case 1: _t->on_action_borrowbook_triggered(); break;
        case 2: _t->on_action_members_triggered(); break;
        case 3: _t->on_action_staffs_triggered(); break;
        case 4: _t->on_action_bio_triggered(); break;
        case 5: _t->on_action_exit_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MainForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainFormENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP

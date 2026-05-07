/****************************************************************************
** Meta object code from reading C++ file 'viewer3ddialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Finale - Copy (2)/viewer3ddialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewer3ddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
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
struct qt_meta_stringdata_CLASSViewer3DDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSViewer3DDialogENDCLASS = QtMocHelpers::stringData(
    "Viewer3DDialog",
    "onColorClicked",
    "",
    "onDrawToggled",
    "onEraseToggled",
    "onRotateToggled",
    "onClearDrawings",
    "onResetView",
    "onToggleWebcam",
    "onBrushSizeChanged",
    "val",
    "onTrackerOutput",
    "onTrackerError",
    "onTrackerFinished",
    "exitCode",
    "QProcess::ExitStatus",
    "status",
    "onModelLoaded",
    "success",
    "vertexCount",
    "faceCount"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSViewer3DDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    1,   93,    2, 0x08,    8 /* Private */,
      11,    0,   96,    2, 0x08,   10 /* Private */,
      12,    0,   97,    2, 0x08,   11 /* Private */,
      13,    2,   98,    2, 0x08,   12 /* Private */,
      17,    3,  103,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15,   14,   16,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,   18,   19,   20,

       0        // eod
};

Q_CONSTINIT const QMetaObject Viewer3DDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSViewer3DDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSViewer3DDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSViewer3DDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Viewer3DDialog, std::true_type>,
        // method 'onColorClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDrawToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEraseToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRotateToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClearDrawings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResetView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToggleWebcam'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBrushSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onTrackerOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTrackerError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTrackerFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>,
        // method 'onModelLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Viewer3DDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Viewer3DDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onColorClicked(); break;
        case 1: _t->onDrawToggled(); break;
        case 2: _t->onEraseToggled(); break;
        case 3: _t->onRotateToggled(); break;
        case 4: _t->onClearDrawings(); break;
        case 5: _t->onResetView(); break;
        case 6: _t->onToggleWebcam(); break;
        case 7: _t->onBrushSizeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->onTrackerOutput(); break;
        case 9: _t->onTrackerError(); break;
        case 10: _t->onTrackerFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 11: _t->onModelLoaded((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *Viewer3DDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Viewer3DDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSViewer3DDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Viewer3DDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP

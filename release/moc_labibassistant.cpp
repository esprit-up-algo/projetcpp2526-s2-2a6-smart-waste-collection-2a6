/****************************************************************************
** Meta object code from reading C++ file 'labibassistant.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../labibassistant.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labibassistant.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLabibAssistantENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLabibAssistantENDCLASS = QtMocHelpers::stringData(
    "LabibAssistant",
    "requestAddClient",
    "",
    "requestViewStock",
    "requestCheckOrders",
    "onSendMessage",
    "onImportFile",
    "onProcessImportedData",
    "handleAiResponse",
    "userMessage",
    "displayAiAnswer",
    "answer",
    "processBulkImport",
    "QList<QJsonObject>",
    "records",
    "showImportPreview"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLabibAssistantENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,
       4,    0,   76,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    1,   80,    2, 0x08,    7 /* Private */,
      10,    1,   83,    2, 0x08,    9 /* Private */,
      12,    1,   86,    2, 0x08,   11 /* Private */,
      15,    1,   89,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject LabibAssistant::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSLabibAssistantENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLabibAssistantENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLabibAssistantENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LabibAssistant, std::true_type>,
        // method 'requestAddClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestViewStock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestCheckOrders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProcessImportedData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleAiResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'displayAiAnswer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'processBulkImport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QJsonObject> &, std::false_type>,
        // method 'showImportPreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QJsonObject> &, std::false_type>
    >,
    nullptr
} };

void LabibAssistant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LabibAssistant *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestAddClient(); break;
        case 1: _t->requestViewStock(); break;
        case 2: _t->requestCheckOrders(); break;
        case 3: _t->onSendMessage(); break;
        case 4: _t->onImportFile(); break;
        case 5: _t->onProcessImportedData(); break;
        case 6: _t->handleAiResponse((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->displayAiAnswer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->processBulkImport((*reinterpret_cast< std::add_pointer_t<QList<QJsonObject>>>(_a[1]))); break;
        case 9: _t->showImportPreview((*reinterpret_cast< std::add_pointer_t<QList<QJsonObject>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QJsonObject> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QJsonObject> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LabibAssistant::*)();
            if (_t _q_method = &LabibAssistant::requestAddClient; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LabibAssistant::*)();
            if (_t _q_method = &LabibAssistant::requestViewStock; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LabibAssistant::*)();
            if (_t _q_method = &LabibAssistant::requestCheckOrders; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *LabibAssistant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabibAssistant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLabibAssistantENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LabibAssistant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LabibAssistant::requestAddClient()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LabibAssistant::requestViewStock()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LabibAssistant::requestCheckOrders()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

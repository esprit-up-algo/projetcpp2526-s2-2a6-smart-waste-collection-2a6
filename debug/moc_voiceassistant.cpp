/****************************************************************************
** Meta object code from reading C++ file 'voiceassistant.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../voiceassistant.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'voiceassistant.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVoiceAssistantENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVoiceAssistantENDCLASS = QtMocHelpers::stringData(
    "VoiceAssistant",
    "listeningStarted",
    "",
    "listeningFinished",
    "recognizedText",
    "text",
    "commandRecognized",
    "command",
    "error",
    "errorMsg",
    "speechStarted",
    "speechFinished",
    "onPythonProcessFinished",
    "exitCode",
    "QProcess::ExitStatus",
    "exitStatus",
    "onPythonProcessError",
    "QProcess::ProcessError",
    "onReadyReadStandardOutput",
    "onReadyReadStandardError",
    "onSocketConnected",
    "onSocketDisconnected",
    "onSocketError",
    "QAbstractSocket::SocketError",
    "socketError"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVoiceAssistantENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,
       3,    0,   99,    2, 0x06,    2 /* Public */,
       4,    1,  100,    2, 0x06,    3 /* Public */,
       6,    1,  103,    2, 0x06,    5 /* Public */,
       8,    1,  106,    2, 0x06,    7 /* Public */,
      10,    0,  109,    2, 0x06,    9 /* Public */,
      11,    0,  110,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    2,  111,    2, 0x08,   11 /* Private */,
      16,    1,  116,    2, 0x08,   14 /* Private */,
      18,    0,  119,    2, 0x08,   16 /* Private */,
      19,    0,  120,    2, 0x08,   17 /* Private */,
      20,    0,  121,    2, 0x08,   18 /* Private */,
      21,    0,  122,    2, 0x08,   19 /* Private */,
      22,    1,  123,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 17,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,

       0        // eod
};

Q_CONSTINIT const QMetaObject VoiceAssistant::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSVoiceAssistantENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVoiceAssistantENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVoiceAssistantENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VoiceAssistant, std::true_type>,
        // method 'listeningStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'listeningFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recognizedText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'commandRecognized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'speechStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'speechFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPythonProcessFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>,
        // method 'onPythonProcessError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ProcessError, std::false_type>,
        // method 'onReadyReadStandardOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReadyReadStandardError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocketConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocketDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>
    >,
    nullptr
} };

void VoiceAssistant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VoiceAssistant *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->listeningStarted(); break;
        case 1: _t->listeningFinished(); break;
        case 2: _t->recognizedText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->commandRecognized((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->speechStarted(); break;
        case 6: _t->speechFinished(); break;
        case 7: _t->onPythonProcessFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 8: _t->onPythonProcessError((*reinterpret_cast< std::add_pointer_t<QProcess::ProcessError>>(_a[1]))); break;
        case 9: _t->onReadyReadStandardOutput(); break;
        case 10: _t->onReadyReadStandardError(); break;
        case 11: _t->onSocketConnected(); break;
        case 12: _t->onSocketDisconnected(); break;
        case 13: _t->onSocketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VoiceAssistant::*)();
            if (_t _q_method = &VoiceAssistant::listeningStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VoiceAssistant::*)();
            if (_t _q_method = &VoiceAssistant::listeningFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VoiceAssistant::*)(const QString & );
            if (_t _q_method = &VoiceAssistant::recognizedText; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VoiceAssistant::*)(const QString & );
            if (_t _q_method = &VoiceAssistant::commandRecognized; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VoiceAssistant::*)(const QString & );
            if (_t _q_method = &VoiceAssistant::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VoiceAssistant::*)();
            if (_t _q_method = &VoiceAssistant::speechStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VoiceAssistant::*)();
            if (_t _q_method = &VoiceAssistant::speechFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *VoiceAssistant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VoiceAssistant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVoiceAssistantENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VoiceAssistant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void VoiceAssistant::listeningStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VoiceAssistant::listeningFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VoiceAssistant::recognizedText(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VoiceAssistant::commandRecognized(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VoiceAssistant::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VoiceAssistant::speechStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void VoiceAssistant::speechFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP

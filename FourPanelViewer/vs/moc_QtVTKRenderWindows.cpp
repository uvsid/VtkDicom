/****************************************************************************
** Meta object code from reading C++ file 'QtVTKRenderWindows.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/QtVTKRenderWindows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtVTKRenderWindows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtVTKRenderWindows_t {
    QByteArrayData data[20];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtVTKRenderWindows_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtVTKRenderWindows_t qt_meta_stringdata_QtVTKRenderWindows = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QtVTKRenderWindows"
QT_MOC_LITERAL(1, 19, 8), // "slotExit"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "resliceMode"
QT_MOC_LITERAL(4, 41, 9), // "thickMode"
QT_MOC_LITERAL(5, 51, 19), // "SetBlendModeToMaxIP"
QT_MOC_LITERAL(6, 71, 19), // "SetBlendModeToMinIP"
QT_MOC_LITERAL(7, 91, 20), // "SetBlendModeToMeanIP"
QT_MOC_LITERAL(8, 112, 12), // "SetBlendMode"
QT_MOC_LITERAL(9, 125, 10), // "ResetViews"
QT_MOC_LITERAL(10, 136, 6), // "Render"
QT_MOC_LITERAL(11, 143, 29), // "AddDistanceMeasurementToView1"
QT_MOC_LITERAL(12, 173, 28), // "AddDistanceMeasurementToView"
QT_MOC_LITERAL(13, 202, 9), // "LoadDicom"
QT_MOC_LITERAL(14, 212, 13), // "SliceOnScroll"
QT_MOC_LITERAL(15, 226, 6), // "Slice0"
QT_MOC_LITERAL(16, 233, 1), // "i"
QT_MOC_LITERAL(17, 235, 6), // "Slice1"
QT_MOC_LITERAL(18, 242, 6), // "Slice2"
QT_MOC_LITERAL(19, 249, 6) // "Slice3"

    },
    "QtVTKRenderWindows\0slotExit\0\0resliceMode\0"
    "thickMode\0SetBlendModeToMaxIP\0"
    "SetBlendModeToMinIP\0SetBlendModeToMeanIP\0"
    "SetBlendMode\0ResetViews\0Render\0"
    "AddDistanceMeasurementToView1\0"
    "AddDistanceMeasurementToView\0LoadDicom\0"
    "SliceOnScroll\0Slice0\0i\0Slice1\0Slice2\0"
    "Slice3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtVTKRenderWindows[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    1,  100,    2, 0x0a /* Public */,
       4,    1,  103,    2, 0x0a /* Public */,
       5,    0,  106,    2, 0x0a /* Public */,
       6,    0,  107,    2, 0x0a /* Public */,
       7,    0,  108,    2, 0x0a /* Public */,
       8,    1,  109,    2, 0x0a /* Public */,
       9,    0,  112,    2, 0x0a /* Public */,
      10,    0,  113,    2, 0x0a /* Public */,
      11,    0,  114,    2, 0x0a /* Public */,
      12,    1,  115,    2, 0x0a /* Public */,
      13,    0,  118,    2, 0x0a /* Public */,
      14,    0,  119,    2, 0x0a /* Public */,
      15,    1,  120,    2, 0x0a /* Public */,
      17,    1,  123,    2, 0x0a /* Public */,
      18,    1,  126,    2, 0x0a /* Public */,
      19,    1,  129,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void QtVTKRenderWindows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtVTKRenderWindows *_t = static_cast<QtVTKRenderWindows *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotExit(); break;
        case 1: _t->resliceMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->thickMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SetBlendModeToMaxIP(); break;
        case 4: _t->SetBlendModeToMinIP(); break;
        case 5: _t->SetBlendModeToMeanIP(); break;
        case 6: _t->SetBlendMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->ResetViews(); break;
        case 8: _t->Render(); break;
        case 9: _t->AddDistanceMeasurementToView1(); break;
        case 10: _t->AddDistanceMeasurementToView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: { bool _r = _t->LoadDicom();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->SliceOnScroll(); break;
        case 13: _t->Slice0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->Slice1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->Slice2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->Slice3((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtVTKRenderWindows::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtVTKRenderWindows.data,
      qt_meta_data_QtVTKRenderWindows,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtVTKRenderWindows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtVTKRenderWindows::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtVTKRenderWindows.stringdata0))
        return static_cast<void*>(const_cast< QtVTKRenderWindows*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtVTKRenderWindows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <menu.h>
#include <rubickscube.h>
#include <solver.h>
#include <statefromscangetter.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_content()
{
    qmlRegisterTypesAndRevisions<MainMenu>("content", 1);
    qmlRegisterTypesAndRevisions<RubicksCube>("content", 1);
    qmlRegisterTypesAndRevisions<Solver>("content", 1);
    qmlRegisterTypesAndRevisions<StateFromScanGetter>("content", 1);
    qmlRegisterModule("content", 1, 0);
}

static const QQmlModuleRegistration contentRegistration("content", qml_register_types_content);

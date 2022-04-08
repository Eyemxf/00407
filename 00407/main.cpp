#include "QtWidgetsApplication.h"
#include <QtWidgets/QApplication>

#include <Standard.hxx>
#include <Standard_Type.hxx>
#include <Standard_Transient.hxx>
#include <Standard_Persistent.hxx>
#include <Geom_CartesianPoint.hxx>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication w;
    //w.show();

    w.showMinimized();
    return a.exec();
}

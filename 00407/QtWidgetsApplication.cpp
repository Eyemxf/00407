#include "QtWidgetsApplication.h"


#include <Standard.hxx>
#include <Standard_Type.hxx>
#include <Standard_Transient.hxx>
#include <Standard_Persistent.hxx>
#include <Geom_CartesianPoint.hxx>


QtWidgetsApplication::QtWidgetsApplication(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	
	TestSomeThing();
}


void QtWidgetsApplication::TestSomeThing()
{

#if 1

	Handle(Geom_CartesianPoint) centre;
	Standard_Real x, y, z;
	if (centre.IsNull())
	{
		centre = new Geom_CartesianPoint(0, 0, 0);
	}
	centre->Coord(x, y, z);

#endif


}

void QtWidgetsApplication::Test()
{
	//mengss
}

#include "courseButton.h"

void UMS::courseButton::setCourseName(String^ cname)
{
	this->coursename = cname;
	courselab->Text = cname;
}
String^ UMS::courseButton::getCourseName()
{
	return coursename;
}

#include "courseButton.h"

void UMS::courseButton::setCourseName(String^ cname)
{
	this->coursename = cname;
	courselab->Text = cname;
	bt = this->courselab;
	bt->Text= cname;
}
String^ UMS::courseButton::getCourseName()
{
	return coursename;
}
Button^ UMS::courseButton::getBt()
{
	return this->bt;
}


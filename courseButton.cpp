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
void UMS::courseButton::setBtColor(Color color)
{
	this->courselab->BackColor = color;
}void UMS::courseButton::setforecolor(Color color)
{
	this->courselab->ForeColor = color;
}


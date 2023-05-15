#include "CoursegGradeItem.h"

String^ UMS::CoursegGradeItem::getName()
{
	return this->courseName;

}
String^ UMS::CoursegGradeItem::getCode()
{
	return this->courseCode;

}float UMS::CoursegGradeItem::getGrade()
{
	return this->courseGrade;

}

void UMS::CoursegGradeItem::setName(String^ Name)
{
	this->courseName = Name;
	courseNameLb->Text = Name;
}void UMS::CoursegGradeItem::setGrade(float Grade)
{
	this->courseGrade = Grade;
	courseGradeLabel->Text = Convert::ToString(Grade);
}


void UMS::CoursegGradeItem::setCode(String^ code)
{
	this->courseCode = code;
	Codelb->Text = Name;
}

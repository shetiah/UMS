#include "courselistitem.h"
void UMS::courselistitem::setName(String^ name) {
	this->name = name;
	coursenamelb->Text = name;/*
	coursenamelb->Width = (panel2->Width / 2) - (coursenamelb->Width / 2);*/
}
void UMS::courselistitem::setCode(String^ code) {
	this->Code = code;
	codelb->Text = code;
}
void UMS::courselistitem::setInstructor(String^ instructor) {
	this->instructor = instructor;
	instrData->Text = instructor;
}
void UMS::courselistitem::setIsRequirement(bool isRequirement) {
	this->isRequirement = isRequirement;
	if (isRequirement)
	{
		isreqdata->Text = "yes";
	}
	else
		isreqdata->Text = "no";
}
void UMS::courselistitem::setMaxNumberOfStudents(int maxNumberOfStudents) {
	this->maxNumberOfStudents = maxNumberOfStudents;
	maxstdDt->Text = Convert::ToString(maxNumberOfStudents);
}
void UMS::courselistitem::setHours(int hours) {
	this->hours = hours;
	hoursdt->Text = Convert::ToString(hours) ;
}

String^ UMS::courselistitem::getName() {
	return name;
}
String^ UMS::courselistitem::getCode()
{
	return Code;
}
String^ UMS::courselistitem::getInstructor() {
	return instructor;
}
bool UMS::courselistitem::getIsRequirement() {
	return isRequirement;
}
int UMS::courselistitem::getMaxNumberOfStudents() {
	return maxNumberOfStudents;
}
int UMS::courselistitem::getHours() {
	return hours;
}
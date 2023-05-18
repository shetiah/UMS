#include "studentname.h"

String^ UMS::studentname::getStudentname()
{
    return studentName;
}

void UMS::studentname::setStudentname(String^ student)
{
    this->studentName = student;
    this->studentnamebt->Text = student;
}

Button^ UMS::studentname::getBt()
{
    return this->studentnamebt;
}

void UMS::studentname::setBtColor(Color color)
{
    this->studentnamebt->BackColor = color;
}

void UMS::studentname::setforecolor(Color color)
{
    this->studentnamebt->ForeColor = color;
}

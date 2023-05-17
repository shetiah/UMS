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

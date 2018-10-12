#include "Student.h"
#include <bits/stdc++.h>


Student::Student()
{

}

void Student::setNameAndId(string n,int i)
{
    name = n;
    id = i;
}

void Student::setMathMarks(float marks)
{
    mathMarks = marks;
}

void Student::setPhyMarks(float marks)
{
    phyMarks = marks;
}

const string Student::getName()
{
    return name;
}

const int Student::getId()
{
    return id;
}

float Student::getMathMarks()
{
    return mathMarks;
}

float Student::getPhyMarks()
{
    return phyMarks;
}


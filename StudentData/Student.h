#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
#include <string> // Because we are using string type data in our code
#include <stdio.h> // For using the getchar() function
using namespace std;


class Student
{
    private:
        string name;
        int id;
        float mathMarks,phyMarks;
    public:
        Student();
        void setNameAndId(string,int);
        void setMathMarks(float);
        void setPhyMarks(float);
        const string getName();
        const int getId();
        float getMathMarks();
        float getPhyMarks();
};

#endif // STUDENT_H_INC

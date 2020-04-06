/***
Name: Ashish Kalra
Emp ID: 142968
Batch: Feb 2020 - Pune
Date: 12 Feb 2020
Prog: Trainee record system
***/

//#include "Student.h"

#include <stdio.h>
#include <string.h>

//Macros
#define MAX_SIZE 50
#define STRING_SIZE 30
#define TRACK_SIZE 30

//Prototypes


struct student
{
    char EmpName[STRING_SIZE];
    unsigned int EmpID;
    unsigned int Salary;
    char Track[TRACK_SIZE];
    int scores[5];
};

typedef struct student student_t;


int main()
{
    student_t sarr[MAX_SIZE];
    fillRecord(sarr, 142968, "Ashish");
    displayRecord(sarr, MAX_SIZE);

    return 0;
}

void fillRecord(student_t* parr, unsigned int Code, char Name[STRING_SIZE])
{   int n = MAX_SIZE;
    student_t* pcur = parr;
    for(int i=0; i<n; i++)
    {
        pcur->EmpID = Code;
        strcpy(pcur->EmpName, Name);
        pcur->Salary = 1000000 + rand()%
    }
}

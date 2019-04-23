#pragma once

#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string name;
    int score;

    bool operator<(const Student &otherStudent)
    {
        return score != otherStudent.score ? score > otherStudent.score : name  < otherStudent.name;
    }

    friend ostream& operator<<( ostream&os, const Student &otherStudent)
    {
        os << "Student: " << otherStudent.name << " " << otherStudent.score << endl;
        return os;
    }
};
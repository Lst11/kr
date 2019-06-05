//
// Created by Lena on 05.06.2019.
//

#ifndef UNTITLED1_MYEXCEPTION_H
#define UNTITLED1_MYEXCEPTION_H

//#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>

using namespace std;

class MyException : public exception {
    string note;

public:
    MyException();

    MyException(string);

    ~MyException() {};

    string getNote();

    void setNote(string);

    void show();

};

#endif //UNTITLED1_MYEXCEPTION_H

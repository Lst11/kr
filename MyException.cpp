//
// Created by Lena on 05.06.2019.
//
#include <iostream>
#include "MyException.h"

MyException::MyException() {
    note = "Something wrong";
}

MyException::MyException(string note) {
    this->note = note;
}

string MyException::getNote() {
    return note;
}

void MyException::setNote(string note) {
    this->note = note;
}

void MyException::show(){
    cout<<note;
}


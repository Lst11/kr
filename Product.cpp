//
// Created by Lena on 05.06.2019.
//
#include <iostream>
#include <string.h>
#include "Product.h"
#include "MyException.h"

using namespace std;

Product::Product() {
    name = nullptr;
    quantity = 0;
    price = 0.0;
}

Product::Product(Product &a) {
    name = a.getName();
    quantity = a.getQuantity();
    price = a.getPrice();
}

void Product::setName(char *name) {
    this->name = name;
}

char *Product::getName() {
    return name;
}

void Product::setQuantity(unsigned quantity) {
    this->quantity = quantity;
}

unsigned Product::getQuantity() {
    return quantity;
}

void Product::setPrice(double price) {
    this->price = price;
}

double Product::getPrice() {
    return price;
}

void Product::setData() {
    bool sucess = 0;
   // do {
        try {
            sucess = 0;
            cout << "Input the name: ";
            char *temp = new char[255]; // на время выделяется память (с запасом) под строку
            cin.getline(temp, 255); // чтение строки
            name = new char[strlen(temp) + 1]; // выделяется память под размер введённой строки
            strcpy(name, temp); // копируется строка в новую память
            delete[] temp; // ненужная память освобождается

            cout << "Input the quantity:";
            cin >> quantity;
            cout << "Input the price: ";
            cin >> price;
            cout << endl;
        } catch (MyException e) {
            e.setNote("Input failed");
            e.show();
            sucess = 1;
       // }while (sucess == 1);
    }
}

Product::~Product() {
    cout << "destructor Product\n";
}

void Product::show() {
    if (name) {
        cout << "Product:\nname - " << name << ";\nquantity - " << quantity << ";\nprice - " << price << ";\n" << endl;
    } else cout << "Product:\nname - NO NAME;\nquantity - " << quantity << ";\nprice - " << price << ";\n" << endl;
}
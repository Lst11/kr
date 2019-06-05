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

    bool success = false;
    while (!success) {
        success = true;
        cout << "\nInput the name:";
        char *temp = new char[255]; // на время выделяется память (с запасом) под строку
        cin.getline(temp, 255); // чтение строки
        name = new char[strlen(temp) + 1]; // выделяется память под размер введённой строки
        strcpy(name, temp); // копируется строка в новую память
        delete[] temp; // ненужная память освобождается

        try {
            cout << "Input the quantity:";
            rewind(stdin);
            if (!scanf("%d", &quantity)) {
                success = false;
                rewind(stdin);
                throw MyException("Input error! Try again.");
            }

            cout << "Input the price:";
            rewind(stdin);
            if (!scanf("%lf", &price)) {
                success = false;
                rewind(stdin);
                throw MyException("Input error! Try again.");
            }
            cout << endl;
        }
        catch (MyException e) {
            e.show();
        }
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
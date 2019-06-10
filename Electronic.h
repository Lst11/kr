#ifndef UNTITLED1_ELECTRONIC_H
#define UNTITLED1_ELECTRONIC_H

#include <iostream>
#include "Product.h"

using namespace std;

class Electronic :
        public virtual Product {
    int electronicField;
public:
    Electronic(int electronicField);

    virtual ~Electronic();

    void show();

    friend ostream &operator<<(ostream &out, const Electronic &electronic);

};

Electronic::Electronic(int electronicField) {
    cout << "Constructor for Electronic." << std::endl;
    this->electronicField = electronicField;
}

Electronic::~Electronic() {
    cout << "Destructor for Electronic.\n";
}

void Electronic::show() {
    cout << "Show Electronic product:" << endl;
    if (getName()) {
        cout << "Product:\nname - " << getName() << ";\nquantity - " << getQuantity() << ";\nprice - " << getPrice()
             << ";\n"
             << endl;
    } else
        cout << "Product:\nname - NO NAME;\nquantity - " << getQuantity() << ";\nprice - " << getPrice() << ";\n"
             << endl;
}

ostream &operator<<(ostream &out, const Electronic &electronic) {
    out << "Overrided operator<< for Electronic." << endl;
    return out;
}

#endif //UNTITLED1_ELECTRONIC_H

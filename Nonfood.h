#ifndef UNTITLED1_NONFOOD_H
#define UNTITLED1_NONFOOD_H


#include <iostream>
#include "Product.h"

using namespace std;

class Nonfood :
        public virtual Product {
    int nonfoodField;
public:
    Nonfood(int nonfoodField);

    virtual ~Nonfood();

    void show();

    friend ostream &operator<<(ostream &out, const Nonfood &nonfood);
};

Nonfood::Nonfood(int nonfoodField) {
    cout << "Constructor for Nonfood." << std::endl;
}

Nonfood::~Nonfood() {
    cout << "Destructor for Nonfood.\n";
}

void Nonfood::show() {
    cout << "Show Nonfood product:" << endl;
    if (getName()) {
        cout << "Product:\nname - " << getName() << ";\nquantity - " << getQuantity() << ";\nprice - " << getPrice()
             << ";\n"
             << endl;
    } else
        cout << "Product:\nname - NO NAME;\nquantity - " << getQuantity() << ";\nprice - " << getPrice() << ";\n"
             << endl;
}

ostream &operator<<(ostream &out, const Nonfood &nonfood) {
    out << "Overrided operator<< for Nonfood." << endl;
    return out;
}

#endif //UNTITLED1_NONFOOD_H

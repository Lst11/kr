#ifndef UNTITLED1_PLAYSTATION_H
#define UNTITLED1_PLAYSTATION_H


#include <iostream>
#include "Product.h"
#include "Nonfood.h"
#include "Electronic.h"

using namespace std;

class PlayStation :
        public Nonfood, public Electronic {
    int psField;
public:
    PlayStation(int nonfoodField, int electronicField, int c);

    virtual ~PlayStation();

    void show();

    friend ostream &operator<<(ostream &out, const PlayStation &playStation);

    friend const PlayStation operator++(PlayStation &i, int);


};

PlayStation::PlayStation(int nonfoodField, int electronicField, int psField) : Nonfood(nonfoodField),
                                                                               Electronic(electronicField) {
    cout << "Constructor for PlayStation." << std::endl;
    this->psField;
}

PlayStation::~PlayStation() {
    cout << "Destructor for PlayStation.\n";
}

void PlayStation::show() {
    cout << "Show PlayStation product:" << endl;
    if (getName()) {
        cout << "Product:\nname - " << getName() << ";\nquantity - " << getQuantity() << ";\nprice - " << getPrice()
             << ";\n"
             << endl;
    } else
        cout << "Product:\nname - NO NAME;\nquantity - " << getQuantity() << ";\nprice - " << getPrice() << ";\n"
             << endl;
}

ostream &operator<<(ostream &out, const PlayStation &playStation) {
    out << "Overrided operator<< for PlayStation." << endl;
    return out;
}

const PlayStation operator++(PlayStation &playStation, int) {
    cout << "Overrided operator++ for PlayStation." << endl;
    int i = playStation.getQuantity();
    playStation.setQuantity(++i);
    return playStation;
}


#endif //UNTITLED1_PLAYSTATION_H

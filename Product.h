//
// Created by Lena on 05.06.2019.
//

#ifndef UNTITLED1_PRODUCT_H
#define UNTITLED1_PRODUCT_H

using namespace std;

class Product {

    char *name;
    unsigned quantity;
    double price;

public:

    Product();

    Product(Product &);

    virtual ~Product();

    void setName(char *);

    void setQuantity(unsigned);

    void setPrice(double);

    void setData();

    void show();

    char *getName();

    unsigned getQuantity();

    double getPrice();
};


#endif //UNTITLED1_PRODUCT_H

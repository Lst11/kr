#ifndef UNTITLED1_PRODUCT_H
#define UNTITLED1_PRODUCT_H

using namespace std;

class Product {

    char *name;
    unsigned quantity;
    double price;

public:

    Product();

    Product(char *, int, double);

    Product(const Product &);

    virtual ~Product();

    void setName(char *);

    void setQuantity(unsigned);

    void setPrice(double);

    void setData();

    virtual void show() = 0;

    char *getName() const;

    unsigned getQuantity() const;

    double getPrice() const;

    friend const bool operator<(const Product &, const Product &);

    Product &operator=(const Product &);
};


#endif //UNTITLED1_PRODUCT_H

#include <iostream>

#include "Product.h"

int main() {
    Product product;
    product.setData();
    //product.setName("some name");
    product.show();

    Product p2;
    p2.show();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
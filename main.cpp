//Продукт. Реализовать класс, добавить поля, в том числе с типом
//char* в приватную секцию, добавить геттеры и сеттеры для этих полей в
//публичную секцию, реализовать конструкторы инициализации и
//копирования, деструкторы. Продемонстрировать следующий функционал:
//создание и удаление массива экземпляров класса; использование класса;
//поиск или сортировку в массиве;использование конструктора копирования,
//конструктора инициализации; перегруженного метода.


#include <iostream>
#include <vector>
#include <algorithm>

#include "Product.h"

using namespace std;

int main() {
//    int number = 0;
//    while (number <= 0) {
//        cout << "Please, input the number of products:\n";
//        cin >> number;
//    }
//    vector<Product> arr(number);
//    for (Product &temp : arr) {
//        temp.setData();
//    }
    char *name1 = "bbb";
    char *name2 = "aaa";
    vector<Product> arr = {Product(name1, 7, 8), Product(name2, 5, 6)};

    sort(arr.begin(), arr.end());
    for (Product temp : arr)
        temp.show();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
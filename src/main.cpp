#include"book.h"
#include<iostream>

int main() {
    std::cout << "Bookshop Management System" << std::endl;
    Book Comedia = Book("Comedia","Dante Aligheri", 10,10,10);
    Book ESDLB = Book("El Sabueso de los Baskerville", "Arthur Conan Doyle", 10,10,10);
    Comedia.GetBookData();
    ESDLB.GetBookData();
    return 0;
}
#include"book.h"
#include<iostream>
#include<string>
using std::string;

Book::Book(){};
Book::Book(string name,string author,int publicationData,int stock, int sales) {
    Book::Name = name;
    Book::Author = author;
    Book::Stock = stock;
    Book::Sales = sales;
}
void Book::GetBookData (bool isLast = false) {
    std::cout << "+----------------------------------" << std::endl;
    std::cout << "| " << Name << " - " << Author << std::endl;
    std::cout << "| " << "Stock: " << Stock << std::endl;
    if(isLast){
    std::cout << "+----------------------------------" << std::endl;
    }
}

void Book::AddNewStock(int newStock) {
    Stock += newStock;
}
void Book::RemoveStock(int quantity = 1) {
    Stock -= quantity;
}
void Book::SetStock(int stock) {
    Stock = stock;
}

void Book::Sell(int quantity = 1) {
    Sales += quantity;
    RemoveStock(quantity);
}
void Book::SetSales(int sales) {
    Sales = sales;
}
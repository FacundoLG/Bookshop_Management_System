#include"book.h"
#include<iostream>
#include<string>
using std::string;

Book::Book(){};
Book::Book(string name,string author,int publicationData,int stock, int sales, string id) {
    Book::Name = name;
    Book::Author = author;
    Book::Stock = stock;
    Book::Sales = sales;
    Book::ID = id;
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

string Book::GetName(){
    return Name;
}
string Book::GetAuthor(){
    return Name;
}
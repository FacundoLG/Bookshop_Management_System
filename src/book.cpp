#include"book.h"
#include<iostream>
#include<string>
using std::string;

Book::Book(){};
Book::Book(string name,string author,int publicationDate,int stock, int sales, string id) {
    Book::Name = name;
    Book::PublicationDate = publicationDate;
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

string Book::gName(){
    return Name;
};
string Book::gAuthor(){
    return Author;
};
int Book::gPublicationDate(){
    return PublicationDate;
};
int Book::gStock(){
    return Stock;
};
int Book::gSales(){
    return Sales;
};

string Book::gID(){
    return ID;
}
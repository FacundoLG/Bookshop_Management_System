#include"book.h"
#include"booksDB.h"

#include<vector>
#include<array> 
#include<string>
#include<fstream>

#include<iostream>
#include<ios>
using std::string;

BooksDB::BooksDB(string url){
    BooksDB::URL = url;
    std::cout << "[DB] Finding database file" << std::endl;
    std::fstream db;
    db.open(URL, std::ios::in);
    if(db.is_open()){
        std::cout << "[DB] Database file found" << std::endl;
    } else {
            std::cout << "[DB] Database file wasn't found" << std::endl;
            std::cout << "[DB] Do you want to create a database file in " << url << " ?" << std::endl;
            std::cout << "-> ";
            string res;
            std::cin >> res;
            if(!(res == "y" || res == "yes" || res == "1")){
                std::cout << "[DB] I don't care, creating database file in " << url << std::endl;
            }
            db.open(URL,std::ios::app);
            if(db.is_open()){
                db << "NAME,AUTHOR,PUBLICATION,STOCK,SALES,ID \n";
                db.close();
                std::cout << "[DB] Database created" << std::endl;
            }  
    }
};
string * BooksDB::split(string str,char slicer){
    std::vector<string> data;
    string word = "";
    int idx = 0;
    for(char x : str){
        idx++;
        if(x == slicer || idx == str.size()){
            if(idx == str.size()){
             word+=x;   
            }
            data.push_back(word);
            word = "";
            continue;
        }
        word += x;
    }
    string * arr = new string[data.size()+1];
    std::copy(data.begin(),data.end(),arr);
    return arr;
}


Book * BooksDB::GetBooks(string input){
    std::fstream db;
    db.open(URL,std::ios::in);
    std::vector<Book> books;
    string data;
    bool isFirsLine = true;
    while(getline(db,data)){
      string * book = split(data,',');
      if(isFirsLine){
        isFirsLine = false;
        continue;
      }
      books.push_back(Book(book[0],book[1],std::stoi(book[2]),std::stoi(book[3]),std::stoi(book[4]),book[5]));
    }
    Book * BooksArr = new Book[books.size()];
    std::copy(books.begin(),books.end(),BooksArr);
    return BooksArr;
};
void BooksDB::AddBook(Book book){
    std::fstream db;
    db.open(URL,std::ios::app);
    if(!db.is_open()) return;
    db << book.gName() << "," << book.gAuthor() << 
    "," << book.gPublicationDate() << "," << book.gStock()
    << "," << book.gSales() << "," << book.gID() << "\n"; 
    db.close();
};
void BooksDB::RemoveBook(Book book){
    std::fstream db;
    db.open(URL,std::ios::in);
    if(!db.is_open()) return;
    string data;
    while (getline(db,data)){
        std::cout << data << std::endl;
    }
    db.close();
};               

#include"book.h"
#include"booksDB.h"
#include<string>
#include<fstream>
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
Book * BooksDB::GetBooks(string input){

};
void BooksDB::AddBook(Book book){
        std::fstream db;
        db.open(URL,std::ios::app);
        if(!db.is_open()) return;
        db << book.gName() << "," << book.gAuthor() << 
        "," << book.gPublicationDate() << "," << book.gStock()
        << "," << book.gSales() << "," << book.gID() << "\n"; 

};
void BooksDB::RemoveBook(Book book){

};               

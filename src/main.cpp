#include"book.h"
#include<iostream>
#include<fstream>
#include<string>
#include<array>
using std::string;

class Shop {
    private:
        std::array<Book,4> books = {
            Book("Book1","Author1",2000,10,10, "1"),
            Book("Book2","Author1",2010,10,10, "2"),
            Book("Book3","Author2",1990,1,10, "3"),
            Book("Book4","Author3",1990,10,0, "4"),
        };
        string Name;
        string BooksDataLocation;
    public:
        Shop(string name, string booksDataLocation){
            Name = name;
            BooksDataLocation = booksDataLocation;
        }
        void GetBooksData(){
            std::ifstream file;
            file.open(BooksDataLocation.c_str());
            if (file.fail()){
                std::cout<< "Error opening file" << std::endl;
                return;
            }
            string line;
            int bookCount = 0;
            while(getline(file,line)){
                //Parse string data
            }
            file.close();
        }
        void ShowAllBooks(){
           int length = sizeof(books) / sizeof(Book);
           std::cout << length << std::endl;
           for(int i = 0; i < books.size(); i++){
             /* std::cout << books.size() << std::endl; */
             books[i].GetBookData(i == (books.size() - 1));
           }
        }
};


int main() {
    std::cout << "Bookshop Management System" << std::endl << std::endl;
    Shop shop = Shop("TheBookStore","./data.txt");
    shop.GetBooksData();
    shop.ShowAllBooks();
    return 0;
}
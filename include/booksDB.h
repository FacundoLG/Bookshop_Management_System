#pragma once
#include"book.h"
#include<string>
using std::string;

class BooksDB {
    private:
        string URL;
    public:
        BooksDB(string url);
        Book * GetBooks(string input);
        void AddBook(Book book);
        void RemoveBook(Book book);               

};
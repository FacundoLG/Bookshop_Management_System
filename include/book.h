#pragma once
#include<iostream>
#include <string>

using std::string;

class Book {
    private:
        string Name;
        string Author;
        string ID; 
        int PublicationDate;
        int Stock;
        int Sales;
    public:
        Book();
        Book(string name,string author,int publicationData,int stock, int sales,string id);
        void PrintBookData();
        void PrintEnd();
        void AddNewStock(int newStock);
        void RemoveStock(int quantity);
        void SetStock(int stock);
        void Sell(int quantity);
        void SetSales(int sales);
        string GetName();
        string GetAuthor();
};
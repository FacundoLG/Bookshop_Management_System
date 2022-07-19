#!/bin/bash

rm ../build/Shop  

g++ book.cpp main.cpp booksDB.cpp -I../include/ -o ../build/Shop

echo "Build completed"
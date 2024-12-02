#ifndef BOOK_H
#define BOOK_H

#include "libraryitem.h"
#include <string>

class Book : public LibraryItem {
    private:
        std::string author;
    public:
    Book(const char* t, int i, const std::string& a);
    Book& operator=(const Book& other);

    void display() const;
};

#endif
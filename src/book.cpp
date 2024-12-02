#include "book.h"
#include <iostream>

// Constructor
Book::Book(const char* t, int i, const std::string& a)
    : LibraryItem(t, i), author(a) {
    std::cout << "Book: Object created\n";
}

// Assignment operator
Book& Book::operator=(const Book& other) {
    if (this == &other) {
        std::cout << "Book: Self-assignment ignored\n";
        return *this;
    }

    LibraryItem::operator=(other);
    author = other.author;

    std::cout << "Book: Assignment operator called\n";
    return *this;
}

// Display method
void Book::display() const {
    LibraryItem::display();
    std::cout << "Author: " << author << "\n";
}

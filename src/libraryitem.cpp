#include "libraryitem.h"
#include <iostream>
#include <cstring> 

// Constructor
LibraryItem::LibraryItem(const char* t, int i)
    : title(strdup(t)), id(i) {
    std::cout << "LibraryItem: Object created\n";
}

// Assignment operator
LibraryItem& LibraryItem::operator=(const LibraryItem& other) {
    if (this == &other) {
        std::cout << "LibraryItem: Self-assignment ignored\n";
        return *this;
    }

    delete[] title;
    title = strdup(other.title);
    id = other.id;

    std::cout << "LibraryItem: Assignment operator called\n";
    return *this;
}

// Display method
void LibraryItem::display() const {
    std::cout << "ID: " << id << ", Title: " << title << "\n";
}

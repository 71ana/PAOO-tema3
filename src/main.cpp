#include "libraryitem.h"
#include "book.h"

int main() {
    // Create a LibraryItem
    LibraryItem item1("Generic Article", 1001);
    item1.display();

    // Create a Book
    Book book1("C++ Programming", 2001, "Bjarne Stroustrup");
    book1.display();

    // Copy constructor
    Book book2 = book1;
    book2.display();

    // Assignment operator
    Book book3("Temporary Book", 3001, "Temporary Author");
    book3 = book1;
    book3.display();

    // Self-assignment
    book3 = book3;

    return 0;
}

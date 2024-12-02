#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include <string>

class LibraryItem {
    private:
        char* title;
        int id;        
    public:
        LibraryItem(const char* t, int i);
        LibraryItem& operator=(const LibraryItem& other);
        void display() const;
};

#endif
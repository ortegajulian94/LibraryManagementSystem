// Book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    bool checkedOut;

public:
    Book(std::string title, std::string author);

    std::string getTitle() const;
    std::string getAuthor() const;
    bool isCheckedOut() const;

    void checkOut();
    void checkIn();
};

#endif // BOOK_H

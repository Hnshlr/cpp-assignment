#include "../include/Book.h"

Book::Book(const string &title, int refNo, const string &author, int isbn, const string &publisher) : Publication(title, refNo) {
    this->author = author;
    this->ISBN = isbn;
    this->publisher = publisher;
}

Book::~Book() {

}

const string &Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const string &author) {
    Book::author = author;
}

int Book::getIsbn() const {
    return ISBN;
}

void Book::setIsbn(int isbn) {
    ISBN = isbn;
}

const string &Book::getPublisher() const {
    return publisher;
}

void Book::setPublisher(const string &publisher) {
    Book::publisher = publisher;
}

string Book::toString() {
    return "Book{author='" + author+'\'' + ", title='"+getTitle()+'\'' +", refNo='"+to_string(getRefNo())+'\''+
           ", ISBN='" + to_string(ISBN) +'\''+
           ", publisher='" + publisher + '\'' +
           '}';
}

Book::Book(const string &title, int refNo) : Publication(title, refNo) {}

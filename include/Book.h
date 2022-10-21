#ifndef MINIPROJECT_BOOK_H
#define MINIPROJECT_BOOK_H

#include "Publication.h"

#include <string>

using namespace std;

class Book : public Publication {
private:
    string author;
    int ISBN;
    string publisher;
public:
    Book(const string &title, int refNo);
    Book(const string &title, int refNo, const string &author, int isbn, const string &publisher);
    virtual ~Book();

    const string &getAuthor() const;
    void setAuthor(const string &author);
    int getIsbn() const;
    void setIsbn(int isbn);
    const string &getPublisher() const;
    void setPublisher(const string &publisher);

    string toString() override;

};


#endif

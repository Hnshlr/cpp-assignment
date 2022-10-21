#ifndef MINIPROJECT_LIBRARY_H
#define MINIPROJECT_LIBRARY_H

#include "Publication.h"

#include <string>
#include <vector>

using namespace std;

class Library {
private:
    vector<Publication*> publications;
public:
    Library();
    Library(const vector<Publication *> &publications);
    virtual ~Library();

    const vector<Publication *> &getPublications() const;
    void setPublications(const vector<Publication *> &publications);

    void addPublication(Publication* publication);
    Publication* displayPublication(int refNo);

    vector<Publication>* borrowedPublications();

    void displayBorrowedPublications();

    string publicationCountsAndTypes();

    string inventory();
};


#endif

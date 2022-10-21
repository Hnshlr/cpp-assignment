#include <iostream>
#include "../include/Library.h"

#include "../include/Book.h"
#include "../include/Journal.h"
#include "../include/MusicCD.h"
#include "../include/DVD.h"

string Library::inventory() {
    string result = "";
    for (int i = 0; i < publications.size(); i++) {
        result += publications[i]->toString() + "\n";
    }
    return result;
}

Library::Library() {}

Library::Library(const vector<Publication *> &publications) : publications(publications) {}

Library::~Library() {

}

const vector<Publication *> &Library::getPublications() const {
    return publications;
}

void Library::setPublications(const vector<Publication *> &publications) {
    Library::publications = publications;
}

void Library::addPublication(Publication *publication) {
    publications.push_back(publication);
}

Publication *Library::displayPublication(int refNo) {
    for (int i = 0; i < publications.size(); i++) {
        if (publications[i]->getRefNo() == refNo) {
            return publications[i];
        }
    }
    return nullptr;
}

vector<Publication> *Library::borrowedPublications() {
    vector<Publication> *result = new vector<Publication>();
    for (int i = 0; i < publications.size(); i++) {
        if (publications[i]->getBorrowed()) {
            result->push_back(*publications[i]);
        }
    }
    return result;
}

void Library::displayBorrowedPublications() {
    vector<Publication> *borrowedPublications = this->borrowedPublications();
    for (int i = 0; i < borrowedPublications->size(); i++) {
        cout << borrowedPublications->at(i).toString() << endl;
    }
}

string Library::publicationCountsAndTypes() {
    int bookCount = 0;
    int journalCount = 0;
    int musicCDCount = 0;
    int DVDCount = 0;
    for (int i = 0; i < publications.size(); i++) {
        if (dynamic_cast<Book*>(publications[i]) != nullptr) {
            bookCount++;
        } else if (dynamic_cast<Journal*>(publications[i]) != nullptr) {
            journalCount++;
        } else if (dynamic_cast<MusicCD*>(publications[i]) != nullptr) {
            musicCDCount++;
        } else if (dynamic_cast<DVD*>(publications[i]) != nullptr) {
            DVDCount++;
        }
    }
    return "Library Publication Counts and Types:\nBooks: " + to_string(bookCount) + "\n" +
           "Journals: " + to_string(journalCount) + "\n" +
           "Music CDs: " + to_string(musicCDCount) + "\n" +
           "DVDs: " + to_string(DVDCount) + "\n";
}




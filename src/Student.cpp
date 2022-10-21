#include "../include/Student.h"

using namespace std;

Student::Student() {}

Student::Student(const string &fullname, int age) : Person(fullname, age) {}

Student::~Student() {

}

const vector<Publication *> &Student::getBorrowedPublications() const {
    return borrowedPublications;
}

void Student::setBorrowedPublications(const vector<Publication *> &borrowedPublications) {
    Student::borrowedPublications = borrowedPublications;
}

void Student::borrowPublication(Publication *publication) {
    borrowedPublications.push_back(publication);
    publication->setIsBorrowed(true);
}

void Student::returnPublication(Publication *publication) {
    for (int i = 0; i < borrowedPublications.size(); i++) {
        if (borrowedPublications[i] == publication) {
            borrowedPublications.erase(borrowedPublications.begin() + i);
            break;
        }
    }
    publication->setIsBorrowed(false);
}

string Student::borrowedPublicationsToString() {
    string result = "";
    for (int i = 0; i < borrowedPublications.size(); i++) {
        result += borrowedPublications[i]->toString() + "\n";
    }
    return result;
}

string Student::toString() {
    return "Student{fullname='" + getFullname() + '\'' +
           ", age=" + to_string(getAge()) +
           ", borrowedPublications=" + borrowedPublicationsToString() +
           '}';
}

#ifndef MINIPROJECT_STUDENT_H
#define MINIPROJECT_STUDENT_H

#include "Person.h"
#include "Publication.h"

#include <string>
#include <vector>

using namespace std;

class Student : public Person {
private:
    vector<Publication*> borrowedPublications;
public:
    Student();
    Student(const string &fullname, int age);
    virtual ~Student();

    const vector<Publication *> &getBorrowedPublications() const;
    void setBorrowedPublications(const vector<Publication *> &borrowedPublications);

    void borrowPublication(Publication* publication);
    void returnPublication(Publication* publication);

    string borrowedPublicationsToString();
    string toString();
};


#endif

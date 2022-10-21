#ifndef MINIPROJECT_DIRECTOR_H
#define MINIPROJECT_DIRECTOR_H

#include "Person.h"

#include <string>

using namespace std;

class Director : public Person {
private:
    int moviesDirected;
    int startYear;
public:
    Director();

    Director(const string &fullname, int age);
    Director(const string &fullname, int age, int moviesDirected, int startYear);
    virtual ~Director();

    int getMoviesDirected() const;

    void setMoviesDirected(int moviesDirected);

    int getStartYear() const;

    void setStartYear(int startYear);

    string toString();
};


#endif

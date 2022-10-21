#ifndef MINIPROJECT_ACTOR_H
#define MINIPROJECT_ACTOR_H

#include "Person.h"

#include <string>

using namespace std;

class Actor : public Person {
private:
    int starRating;
    int startYear;
public:
    Actor(const string &fullname, int age);
    Actor(const string &fullname, int age, int starRating, int startYear);
    virtual ~Actor();

    int getStarRating() const;

    void setStarRating(int starRating);

    int getStartYear() const;

    void setStartYear(int startYear);

    string toString();
};


#endif

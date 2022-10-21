#include "../include/Actor.h"

Actor::Actor(const string &fullname, int age) : Person(fullname, age) {}

Actor::Actor(const string &fullname, int age, int starRating, int startYear) : Person(fullname, age),
                                                                               starRating(starRating),
                                                                               startYear(startYear) {}

Actor::~Actor() {

}

int Actor::getStarRating() const {
    return starRating;
}

void Actor::setStarRating(int starRating) {
    Actor::starRating = starRating;
}

int Actor::getStartYear() const {
    return startYear;
}

void Actor::setStartYear(int startYear) {
    Actor::startYear = startYear;
}

string Actor::toString() {
    return "Actor{fullname='" + getFullname() + '\'' +
           ", age=" + to_string(getAge()) +
           ", starRating=" + to_string(starRating) +
           ", startYear=" + to_string(startYear) +
           '}';
}

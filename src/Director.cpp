#include "../include/Director.h"

Director::Director() {}

Director::Director(const string &fullname, int age) : Person(fullname, age) {}

Director::Director(const string &fullname, int age, int moviesDirected, int startYear) : Person(fullname, age),
                                                                                         moviesDirected(moviesDirected),
                                                                                         startYear(startYear) {}

Director::~Director() {

}

int Director::getMoviesDirected() const {
    return moviesDirected;
}

void Director::setMoviesDirected(int moviesDirected) {
    Director::moviesDirected = moviesDirected;
}

int Director::getStartYear() const {
    return startYear;
}

void Director::setStartYear(int startYear) {
    Director::startYear = startYear;
}

string Director::toString() {
    return "Director{fullname='" + getFullname() + '\'' +
           ", age=" + to_string(getAge()) +
           ", moviesDirected=" + to_string(moviesDirected) +
           ", startYear=" + to_string(startYear) +
           '}';
}


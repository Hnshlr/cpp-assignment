#include "../include/DVD.h"

DVD::DVD(const string &title, int refNo) : Publication(title, refNo) {}

DVD::DVD(const string &title, int refNo, const Director &director, int actorsNumber, const vector<Actor> &actors,
         int duration) : Publication(title, refNo), director(director), actorsNumber(actorsNumber), actors(actors),
                         duration(duration) {}

DVD::~DVD() {
}

const Director &DVD::getDirector() const {
    return director;
}

void DVD::setDirector(const Director &director) {
    DVD::director = director;
}

int DVD::getActorsNumber() const {
    return actorsNumber;
}

void DVD::setActorsNumber(int actorsNumber) {
    DVD::actorsNumber = actorsNumber;
}

const vector<Actor> &DVD::getActors() const {
    return actors;
}

void DVD::setActors(const vector<Actor> &actors) {
    DVD::actors = actors;
}

int DVD::getDuration() const {
    return duration;
}

void DVD::setDuration(int duration) {
    DVD::duration = duration;
}

string DVD::toString() {
    return "DVD{director=" + director.toString() +
           ", actorsNumber=" + to_string(actorsNumber) +
           ", actors=" + to_string(actors.size()) +
           ", duration=" + to_string(duration) +
           '}';
}

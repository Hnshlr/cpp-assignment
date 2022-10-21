#ifndef MINIPROJECT_DVD_H
#define MINIPROJECT_DVD_H

#include "Publication.h"
#include "Director.h"
#include "Actor.h"

#include <string>
#include <vector>

using namespace std;

class DVD : public Publication {
private:
    enum category { MOVIE, DOCUMENTARY, TV_SERIES, OTHER };
    Director director;
    int actorsNumber;
    vector<Actor> actors;
    int duration;
public:
    DVD(const string &title, int refNo);
    DVD(const string &title, int refNo, const Director &director, int actorsNumber, const vector<Actor> &actors,
        int duration);
    virtual ~DVD();

    const Director &getDirector() const;

    void setDirector(const Director &director);

    int getActorsNumber() const;

    void setActorsNumber(int actorsNumber);

    const vector<Actor> &getActors() const;

    void setActors(const vector<Actor> &actors);

    int getDuration() const;

    void setDuration(int duration);

    string toString();
};


#endif

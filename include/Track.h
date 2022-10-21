#ifndef MINIPROJECT_TRACK_H
#define MINIPROJECT_TRACK_H

#include <string>

using namespace std;

class Track {
private:
    string title;
    int duration;
public:
    Track();
    Track(const string &title, int duration);
    virtual ~Track();

    const string &getTitle() const;

    void setTitle(const string &title);

    int getDuration() const;

    void setDuration(int duration);

    string toString();
};


#endif
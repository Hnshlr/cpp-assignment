#ifndef MINIPROJECT_MUSICCD_H
#define MINIPROJECT_MUSICCD_H

#include "Publication.h"
#include "Track.h"

#include <string>
#include <vector>

using namespace std;

class MusicCD : public Publication{
private:
    enum category {CLASSICAL, JAZZ, POP, ROCK};
    string artist;
    int numberOfTracks;
    vector<Track> tracks;
public:
    MusicCD(const string &title, int refNo);
    MusicCD(const string &title, int refNo, const string &artist, int numberOfTracks, const vector<Track> &tracks);
    virtual ~MusicCD();

    const string &getArtist() const;

    void setArtist(const string &artist);

    int getNumberOfTracks() const;

    void setNumberOfTracks(int numberOfTracks);

    const vector<Track> &getTracks() const;

    void setTracks(const vector<Track> &tracks);

    string toString();

    int totalDuration();
};


#endif

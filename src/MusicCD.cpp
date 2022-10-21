#include "../include/MusicCD.h"

MusicCD::MusicCD(const string &title, int refNo) : Publication(title, refNo) {}

MusicCD::MusicCD(const string &title, int refNo, const string &artist, int numberOfTracks, const vector<Track> &tracks)
        : Publication(title, refNo), artist(artist), numberOfTracks(numberOfTracks), tracks(tracks) {}

MusicCD::~MusicCD() {

}

const string &MusicCD::getArtist() const {
    return artist;
}

void MusicCD::setArtist(const string &artist) {
    MusicCD::artist = artist;
}

int MusicCD::getNumberOfTracks() const {
    return numberOfTracks;
}

void MusicCD::setNumberOfTracks(int numberOfTracks) {
    MusicCD::numberOfTracks = numberOfTracks;
}

const vector<Track> &MusicCD::getTracks() const {
    return tracks;
}

void MusicCD::setTracks(const vector<Track> &tracks) {
    MusicCD::tracks = tracks;
}

string MusicCD::toString() {
    return "MusicCD{artist='" + artist + '\'' +
           ", numberOfTracks=" + to_string(numberOfTracks) +
           ", tracks=" + to_string(tracks.size()) +
           ", title='" + getTitle() + '\'' +
           ", refNo=" + to_string(getRefNo()) +
           '}';
}

int MusicCD::totalDuration() {
    int totalDuration = 0;
    for (Track track : tracks) {
        totalDuration += track.getDuration();
    }
    return totalDuration;
}

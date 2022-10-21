#include "../include/Track.h"

Track::Track() {}

Track::Track(const string &title, int duration) : title(title), duration(duration) {}

Track::~Track() {

}

const string &Track::getTitle() const {
    return title;
}

void Track::setTitle(const string &title) {
    Track::title = title;
}

int Track::getDuration() const {
    return duration;
}

void Track::setDuration(int duration) {
    Track::duration = duration;
}

string Track::toString() {
    return "Track{title='" + title + '\'' +
           ", duration=" + to_string(duration) +
           '}';
}

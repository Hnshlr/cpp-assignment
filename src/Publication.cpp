#include "../include/Publication.h"

Publication::Publication() {}

Publication::Publication(const string &title, int refNo) {
    this->title = title;
    this->refNo = refNo;
}

Publication::~Publication() {}

const string &Publication::getTitle() const {
    return title;
}

void Publication::setTitle(const string &title) {
    Publication::title = title;
}

int Publication::getRefNo() const {
    return refNo;
}

void Publication::setRefNo(int refNo) {
    Publication::refNo = refNo;
}

string Publication::toString() {
    return "Publication{title='" + title + '\'' +
           ", refNo=" + to_string(refNo) +
           '}';
}

bool Publication::getBorrowed() const {
    return isBorrowed;
}

void Publication::setIsBorrowed(bool isBorrowed) {
    Publication::isBorrowed = isBorrowed;
}

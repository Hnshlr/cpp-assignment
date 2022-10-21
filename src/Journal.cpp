#include "../include/Journal.h"

Journal::Journal(const string &title, int refNo, int date, const string &editor) : Publication(title, refNo),
                                                                                   date(date), editor(editor) {}

Journal::~Journal() {

}

int Journal::getDate() const {
    return date;
}

void Journal::setDate(int date) {
    Journal::date = date;
}

const string &Journal::getEditor() const {
    return editor;
}

void Journal::setEditor(const string &editor) {
    Journal::editor = editor;
}

string Journal::toString() {
    return "Journal{date=" + to_string(date) +
           ", editor='" + editor + '\'' +
           ", title='" + getTitle() + '\'' +
           ", refNo=" + to_string(getRefNo()) +
           '}';
}

Journal::Journal(const string &title, int refNo) : Publication(title, refNo) {}

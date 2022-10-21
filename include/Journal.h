#ifndef MINIPROJECT_JOURNAL_H
#define MINIPROJECT_JOURNAL_H

#include "Publication.h"

#include <string>

using namespace std;

class Journal : public Publication {
private:
    int date;
    string editor;
public:
    Journal(const string &title, int refNo);
    Journal(const string &title, int refNo, int date, const string &editor);
    virtual ~Journal();

    int getDate() const;
    void setDate(int date);
    const string &getEditor() const;
    void setEditor(const string &editor);

    string toString();

};


#endif

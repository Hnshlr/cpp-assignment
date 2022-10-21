#ifndef MINIPROJECT_PUBLICATION_H
#define MINIPROJECT_PUBLICATION_H

#include <string>

using namespace std;

class Publication {
private:
    string title;
    int refNo;

    bool isBorrowed = false;
public:
    Publication();
    Publication(const string &title, int refNo);
    virtual ~Publication();

    const string &getTitle() const;
    void setTitle(const string &title);
    int getRefNo() const;
    void setRefNo(int refNo);

    bool getBorrowed() const;
    void setIsBorrowed(bool isBorrowed);

    virtual string toString();
};

#endif

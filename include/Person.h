#ifndef MINIPROJECT_PERSON_H
#define MINIPROJECT_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string fullname;
    int age;
public:
    Person();
    Person(const string &fullname, int age);
    virtual ~Person();

    const string &getFullname() const;

    void setFullname(const string &fullname);

    int getAge() const;

    void setAge(int age);
};


#endif

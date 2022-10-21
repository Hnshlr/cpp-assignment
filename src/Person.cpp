#include "../include/Person.h"

Person::Person() {}

Person::Person(const string &fullname, int age) : fullname(fullname), age(age) {}

Person::~Person() {

}

const string &Person::getFullname() const {
    return fullname;
}

void Person::setFullname(const string &fullname) {
    Person::fullname = fullname;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

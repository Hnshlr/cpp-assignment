#include <iostream>

#include "include/Book.h"
#include "include/Journal.h"
#include "include/MusicCD.h"
#include "include/DVD.h"

#include "include/Track.h"
#include "include/Actor.h"
#include "include/Director.h"
#include "include/Student.h"

#include "include/Library.h"

#include <string>
#include <vector>


using namespace std;

int main() {

    // Books :
    Book empty_book("Empty Book", 1);
    Book book("Book", 2, "Author", 123456789, "Publisher");

    // Journals :
    Journal empty_journal = Journal("Empty Journal", 3);
    Journal journal("Journal", 4, 2020, "Editor");

    // Music CDs :
    Track empty_track;
    MusicCD empty_music_cd("Empty Music CD", 5);
    Track something_in_the_way("Something in the Way", 123);
    Track smells_like_teen_spirit("Smells Like Teen Spirit", 123);
    Track come_as_you_are("Come as You Are", 123);
    Track heart_shaped_box("Heart Shaped Box", 123);
    Track lithium("Lithium", 123);
    MusicCD nevermind("Nevermind", 6, "Nirvana", 5, {something_in_the_way, smells_like_teen_spirit, come_as_you_are, heart_shaped_box, lithium});

    // DVDs :
    DVD empty_dvd("Empty DVD", 7);
    DVD the_matrix("The Matrix", 8, Director("Lana Wachowski", 28), 3, {Actor("Carrie-Anne Moss", 28), Actor("Keanu Reeves", 28), Actor("Laurence Fishburne", 28)}, 136);

    // Library :
    Library library({&empty_book, &book, &empty_journal, &journal, &empty_music_cd, &nevermind});
    library.addPublication(&empty_dvd);
    library.addPublication(&the_matrix);
    cout << library.inventory() << endl;

    // Student and borrows:
    Student student("John Doe", 20);
    student.borrowPublication(&book);
    student.borrowPublication(&journal);
    cout << student.getFullname() << " has borrowed " << student.getBorrowedPublications().size() << " publications." << endl;
    cout << student.toString() << endl;

    student.returnPublication(&book);
    cout << student.getFullname() << " has borrowed " << student.getBorrowedPublications().size() << " publications." << endl;
    cout << student.toString() << endl;


    // Display publication :
    // cout << library.displayPublication(6)->toString() << endl;

    // Total duration of a Music CD :
    // cout << "Total duration of " << nevermind.getTitle() << " : " << nevermind.totalDuration() << " minutes." << endl;

    // Display library borrowed publications :
    // library.displayBorrowedPublications();

    // Display library's publications counts and types :
    cout << library.publicationCountsAndTypes() << endl;

    return 0;
}
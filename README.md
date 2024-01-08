# CPlusPlus Assignment 2022-2023

The task is to create a C++ OO program modelling a simple library system. The library in question stores different types of media (publications): books, journals, music CDs, film DVDs.

© Copyright 2022, All rights reserved to Hans Haller, CSTE-CIDA Student at Cranfield Uni. SATM, Cranfield, UK.

https://www.github.com/Hnshlr

## Rules

- A book includes the following details: author, title, ISBN, publisher, refNo.
- A journal contains: title, date, editor, refNo.
- A music CD contains: title, category, artist, number of tracks, list of tracks, refNo. A
track contains: title, duration.
- A DVD contains: title, category, director, number of actors, list of actors, duration,
refNo.

## Services

In addition to storing the publications, the library has a name and can carry out the following services:

1) A publication can be borrowed (if it is not already on loan)
2) A publication on loan can be returned
3) A new publication can be added to the library collection
4) Display one of: all books, journals, CDs, DVDs in the library
5) Display the details of a particular book, journal, CD or DVD (for CDs it should also
   display the total duration of the CD)
6) Display all the publications in the library
7) Display all the publications that are on loan
8) Display how many of each type of publication in the library (including those on-loan)
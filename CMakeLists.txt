cmake_minimum_required(VERSION 3.21)
project(ccp-oopMiniProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(ccp-oopMiniProject main.cpp src/Publication.cpp include/Publication.h src/Book.cpp include/Book.h src/Journal.cpp include/Journal.h src/MusicCD.cpp include/MusicCD.h src/Track.cpp include/Track.h src/DVD.cpp include/DVD.h src/Actor.cpp include/Actor.h src/Person.cpp include/Person.h src/Director.cpp include/Director.h src/Library.cpp include/Library.h src/Student.cpp include/Student.h)


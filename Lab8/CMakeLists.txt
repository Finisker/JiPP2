cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(Note)

add_executable(Note src/Note.cpp include/Note.h src/TextNote.cpp include/TextNote.h src/ListNote.cpp include/ListNote.h src/main.cpp src/NoteDirector.cpp include/NoteDirector.h)
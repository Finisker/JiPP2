//
// Created by milky on 29.11.2021.
//

#ifndef JIPP2_NOTEDIRECTOR_H
#define JIPP2_NOTEDIRECTOR_H

#include "Note.h"
#include "ListNote.h"
#include "TextNote.h"

class NoteDirector {
private:
    vector<Note> notesList;
public:
    void addNote(Note*);
    void addNote(const string title, const string content, int type);
    void deleteNote(int);
    void editNote(int);
    void clearNotesList();
};


#endif //JIPP2_NOTEDIRECTOR_H

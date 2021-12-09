//
// Created by milky on 29.11.2021.
//

#include "../include/NoteDirector.h"


int main() {
    auto noteDirector = new NoteDirector;
    noteDirector->addNote("pierwsza notatka", "to jest zawartość pierwszej notatki", TEXTNOTE);
    auto listNote = new ListNote;
    listNote->setTitle("notatka listowa");
    listNote->setContent("zawartość\nlinia1\nlinia2\nlinia3");
    noteDirector->addNote(listNote);
    noteDirector->addNote("trzecia notatka", "to jest zawartość trzeciej notatki", TEXTNOTE);
    noteDirector->printNotes();
    noteDirector->deleteNote(1);
    noteDirector->printNotes();
    noteDirector->editNote(1, "nowa zawartość");
    noteDirector->printNotes();
    noteDirector->clearNotesList();
    noteDirector->printNotes();
    delete (noteDirector);
    return 0;
}
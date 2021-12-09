//
// Created by milky on 29.11.2021.
//

#include "../include/NoteDirector.h"

void NoteDirector::addNote(Note *note) {
    this->notesList.push_back(note);
}

void NoteDirector::addNote(const string &title, const string &content, int type) {
    switch (type) {
        case TEXTNOTE: {
            auto *newTextNote = new TextNote;
            newTextNote->setTitle(title);
            newTextNote->setContent(content);
            notesList.push_back(newTextNote);
            break;
        }
        case LISTNOTE: {
            auto *newListNote = new ListNote;
            newListNote->setContent(content);
            newListNote->setTitle(title);
            notesList.push_back(newListNote);
            break;
        }
    }

}

void NoteDirector::deleteNote(int index) {
    int n = this->notesList.size();
    delete (this->notesList[index]);
    for (int i = index; i < n - 1; ++i) {
        this->notesList[i] = this->notesList[i + 1];
    }
    this->notesList.pop_back();
}

void NoteDirector::editNote(int index, string content) {
    this->notesList[index]->setContent(content);
}

void NoteDirector::clearNotesList() {
    this->notesList.clear();
}

NoteDirector::~NoteDirector() {
    this->notesList.clear();
}

void NoteDirector::printNotes() {
    int n = this->notesList.size();
    for (int i = 0; i < n; ++i) {
        cout << i << ". " << this->notesList[i]->getTitle() << endl << this->notesList[i]->getContent() << endl;
    }
}

void NoteDirector::printNote(int index) {
    cout << this->notesList[index]->getTitle() << endl << this->notesList[index]->getContent() << endl;
}

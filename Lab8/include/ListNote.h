//
// Created by milky on 29.11.2021.
//

#ifndef NOTE_LISTNOTE_H
#define NOTE_LISTNOTE_H

#include "Note.h"
#include "vector"

class ListNote : public Note {
private:
    vector<string> content;
public:
    string getContent() override;

    void setContent(string) override;
};


#endif //NOTE_LISTNOTE_H

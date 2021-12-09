//
// Created by milky on 29.11.2021.
//

#ifndef NOTE_TEXTNOTE_H
#define NOTE_TEXTNOTE_H

#include "Note.h"

class TextNote : public Note {
private:
    string content;
public:
    string getContent() override;

    void setContent(string input) override;
};


#endif //NOTE_TEXTNOTE_H

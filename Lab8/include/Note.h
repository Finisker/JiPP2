//
// Created by milky on 29.11.2021.
//

#ifndef NOTE_NOTE_H
#define NOTE_NOTE_H

#include <string>

using namespace std;

class Note {
private:
    string title;;

public:
    string getTitle();
    void setTitle(string);
    virtual string getContent()=0;
    virtual void setContent(string)=0;
};


#endif //NOTE_NOTE_H

//
// Created by milky on 29.11.2021.
//

#include "../include/ListNote.h"

string ListNote::getContent() {
    int n = this->content.size();
    string result;
    for(int i=0; i<n; ++i){
        result += this->content[i];
    }
    return result;
}

void ListNote::setContent(string str) {
    this->content.push_back(str);
}

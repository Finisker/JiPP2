//
// Created by milky on 29.11.2021.
//

#include "../include/ListNote.h"

string ListNote::getContent() {
    int n = this->content.size();
    string result;
    for(int i=0; i<n; ++i){
        result += this->content[i];
        if(i!=n-1){
            result += "\n";
        }
    }
    return result;
}

void ListNote::setContent(string str) {
    string line;
    int n = str.size();
    for(int i=0; i<n; ++i){
        if(str.at(i)=='\n'){
            this->content.push_back(line);
            line.clear();
        } else {
            line+=str.at(i);
        }
    }
}

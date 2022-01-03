//
// Created by Maciej Płachta on 03.01.2022.
//

#include "../include/csvlib.h"

vector<vector<string>> csvlib::getValues() {
    return values;
}

vector<string> csvlib::getTitles() {
    return titles;
}

void csvlib::setValues(vector<vector<string>> values) {
    this->values = values;
}

void csvlib::setTitles(vector<string> titles) {
    this->titles = titles;
}

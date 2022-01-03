//
// Created by Maciej Płachta on 03.01.2022.
//
/*
1.	Zapytać o wiersz z tytułami, jeżeli ma być to osobny wektor

1.	Wyjątek otwarcia pliku
2.	Wyjątek odczytu – sięganie poza wektor
3.  Wyjątek alokacji
4.	What()

*/
#ifndef JIPP2_CSVLIB_H
#define JIPP2_CSVLIB_H

#include <string>
#include <vector>

using namespace std;

class csvlib {
private:
    vector<vector<string>> values;
    vector<string> titles;
public:
    bool readFile(string path);
    string readValue(int row, int column);
    void writeValue(int row,int column);
    void printFile();
    void printRow(int row);
    void printColumn(int column);
    bool isTitleVectorEmpty();
    bool saveFile(string path);
    vector<vector<string>> getValues();
    vector<string> getTitles();
    void setValues(vector<vector<string>> values);
    void setTitles(vector<string> titles);
};


#endif //JIPP2_CSVLIB_H

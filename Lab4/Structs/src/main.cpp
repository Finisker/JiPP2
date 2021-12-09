//
// Created by milky on 25.10.2021.
//
#include "iostream"
#include "string"

using namespace std;

struct samochod {
    string marka;
    string model;
    string kolor;
    int rokProdukcji;
    int iloscKol;
};

void printStuct(struct samochod);

int sumMarka(struct samochod *, int elements);

int theOldest(struct samochod *, int elements);

int main() {

    samochod one, two, three, four;
    one.marka = "Ford";
    one.model = "1";
    one.kolor = "czerwony";
    one.rokProdukcji = 1988;
    one.iloscKol = 4;
    two.marka = "Skoda";
    two.model = "2";
    two.kolor = "carny";
    two.rokProdukcji = 2010;
    two.iloscKol = 3;
    three.marka = "Ford";
    three.model = "3";
    three.kolor = "zielony";
    three.rokProdukcji = 1918;
    three.iloscKol = 5;
    four.marka = "BMW";
    four.model = "4";
    four.kolor = "biały";
    four.rokProdukcji = 2005;
    four.iloscKol = 18;

    cout << "Marka Model Rok Kolor Kola\n";
    printStuct(one);
    printStuct(two);
    printStuct(three);
    printStuct(four);
    struct samochod *TMP = new struct samochod[4];
    TMP[0] = one;
    TMP[1] = two;
    TMP[2] = three;
    TMP[3] = four;
    cout << sumMarka(TMP, 4) << endl << theOldest(TMP, 4);

    return 0;
}


void printStuct(struct samochod tmp) {
    cout << tmp.marka << " " << tmp.model << " " << tmp.rokProdukcji << " " << tmp.kolor << " " << tmp.iloscKol << endl;
}

int sumMarka(struct samochod *tmp, int elements) {
    int sum = 0;
    for (int i = 0; i < elements; ++i) {
        if (tmp[i].marka == "Ford") {
            sum++;
        }
    }

    return sum;
}

int theOldest(struct samochod *tmp, int elements) {
    int min = tmp[0].rokProdukcji;
    int index = 0;
    for (int i = 0; i < elements; ++i) {
        if (tmp[i].rokProdukcji < min) {
            min = tmp[i].rokProdukcji;
            index = i;
        }
    }

    return index;
}
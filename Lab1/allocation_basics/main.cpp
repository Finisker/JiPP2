//
// Created by milky on 11.10.2021.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    int l = stoi(argv[2]);
    int *n = new int;
    int k;
    //cout<< n << endl << *n <<endl<< &n <<endl<< &k << endl;
    cout << l << endl;

    delete n;

    int *tab = new int[10];
    delete[] tab;

    int **tab1 = new int *[5];

    for (int i = 0; i < 5; ++i) {
        tab1[i] = new int[5];
    }

    for (int i = 0; i < 5; ++i) {
        delete[] tab1[i];
    }

    delete[] tab1;

    //int tab2[3] = {1,2,3};

    for (int i = 0; i < argc; ++i) {
        cout << argv[i] << endl;
    }

    return 0;
}

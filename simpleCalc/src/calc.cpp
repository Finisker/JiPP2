#include <iostream>

using namespace std;
int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

double volume(int a, int b, int h){
    return ((a+b)/2.)*h;
}

void help(){
    cout<<"Simple calculator\n"
          "simpleCalc [nazwa działania]\n\n"
          "Działania:\n"
          "add [a] [b]\n"
          "     Dodawanie dwóch liczb ([a] i [b]) całkowitych\n"
          "subtract [a] [b]\n"
          "     Odejmowanie dwóch liczb ([b] od [a]) całkowitych\n"
          "volume [a] [b] [h]\n"
          "     Obliczanie objętości graniastosłupa prostego o podstawie trapezu\n"
          "     [a] i [b] - podstawy trapezu"
          "     [h] - wysokośc graniastosłupa\n"
          "help\n"
          "     Wyświetlanie dokumentacji\n";
}

void error(){
    cout<<"BŁĄD ARGUMENTÓW\n";
    help();
}

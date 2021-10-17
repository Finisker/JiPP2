#include <iostream>

using namespace std;
/* Dodawanie dwóch liczb całkowitych
 * @param a - pierwsza dodawana liczba
 * @param b - druga dodawana liczba
 */
int add(int a, int b){
    return a+b;
}
/* Odejmowanie dwóch liczb całkowitych
 * @param a - odjemna
 * @param b - odjemnik
 */
int subtract(int a, int b){
    return a-b;
}
/* Obliczanie objętości graniastosłupa prostego o podstawie trapezu
 * @param a - pierwsza podstawa trapezu
 * @param b - druga podstawa trapezu
 * @param h - wysokość graniastosłupa
 */
double volume(int a, int b, int h){
    return ((a+b)/2.)*h;
}
/* Wyświetlanie dokumentacji
 */
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

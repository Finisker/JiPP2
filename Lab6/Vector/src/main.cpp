//
// Created by milky on 15.11.2021.
//

#include "../include/Vector.h"

int main(){
    Vector v1 = Vector(1,2);
    Vector v2 = Vector(3,4);
    Vector v3;
    v1.print();
    v2.print();
    v3.print();
    v3 = v1 + v2;
    v3.print();
    v3 = v1 - v2;
    v3.print();
    v3 = v1*3.0;
    v3.print();
    v3 = !v1;
    v3.print();
    //v3 = v1;
    v1.print();
    if(v3 == v1){
        cout<<"Są równe";
    }

    return 0;
}

//
// Created by Filip on 05.12.2021.
//

#include <iostream>
#include <list>
#include "../include/Stop.h"
#include "../include/Line.h"

using namespace std;

int main() {
    list<Stop> stops;
    stops.emplace_back(1, "Politechnika", 50.1, 50.2);
    stops.emplace_back(2, "Nowy Kleparz", 50.2, 50.2);
    stops.emplace_back(3, "Plac Inwalidów", 50.2, 50.2);
    stops.emplace_back(4, "Urzędnicza", 50.2, 50.2);
    stops.emplace_back(5, "Biprostal", 50.2, 50.2);
    stops.emplace_back(6, "Uniwersytet Pedagogiczny", 50.2, 50.2);

    Line l1("P", "Podchorążych");
    auto iter = stops.begin();
    l1.addStop(iter.operator->());
    l1.addStop(&*iter++);
    //l1.addStop(&stops[2]);
    //l1.addStop(&stops[3]);
    //l1.addStop(&stops[4]);
    //l1.addStop(&stops[5]);

    l1.print();

    cout << "---------------------------------------" << endl;
    stops.emplace_back(7, "Bratysławska", 50.2, 50.2);
    stops.emplace_back(8, "Teatr Bagatela", 50.2, 50.2);
    stops.emplace_back(9, "Stary Kleparz", 50.2, 50.2);
    stops.emplace_back(10, "Teatr Słowackiego", 50.2, 50.2);
    stops.emplace_back(11, "Teatr Słowackiego1", 50.2, 50.2);
    stops.emplace_back(12, "Teatr Słowackiego2", 50.2, 50.2);
    stops.emplace_back(13, "Teatr Słowackiego3", 50.2, 50.2);

    l1.print();


    return 0;
}
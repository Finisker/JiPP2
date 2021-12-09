//
// Created by milky on 15.11.2021.
//

#include "../include/Node.h"

int main() {

    Node a = Node(1, 1);
    Node b = Node(4, 5);
    a.display();
    b.display();
    cout << pointsDistance(a, b);

    return 0;
}
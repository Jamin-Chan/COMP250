// 1-26 testing if statements.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Please enter 2 integers\n";

    cin >> x >> y; //input

    if (x + y > 10) {
        cout << "Sum is larger than 10\n";
    }

    cout << "Continuing Code\n";

    system("pause");

    return 0;
}

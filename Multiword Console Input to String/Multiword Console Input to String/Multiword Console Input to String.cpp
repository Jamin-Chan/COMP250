// Multiword Console Input to String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Jamin Chan 2/2/2022

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string name;
    cout << "Hello what is ur name?\n";

    getline(cin, name);

    cout << "nice to meet you, " << name << endl;

    system("pause");
    
    return 0;
}


// File IO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Jamin Chan 2/2/2022

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile;
    string inputString;

    cout << "opening file... \n";
    inFile.open("wakeupneo.txt");

    getline(inFile, inputString);
    cout << inputString<<endl<<endl;

    inFile.close();
    system("pause");
    return 0;
}


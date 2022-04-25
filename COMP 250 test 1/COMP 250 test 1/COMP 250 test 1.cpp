// COMP 250 test 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



//Jamin Chan
//Question number 1

/*
#include <iostream>
using namespace std;

int main() {
    
    int numOfElements = 9;
    int arr[] = {0,1,2,3,4,5,6,7,8};



 //for loop to print each element of the array
    cout << "{";
    for (int i = 0; i < numOfElements; i++) {
        //looks for odd index to print
        if (i % 2 == 1) {
            if (numOfElements - 2 == i || numOfElements - 1 == i) {
                cout << arr[i];

            }
            else {
                cout << arr[i] << ", ";
            }
        }
    }
    cout << "}\n";
}
*/

//Question number 2

/*
#include <iostream>
using namespace std;

int main() {

    int numOfElements = 8;
    int arr[] = { 1,2,3,1,17,4,17,8 };
    int sum = 0;

    for (int i = 0; i < numOfElements; i++) {
        if (arr[i] != 17) {
            sum += arr[i];
        }
    }

    cout << sum;
}
*/

//Question number 5


#include <iostream>
using namespace std;

int main() {

    int numOfElements = 5;
    int arr[] = { 2,5,1,5,5};
    int tempNum = 0;
    int has55 = 0;

    for (int i = 0; i < numOfElements; i++) {
    
        if (i > 0) {
            if (tempNum == arr[i] && tempNum == 5) {
                has55 = 1;
            }
        }
        tempNum = arr[i];
    }

    if (has55 == 1) {
        cout << "true";
    } else {
        cout << "false";
    }
}



//Question number 3
/*
#include <iostream>
using namespace std;

int main() {

    int numOfElements = 6;
    int arr[] = {2,69,4,2,28,0};
    int tempNum;

    for (int i = 0; i < numOfElements - 1; i++) {
        tempNum = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tempNum;
    }

    //for loop to print each element of the array
    cout << "[";
    for (int i = 0; i < numOfElements; i++) {
        if (numOfElements - 1 == i) {
            cout << arr[i];

        }
        else {
            cout << arr[i] << ", ";
        }
    }
    cout << "]\n";
}
*/
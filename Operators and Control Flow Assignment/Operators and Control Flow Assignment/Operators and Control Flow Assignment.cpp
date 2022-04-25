// Operators and Control Flow Assignment
//Jamin Chan 2/6/2022

#include <iostream>
using namespace std;

//get the avg min max of the 5 integers
int main() {
    int num, avg = 0, min, max, counter = 5;
    cout << "enter " <<counter<< " integers: " << endl;

    for (int i = 0; i < counter; i++) {
        cin >> num;
        avg += num;

        if (i == 0) {
            min = num;
            max = num;
        }
        else {
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
    }
    
    avg /= counter;

    cout << "min is " << min << endl;
    cout << "max is " << max << endl;
    cout << "avg is " << avg << endl;


//print the sum of odd and even numbers
    int sumOdd = 0, sumEven = 0;

    for (int i = 0; i < 51; i++) {
        if (i % 2 != 0) {
            sumOdd += i;
        }
        else {
            sumEven += i;
        }
    }

    cout << "sum of odd numbers: " << sumOdd << endl;
    cout << "sum of even numbers: " << sumEven << endl;
}



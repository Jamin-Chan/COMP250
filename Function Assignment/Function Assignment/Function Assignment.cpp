// Jamin Chan 2/27/22
// Function Assignment

#include <iostream>
using namespace std;


double sum(double num1, double num2, double num3) {
    return (num1 + num2 + num3);
}

double sum(double num1, double num2) {
    return (num1 + num2);
}


int main() {
    cout << "sum of 2 numbers are " << sum(4, 5) << endl;
    cout << "sum of 2 numbers are " << sum(4, 5, 7) << endl;
}
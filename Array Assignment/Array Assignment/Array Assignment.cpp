// Array Assignment
//Jamin Chan 3/20/22

#include <iostream>
using namespace std;

//get smallest element index of array
int indexSmallest(int arr[], int lowerIndex, int upperIndex) {
    int min = 0, minIndex = 0;
    for (int i = lowerIndex; i <= upperIndex; i++) {
        if (i == lowerIndex) {
            min = arr[i];
            minIndex = i;
        }

        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {

    const int numOfInt = 10;
    int num, temp;
    int arr[numOfInt];

    cout << "enter " << numOfInt << " numbers \n";

//get array
    for (int i = 0; i < numOfInt; i++) {
        cin >> num;
        arr[i] = num;
    }
    
//print array
    //for loop to print each element of the array
    cout << "{";
    for (int i = 0; i < numOfInt; i++) {
        if (numOfInt - 1 == i) {
            cout << arr[i];

        }
        else {
            cout << arr[i] << ", ";
        }
    }
    cout << "}\n";

//sorting array - selection sorting
    for (int i = 0; i < numOfInt; i++) {
        temp = arr[i];
        //cout << temp << "temp \n";
        int minIndex = indexSmallest(arr, i, numOfInt - 1);
        //cout << minIndex << "index \n";
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;  
        //cout << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << ", "  << arr[5] << ", " << arr[6] << ", " << arr[7] << ", " << arr[8] << ", " << arr[9] << ",\n";   
    }

//print array after sorting
    //for loop to print each element of the array
    cout << "{";
    for (int i = 0; i < numOfInt; i++) {
        if (numOfInt - 1 == i) {
            cout << arr[i];

        }
        else {
            cout << arr[i] << ", ";
        }
    }
    cout << "}\n";

//find the index of the element in an array
    cout << "what number do you want to find? \n";
    cin >> num;
    int indexOfNum = -1;

    for (int i = 0; i < numOfInt; i++) {
        if (num == arr[i]) {
            indexOfNum = i;
            break;
        }
    }

    if (indexOfNum != -1) {
        cout << "Your number is in index of: " << indexOfNum;
    }
    else {
        cout << "Your number was not found in the array :(";
    }
}

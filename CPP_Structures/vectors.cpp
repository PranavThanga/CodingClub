#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int myArray[10]; // Fixed size array
    vector<int> myVector; // Dynamic

    cout << myVector.size() << endl; // Prints vector size

    myVector.push_back(1); // Pushes item to back of vector
    myVector.push_back(2);
    myVector.push_back(3);

    cout << myVector.size() << endl;

    myVector.clear(); // Erases all values in vector

    // MINI CHALLENGE #1
    /*
        Get n values from the user.
        Output the average    
    */

    /*
    int n;
    cout << "Input number of values: ";

    while (!(cin >> n)){
        cout << "Invalid input. Enter a valid number: ";
    }

    cout << "Input " << n << "values";
    for (int i = 0; i < n; i++){
        float num;
        cin >> num;
        myVector.push_back(num);
    }

    float avg = 0;
    for (float num : myVector){
        avg += num;
    }

    avg /= n;
    cout << avg << endl;
    */

    // MINI CHALLENGE #2 (INCOMPLETE)
    /*
    Find the missing values.
    */
    /*
    int n;
    cout << "Input number of values: ";

    while (!(cin >> n)){
        cout << "Invalid input. Enter a valid number: ";
    }

    int missing;
    cout << "Input number of missing values: ";

    while (!(cin >> missing) && missing % 2 ){
        cout << "Invalid input. Enter a valid number: ";
    }

    vector<int> nums;
    int expectedSum = (n * (n + 1)) / 2;

    for (int i = 0; i < n - missing; i++){
        int num;
        while (!(cin >> num)){
            cout << "Invalid input. Enter a valid number: ";
        }

        nums.push_back(num);
    }

    int actualSum = 0;
    for (int num : nums){
        actualSum += num;
    }

    int avgMissingNum = expectedSum - actualSum;
    
    
    for (int i = -floor(missing / 2); i <= floor(missing / 2); i++){
        cout << i + avgMissingNum << " " << i << endl;
    }
    */

    // MINI CHALLENGE #3
    // FIBONNACI

    int n;
    cout << "Enter num: ";
    cin >> n;

    int num2 = 0;
    int num1 = 1;
    for (int i = 0; i < n; i++){
        int temp = num2;
        num2 = num1;
        num1 = num2 + temp;
        cout << num1 << " " << num2 << endl;
    }

    cout << num1;
}

// 0 1 1 2 3
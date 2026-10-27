/*
second-largest element:
Example Input:
Size: 7
Input: 12 5 8 12 3 10 8
Expected Output:
Second-largest value: 10
*/
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Size:\t";
    cin >> size;
    
    int array[100];

    cout << "Input\t";

    int input;
    cout << "Input: ";
      for (int i = 0; i < size; i++) {
        if (array[i] > largest) {
            second = largest;

        }
     }
     int largest = array[0];
     int second = array[0];
     
     for (int i = 1; i < size; i++) {
        if (array[i] > largest ) {
            second = largest;
            largest = array[i];
        }
        else if(array[i] < largest && array[i] > second) {
            second = array[i];
        }
     }
   
     cout << "Second largest: << second << endl;
     return 0;
}
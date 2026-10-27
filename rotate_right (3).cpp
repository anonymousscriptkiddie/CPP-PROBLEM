#include <iostream>
using namespace std;

int main(){
    int size;

    cout << "Size: ";
    cin >> size;

    int numbers[size];

    cout << "Input: ";
    for(int index = 0 ; index < size ; index++){
        cin >> numbers[index];
    }

    int k;
    cout << "k = ";
    cin >> k;

    k %= size;
    
    for(int index = size - k; index < size ; index++){
        cout << numbers[index] << ' ';
    }
    for(int index = 0; index < (size - k) ; index++){
        cout << numbers[index] << ' ';
    }

    return 0;

}
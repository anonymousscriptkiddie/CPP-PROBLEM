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

    for(int index = 0 ; index < size ; index++){
        bool isDuplicate = false;
        for(int check = 0; check < index ; check++){
            if(numbers[check] == numbers[index]){
                isDuplicate = true;
                break;
            }
        }
        if(isDuplicate != true) cout << numbers[index] << ' ';
    }



    return 0;

}

/*

4 2 4 7 2 9 7 1 9 3

for(start index = 0 ; index < size ; index++){
    for(start check = 0 ; check < index ; check++){
        if(numbers[check] == numbers[index]) break;
    }

    cout << numbers[index] << ' ';
}

*/
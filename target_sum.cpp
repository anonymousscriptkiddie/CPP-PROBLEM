#include <iostream> // input output stream
#include <iomanip> // input output manipulation
using namespace std; // to avoid using repeated standards

int main(){ // main function
    int size; // integer size
    cout << "Size:\t"; //  c out size command user
    cin >> size; // fetch size
   int array[100]; // integer array and size
    int input; // integer input
    cout << "Input:\t"; // cout input command user
   for (int m = 0; m < size; m++){ // for loop
    cin >> array[m]; // fetch array[m] <- normally var of index
   }
    int target_sum; // integer target_sum
    cout << "Target sum:\t"; // c out input command user
    cin >> target_sum; // fetch

    bool founded = false; // false first
    for (int m = 0; m < size; m++) { // copy first for loop head 
        for (int s = m + 1; s  < size; s++){ // nested for loo[p]
            if (array[s] + array[m] == target_sum) {  // array with 2 unknown variable inputted by user
                cout << "Pair found:\t" << array[m] // c out the pair found and fetch value of array and the var
                << " "<<"+" <<" " <<array[s] << "=" <<" "<< target_sum
                << "\n";
               founded = true; // hence, founded true
                break; // stop
            }
        }
        if (founded ==true) { // kung totoo, hinto
            break;
        }
    }
    if (founded == false) {
        cout << "No pair found." << endl; // kung founded ay mali -> i c out No pair found.
    }
    
   
    return 0; // return 0
}
/*
Plan:
int size; 
cout size:;
cin size;
int input;
cout input;
for loop : for (int m = 0; m < size; m++){ // for loop
    cin >> array[m]; // fetch array[m] <- normally var of index
   }
    int target sum;
    cout target_sum;
    cin target_sum;

    false first
    nested for loops with nested ifs, if true then break, if false then
    print something to let the user know
    return 0;

*/
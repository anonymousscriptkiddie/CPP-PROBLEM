#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int size;

    cout << "Size: ";
    cin >> size;

    int numbers[size];
    int sum = 0;
    int min;
    int max;

    cout << "Input: ";
    for(int index = 0 ; index < size ; index++){
        cin >> numbers[index];
        sum += numbers[index];

        if(index == 0) {
            min = numbers[index];
            max = numbers[index];
        }
        else {
            if(numbers[index] > max) max = numbers[index];
            if(numbers[index] < min) min = numbers[index];
        }
    }
    double average = sum / double(size);

    cout << "Sum: " << sum << endl;
    cout << "Average: " << fixed << setprecision(2) << average << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    
    return 0;

}
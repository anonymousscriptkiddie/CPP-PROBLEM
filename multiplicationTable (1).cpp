#include <iostream>
using namespace std;

void multiplicationTable(int num){

    for(int times = 1; times <= 10; times++){

        cout << num << " * " << times << "\t: ";
        cout << num * times << endl;

    }

}

int main(){

    int num;

    cout << "Enter number: ";
    cin >> num;

    multiplicationTable(num);

    return 0;
}
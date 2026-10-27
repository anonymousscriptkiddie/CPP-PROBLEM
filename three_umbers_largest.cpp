#include <iostream>
using namespace std;

int main() {
    int one;
    int two;
    int three;
    cout << "Enter integer 1: ";
    cin >> one;
    cout << "Enter integer 2: ";
    cin >> two;
    cout << "Enter integer 3: ";
    cin >> three;
    if (one >=two && one >= three) cout << "Largest: " << one << endl;
    else if (two >= one && two >= three) cout << "Largest: "<< two << endl;
    else cout << "Largest: " << three << endl;
    return 0;
}
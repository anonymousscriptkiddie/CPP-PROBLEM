//Input n and calculate n! For example, 5! = 120.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input positive number: ";
    cin >> n;

    if (n<0) {
        cout << "Factorial is not defined for negative numbers. " << endl;
        return 0;  
    }
    long long factorial = 1;
    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    cout << n << "! =" << factorial << endl;
    return 0;
}
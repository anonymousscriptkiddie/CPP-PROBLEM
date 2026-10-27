#include <iostream>
using namespace std;

void evenOrOdd(int num){

    cout << num << " is ";

    if(num % 2 == 1) cout << "odd.";
    else cout << "even.";

    cout << endl;

}

int main(){

    evenOrOdd(3);

    return 0;
    
}
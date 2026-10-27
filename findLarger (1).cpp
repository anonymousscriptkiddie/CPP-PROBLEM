#include <iostream>
using namespace std;

void larger(int one, int two){

    if(one >= two)
        cout << "The first number, " << one << " is larger.";
    else
        cout << "The second number, " << two << " is larger.";

    cout << endl;

}

int main(){

    larger(7, 3);

    return 0;

}
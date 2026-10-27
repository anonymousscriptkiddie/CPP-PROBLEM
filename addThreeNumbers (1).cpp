#include <iostream>
using namespace std;

void add(int one, int two, int three){

    cout << "Sum of " << one << ", " << two << ", and "
        << three << " is: " << one + two + three << endl;

}

int main(){

    add(1, 2, 3);

    return 0;

}
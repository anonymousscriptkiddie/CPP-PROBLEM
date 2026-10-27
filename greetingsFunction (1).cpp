#include <iostream>
using namespace std;

void greetings(string name){

    cout << "Hello, " << name << '!' << endl;

}

int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    greetings(name);

    return 0;
    
}
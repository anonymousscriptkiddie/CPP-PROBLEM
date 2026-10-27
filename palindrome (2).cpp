#include <iostream>
using namespace std;

void palindrome(string input){

    string output = "";

    int len = input.length();

    //for(int index = 0 ; index < len ; index++){
    //    input[index] = (char)tolower(input[index]);
    //}

    for(int index = len - 1 ; index >= 0 ; index--){
        //output = output + (char)tolower(input[index]);
        output = output + input[index];
    }

    if(input == output){
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not a Palindrome" << endl;
    }

}

int main(){

    string input;

    cout << "Enter a word: ";
    cin >> input;

    palindrome(input);

    return 0;

}
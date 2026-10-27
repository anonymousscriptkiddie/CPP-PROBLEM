#include <iostream>
using namespace std;

void countDown(int num){

    while(num > 0){

        cout << num << '!' << endl;
        num--;
        
    }

    cout << "Blast off!" << endl;

}

int main(){
    countDown(10);

    return 0;
}
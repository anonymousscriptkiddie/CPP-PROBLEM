#include <iostream>
using namespace std;

void interest(float principal, float rate, float time){

    float simple_interest = (principal * rate * time) / 100;
    float total = simple_interest + principal;

    cout << "Principal Amount: " << principal << endl;
    cout << "Rate: " << rate << '%' << endl;
    cout << "Time (in years): " << time << endl << endl;

    cout << "Simple Interest: " << simple_interest << endl;
    cout << "Total Amount: " << total << endl;

}

int main(){

    interest(250.00, 3, 10);

    return 0;
}
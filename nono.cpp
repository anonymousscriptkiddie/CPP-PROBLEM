#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
bool its_palindrome(string text)
{
    for (int i = 0; i < text.length() / 2; i++)
    if(text[i] != text[text.length()-i-1])
    return false;
return true;
}
int main(){
    string palindrome;
    cout << "Check whether this is a palindrome:\t";
    cin >> palindrome;
    if(its_palindrome(palindrome)) cout <<"This is a palindrome: " << palindrome << " " <<endl;
    else{
        cout << "This is not a Palindrome";
    }

    int total_seconds_exe;
    cout << "enter seconds time:\t";
    cin >> total_seconds_exe;
    int hours = total_seconds_exe/3600;
    int minutes = (total_seconds_exe/3600)/60;
    int seconds = total_seconds_exe % 60;
    cout << hours << "hours, "
    << minutes << "minutes, "
    << seconds << "seconds" << "\n";
    int total_hours_exe, total_minutes_exe;
    cout << "enter hours time:\t";
    cin >> total_hours_exe;
    int seconds_1 = (total_hours_exe * 60 );
    int minutes_1 = (total_hours_exe * 3600);
    cout << total_hours_exe;
    cout << minutes_1 << "minutes, "
    << seconds_1 << "seconds";
    return 0;
}
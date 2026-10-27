#include <iostream>
using namespace std;
class sad_duck{
    public:
    int animal;
    string species_name;
};
class puppyLove{
    public:
    void myCupid(){
        cout << "My dear baby cats!";
    }
};
class which_car{
    public:
    string brand;
    string model;
    int year;
    which_car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }
};
int main(){
    puppyLove calling;
    calling.myCupid();
    sad_duck donkey;
    cout << "How many animals?: ";
    cin >> donkey.animal;
    cout << "You want this animal \n";
    cout << donkey.animal;
    
    string nom_nom;
    cout << "What the name of your animal? ";
    cin >> nom_nom;

    which_car carObj1("BMW", "X5", 1999);
    which_car carObj2("Lamborgini", "Mustang", 1969);
    cout << carObj1.brand << " " << carObj1.model<< " " << carObj.year << "\n";
    cout << carObj2.brand << " " << carObj2.model<< " " << carObj2.year << "\n";

    return 0;
}
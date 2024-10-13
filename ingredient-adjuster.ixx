//ingrediet adjust
//should allow for a customer/client to input number of cookies desiered and recieve correct recipie measurement

//inorder to do this we will need to compute a recipe for a set amount of cookies and a equation to allow the recipe to change based on amount of cookies

#include <iostream>
using namespace std;

int main() {
    double sugar = 1.5;
    double butter = 1.0;
    double flour = 2.75;
    int basicrecipie = 48;//this is a average recipie 

    int amountofcookies;
    cout << "how many cookies would you like? ";
    cin >> amountofcookies;
    //equations to find new recipie
    double desiredequation = (double)amountofcookies / basicrecipie;

    double newSugar = sugar * desiredequation; 
    double newButter = butter * desiredequation;
    double newFlour = flour * desiredequation;


    cout << "You need-" << endl;
    cout << newSugar << " cups of sugar" << endl;
    cout << newButter << " cups of butter" << endl;
    cout << newFlour << " cups of flour" << endl;

    return 0;
}

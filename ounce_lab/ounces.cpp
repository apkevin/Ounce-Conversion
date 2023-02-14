#include <iostream>
using namespace std;

int main(){
    double ounce;
    double pounds;

    cout << "Welcome to the Ounced Conversion Program\n\n";
    cout << "How many ounces do you have? \n\n";
    cin >> ounce;
    cout << "Thank You!  Calculating...  Done. \n\n";

    pounds = ounce / 16.00;
    
    cout << ounce << "oz. is equivalent to " << floor(pounds) << " lbs and " << 
    pounds % 16.00 << " ounces. (" << pounds << " lbs). \n\n";
    cout << "Thank You for using OCP!\n\n" << "Endeavor to have a Magnanimous day! \n";



}
/*
Make a program that, when entering the price of a product, 
displays at the end the price of the product when VAT is applied.
*/

#include <iostream>

using namespace std;

//Main program

int main(){

    double VAT = 21, prodprice, finalVATprice, sumVAT,
    VATnoprice = 1,
    valueVAT = VAT / 100;

    while(true){

        cout << "Enter the price of your product (Enter 0 to exit): " << endl;
        cin >> prodprice;

        if (cin.fail()){   //Validates that the entry is a number
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid entry, please enter a number: " << endl;
            continue;
        }

        if(prodprice == 0){ //Exit condition
            break;
        }

        //VAT Operation
        sumVAT = VATnoprice + valueVAT;
        finalVATprice = prodprice * sumVAT;
            
        //Final result
        cout << "Your final price with VAT applied is: " << endl;
        cout << finalVATprice << endl;

    }
    return 0;
}
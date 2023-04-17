#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double chilliDog, cornDog, chips, softDrinks, water, priceChD, priceCoD, priceCh, priceSoD, priceWa, taxeOfTotal;
    chilliDog = 8;
    cornDog = 6;
    chips = 2;
    softDrinks = 5;
    water = 4;
    
    int amountChD, amountCoD, amountCh, amountSoD, amountWa;
    
    cout << "Amount of chiliDogs: " << endl;
    cin >> amountChD;
    cout << "Amount of CornDogs: " << endl;
    cin >> amountCoD;
    cout << "Amount of Chips: " << endl;
    cin >> amountCh;
    cout << "Amount of Soft Drinks: " << endl;
    cin >> amountSoD;
    cout << "Amount of Water: " << endl;
    cin >> amountWa;
    
    
    priceChD = amountChD * chilliDog;
    priceCoD = amountCoD * cornDog;
    priceCh = amountCh * chips;
    priceSoD = amountSoD * softDrinks;
    priceWa = amountWa * water;
    taxeOfTotal = ((priceChD + priceCoD + priceSoD + priceCh ) * 0.0825);
    
    cout << fixed << showpoint << setprecision(2) << "Taxable:" << setw(6) << "$" << setw(8) << (priceChD + priceCoD + priceSoD + priceCh) << endl;
    cout << "Tax amount:" <<  setw(3) << "$" << setw(8) << taxeOfTotal << endl;
    cout << "Non-taxable:" << setw(2) << "$" << setw(8) << priceWa << endl;
    cout << "Total:" << setw(8) << "$" << setw(8) << ((priceChD + priceCoD + priceSoD + priceCh) + taxeOfTotal + priceWa) << endl;
    
    
    return 0;
}

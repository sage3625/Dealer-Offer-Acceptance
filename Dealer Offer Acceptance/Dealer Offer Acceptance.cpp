// Create a program that has the user input the list cost, evaluates the dealer cost and if the dealer will accept a given offer.

#include <iostream>
using namespace std;

int main()
{
    // Designate variables
    float list_price, dealer_cost, acceptable_offer;
    // Have user input the list price to evaluate the dealer cost and lowest acceptable offer
    cout << "Input the listed price: $";
    cin >> list_price;
    // Evaluate the dealer cost and acceptable offers and designate to the given variables
    dealer_cost = list_price * 0.85;
    acceptable_offer = dealer_cost + 500;
    // Provide the given results
    cout << "For a vehicle that has a listed price of: $" << list_price << endl;
    cout << "The dealer cost is: $" << dealer_cost << endl;
    cout << "The lowest acceptable offer is: $" << acceptable_offer << endl;
   
    return(0);

}


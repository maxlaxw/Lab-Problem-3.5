//
//  main.cpp
//  Lab Problem 3.5
//
//  Created by Max Williams on 9/7/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    double totalBookPrice;
    int booksPurchased;
    double tax = 1.075;
    double shipping = 2.5;
    double orderPrice;
    
    
    // prompt user for cost of all books and how many books purchased
    cout<<"Enter total cost of all books: $";
    cin>>totalBookPrice;
    cout<<"Enter total number of books purchased: ";
    cin>>booksPurchased;
    
    // calculate price of order
    orderPrice = totalBookPrice * tax;
    orderPrice = orderPrice + booksPurchased * shipping;
    
    // output price
    cout<<"Price of order is $"<<orderPrice<<endl;
    
    
    
}

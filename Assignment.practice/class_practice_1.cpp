#include <iostream>
using namespace std;

// Define a struct to represent a product
struct Product {
    std::string name;
    double price;
    int quantity;
};

int main() {
    double x,y,x1,y1;
    // Create  Product struct by giving calue
    Product product1;
    product1.name = "Product 1";
    cout<<"enter the price product 1";
    product1.price = x ;
    cin>>x;
    cout<<"enter the quantity 1";
    product1.quantity = y;
    cin>>y;

    Product product2;
    product2.name = "Product 2";
    cout<<"enter the price product 2";
    product2.price = x1;
    cin>>x1;
    cout<<"enter the quantity 2";
    product2.quantity = y1;
    cin>>y1;

    // Calculate the total cost for each product
    double totalCost1 = product1.price * product1.quantity;
    double totalCost2 = product2.price * product2.quantity;

    // Display product information and total cost
    cout << "Product 1:" << endl;
    cout << "Name: " << product1.name << endl;
    cout << "Price: " << product1.price << endl;
    cout << "Quantity: " << product1.quantity << endl;
    cout << "Total Cost: " << totalCost1 << endl;

    cout << "Product 2:" << endl;
    cout << "Name: " << product2.name << endl;
    cout << "Price: " << product2.price << endl;
    cout << "Quantity: " << product2.quantity << endl;
    cout << "Total Cost: " << totalCost2 << endl;

    return 0;
}

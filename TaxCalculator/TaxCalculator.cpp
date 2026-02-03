#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const double sales_tax_rate = 0.075;

    cout << "Enter the price of the item: ";

    double price;
    cin >> price;
    double sales_tax = price * sales_tax_rate;
    double total_cost = price + sales_tax;

    cout << fixed << setprecision(2) << "Original Price: $" << price << endl;
    cout << "Sales Tax: $" << sales_tax << endl;
    cout << "Total Cost: $" << total_cost << endl;


    return 0;
}
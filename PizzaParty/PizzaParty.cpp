#include <iostream>
using namespace std;

int main() {

    int attendees;
    cout << "How many people are attending the party? ";
    cin >> attendees;

    int slices_per_pizza;
    cout << "How many slices are in a pizza? ";
    cin >> slices_per_pizza;

    int slices_per_attendee;
    cout << "How many slices will each person eat? ";
    cin >> slices_per_attendee;

    int total_slices = slices_per_attendee * attendees;
    int pizza = total_slices / slices_per_pizza + 1;
    int leftover_slices = pizza * slices_per_pizza - total_slices;

    cout << endl << "You will need to order " <<  pizza <<" pizzas." << endl;
    cout << "There will be " << leftover_slices <<" leftover slices." << endl << endl;

    //Bonus

    int pizza_eaten = total_slices / slices_per_pizza;
    //int additional_slices = total_slices - pizza_eaten * slices_per_pizza;
    int additional_slices = slices_per_pizza - leftover_slices;

    cout << "Full pizzas eaten: " << pizza_eaten << endl;
    cout << "Additional slices needed: " << additional_slices << endl;

    return 0;
}
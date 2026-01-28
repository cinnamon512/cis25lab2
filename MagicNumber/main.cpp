#include <iostream>
using namespace std;

int main() {
    int favoriteNumber;
    int magicNumber;

    cout << "Please enter your favorite number: ";
    cin >> favoriteNumber;

    magicNumber = ((favoriteNumber * 2 + 10) / 2) - favoriteNumber;

    cout << "Your magic number is... 5!" << endl;

    return 0;
}
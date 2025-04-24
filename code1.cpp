#include <iostream>
using namespace std;

class Booking {
private:
    string roomType;
    int numNights;

public:
    // Constructor
    Booking(string rType, int nights) {
        roomType = rType;
        numNights = nights;
    }

    // Function to display booking details
    void displayBooking() {
        cout << "Room Type: " << roomType << endl;
        cout << "Number of Nights: " << numNights << endl;
    }
};

int main() {
    // Create a booking object
    Booking booking1("Deluxe", 3);
    booking1.displayBooking();
    
    return 0;
}


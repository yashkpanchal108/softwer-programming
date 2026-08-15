//Simulate a BookMyShow ticket booking by creating a Ticket class that prints 'Saving your ticket...' in its destructor. Create and delete a Ticket object to demonstrate the destructor lifecycle.<br><br><em><strong>Hint:</strong> Use the __del__ method (Python) or ~Ticket() (C++) to define the destructor.</em>

#include <iostream>
#include <string>

class Ticket {
public:
    std::string movieName;
    int seatNumber;

    Ticket(std::string movie, int seat) : movieName(movie), seatNumber(seat) {
        std::cout << "Ticket booked for '" << movieName << "' (Seat " << seatNumber << ")." << std::endl;
    }

    ~Ticket() {
        std::cout << "Saving your ticket..." << std::endl;
    }
};

int main() {
    std::cout << "--- Creating Ticket Object Dynamically ---" << std::endl;
  
    Ticket* ticket1 = new Ticket("Avengers: Endgame", 12);

    std::cout << "\n--- Deleting Ticket Object ---" << std::endl;
   
    delete ticket1;

    return 0;
}
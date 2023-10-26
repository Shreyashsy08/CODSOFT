#include <iostream>
#include <vector>

// Constants
const int TOTAL_SEATS = 50;
const double TICKET_PRICE = 10.0;

// Movie structure
struct Movie {
    std::string title;
    std::string time;
};

// Seat structure
struct Seat {
    int seatNumber;
    bool isBooked;
};

// Function to display available seats
void displayAvailableSeats(const std::vector<Seat>& seats) {
    std::cout << "Available Seats: ";
    for (const Seat& seat : seats) {
        if (!seat.isBooked) {
            std::cout << seat.seatNumber << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    // Initialize the movie and seats
    Movie movie;
    movie.title = "Animal";
    movie.time = "2:00 PM";

    std::vector<Seat> seats(TOTAL_SEATS);
    for (int i = 0; i < TOTAL_SEATS; ++i) {
        seats[i].seatNumber = i + 1;
        seats[i].isBooked = false;
    }

    while (true) {
        // Display movie information
        std::cout << "Movie Title: " << movie.title << std::endl;
        std::cout << "Show Time: " << movie.time << std::endl;

        // Display available seats
        displayAvailableSeats(seats);

        // Prompt user for seat selection
        int selectedSeat;
        std::cout << "Enter the seat number you want to book (0 to quit): ";
        std::cin >> selectedSeat;

        if (selectedSeat == 0) {
            std::cout << "Exiting the booking system. Thank you!" << std::endl;
            break;
        }

        if (selectedSeat < 1 || selectedSeat > TOTAL_SEATS) {
            std::cout << "Invalid seat number. Please try again." << std::endl;
            continue;
        }

        if (seats[selectedSeat - 1].isBooked) {
            std::cout << "Seat " << selectedSeat << " is already booked. Please choose another seat." << std::endl;
        } else {
            seats[selectedSeat - 1].isBooked = true;
            std::cout << "You have successfully booked seat " << selectedSeat << "." << std::endl;
            std::cout << "Ticket Price: $" << TICKET_PRICE << std::endl;
        }
    }

}
//Create a class Movie with a parameterized constructor and then use a copy constructor to duplicate a Movie object. Print both the original and copied movie details to show they are identical.

#include <iostream>
#include <string>

class Movie {
public:
    std::string title;
    std::string genre;
    double rating;

    Movie(std::string t, std::string g, double r) {
        title = t;
        genre = g;
        rating = r;
    }

    Movie(const Movie& other) {
        title = other.title;
        genre = other.genre;
        rating = other.rating;
    }

    void displayInfo() const {
        std::cout << "Title  : " << title << "\n"
                  << "Genre  : " << genre << "\n"
                  << "Rating : " << rating << " / 10\n"
                  << "\n";
    }
};

int main() {
   
    Movie originalMovie("Inception", "Sci-Fi", 8.8);

    Movie copiedMovie = originalMovie;

    std::cout << "--- Original Movie Details ---\n";
    originalMovie.displayInfo();

    std::cout << "--- Copied Movie Details ---\n";
    copiedMovie.displayInfo();

    return 0;
}
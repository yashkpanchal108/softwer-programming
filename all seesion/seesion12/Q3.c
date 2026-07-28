//Q3 Define a nested structure called MovieShow for a BookMyShow-style app: Movie (string), Screen (integer), and a nested structure Time with hours and minutes (integers). Create and initialize a MovieShow variable for any movie and print its details in the format 'Movie: X, Screen: Y, Time: HH:MM'.


#include <stdio.h>

struct Time {
    int hours;
    int minutes;
};

struct MovieShow {
    char movie[100];
    int screen;
    struct Time time;   
};

int main() {
    struct MovieShow show = {
        "Avengers: Endgame",
        5,
        {18, 30}
    };

    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
           show.movie,
           show.screen,
           show.time.hours,
           show.time.minutes);

    return 0;
}

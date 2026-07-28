//Q6.3 Build a 'Guess the Song' game like Spotify — the program randomly picks a song name from a list and asks the user to guess it. Use a do-while loop so the user can keep guessing until they get it right.<br><br><em><strong>Constraint:</strong> Use at least 3 song names of your choice.</em>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char songs[3][30] = {
        "Believer",
        "Shape of You",
        "Perfect"
    };

    char guess[30];
    int randomIndex;

    srand(time(0));
    randomIndex = rand() % 3;

    printf(" Guess the Song Game \n");

    do {
        printf("Guess the song: ");
        scanf(" %[^\n]", guess);

        if (strcmp(guess, songs[randomIndex]) == 0) {
            printf(" Correct! You guessed the song.\n");
        } else {
            printf(" Wrong guess! Try again.\n");
        }

    } while (strcmp(guess, songs[randomIndex]) != 0);

    return 0;
}
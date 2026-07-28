//Q4 Given a 2D array called cricketScores where each row represents an IPL match and columns represent runs scored by each team, write code to print the highest score from each match.


#include <stdio.h>

int main() {
   
    int cricketScores[3][2] = {
        {180, 175},  // Match 1
        {200, 210},  // Match 2
        {165, 160}   // Match 3
    };

    for (int i = 0; i < 3; i++) {
        int highest = cricketScores[i][0];

        for (int j = 1; j < 2; j++) {
            if (cricketScores[i][j] > highest) {
                highest = cricketScores[i][j];
            }
        }

        printf("Highest score in Match %d: %d\n", i + 1, highest);
    }

    return 0;
}

//Q4.5 Write a code snippet that demonstrates the difference between pre-increment (++count) and post-increment (count++) by logging the values before and after using both on a followerCount variable.


#include <stdio.h>

int main()
{
    int followerCount = 100;

    // Pre-increment
    printf("Initial Follower Count = %d\n", followerCount);
    printf("Pre-increment (++followerCount) = %d\n", ++followerCount);
    printf("Follower Count after Pre-increment = %d\n\n", followerCount);

    // Reset value
    followerCount = 100;

    // Post-increment
    printf("Initial Follower Count = %d\n", followerCount);
    printf("Post-increment (followerCount++) = %d\n", followerCount++);
    printf("Follower Count after Post-increment = %d\n", followerCount);

    return 0;
}
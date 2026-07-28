//Q3.Write two functions: increaseFollowersByValue and increaseFollowersByReference. Each should take a followers count and add 1000 to it, but one should use pass-by-value and the other pass-by-reference. Show how the original followers count changes (or doesn't) after calling each function.

#include <stdio.h>


void increaseFollowersByValue(int followers)
{
    followers = followers + 1000;
    printf("Followers inside increaseFollowersByValue: %d\n", followers);
}


void increaseFollowersByReference(int *followers)
{
    *followers = *followers + 1000;
    printf("Followers inside increaseFollowersByReference: %d\n", *followers);
}

int main()
{
    int followers = 5000;

    printf("Original followers: %d\n", followers);

   
    increaseFollowersByValue(followers);
    printf("Followers after increaseFollowersByValue: %d\n", followers);

    
    increaseFollowersByReference(&followers);
    printf("Followers after increaseFollowersByReference: %d\n", followers);

    return 0;
}
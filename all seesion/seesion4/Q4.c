//Q4.4 Given three variables: likes, comments, and shares (all numbers), write code to check if a post is 'trending' on Instagram (at least 1000 likes OR more than 200 comments AND at least 50 shares). Print the result.


#include <stdio.h>

int main()
{
    int likes, comments, shares;

    printf("Enter number of likes: ");
    scanf("%d", &likes);

    printf("Enter number of comments: ");
    scanf("%d", &comments);

    printf("Enter number of shares: ");
    scanf("%d", &shares);

    if (likes >= 1000 || (comments > 200 && shares >= 50))
    {
        printf("The post is Trending on Instagram.\n");
    }
    else
    {
        printf("The post is Not Trending on Instagram.\n");
    }

    return 0;
}
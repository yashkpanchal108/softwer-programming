// Q1.Declare an integer variable called likes and a pointer variable called ptrLikes; assign 
// likes a value, point ptrLikes to likes, and print both the value and the address stored in 
// ptrLikes.

#include <stdio.h>

int main() {
    // 1. Declare an integer variable called likes
    int likes;
    
    // 2. Declare a pointer variable called ptrLikes
    int *ptrLikes;
    
    // 3. Assign likes a value
    likes = 250;
    
    // 4. Point ptrLikes to likes (assign the address of likes to ptrLikes)
    ptrLikes = &likes;
    
    // 5. Print both the value and the address stored in ptrLikes
    // Use %d or *ptrLikes to get the value it points to
    printf("Value pointed to by ptrLikes: %d\n", *ptrLikes);
    
    // Use %p to print the actual memory address stored in the pointer
    printf("Address stored in ptrLikes: %p\n", (void*)ptrLikes);
    
    return 0;
}

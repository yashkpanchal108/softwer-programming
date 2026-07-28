//Q4 Build a structure called InstaProfile with fields: username (string), followers (integer), and a nested structure Bio with fields: description (string) and age (integer). Initialize an InstaProfile variable with your own details and display all fields.


#include <stdio.h>

struct Bio {
    char description[100];
    int age;
};

struct InstaProfile {
    char username[50];
    int followers;
    struct Bio bio;  
};

int main() {
    struct InstaProfile profile = {
        "chatgpt_user",
        1000000,
        {"AI assistant and technology enthusiast", 5}
    };

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Bio Description: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

    return 0;
}

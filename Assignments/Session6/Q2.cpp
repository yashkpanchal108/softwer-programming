//Build a class called InstaStory with a protected property storyViews. Create a subclass called SponsoredStory that can access and display the storyViews value.


#include <iostream>

// Base Class
class InstaStory {
protected:
  
    int storyViews;

public:
   
    InstaStory(int views) : storyViews(views) {}
};

// Subclass
class SponsoredStory : public InstaStory {
public:
    
    SponsoredStory(int views) : InstaStory(views) {}

    void displayViews() {
        std::cout << "Sponsored Story Views: " << storyViews << std::endl;
    }
};

int main() {
   
    SponsoredStory mySponsoredStory(1250);

    mySponsoredStory.displayViews();

    return 0;
}
//Build two classes, InstagramUploader and YouTubeUploader, each with a method uploadContent(). Both should extend a base class SocialMediaUploader and override uploadContent() to print a message showing how uploading works differently for Instagram and YouTube.

#include <iostream>
#include <string>

class SocialMediaUploader {
public:
  
    virtual void uploadContent() {
        std::cout << "Uploading generic content to social media..." << std::endl;
    }

    virtual ~SocialMediaUploader() {}
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        std::cout << "[Instagram] Uploading photo/reel: Optimizing aspect ratio (4:5 or 9:16) and applying filters..." << std::endl;
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        std::cout << "[YouTube] Uploading video: Processing 4K resolution, generating thumbnails, and checking copyright..." << std::endl;
    }
};

int main() {
   
    InstagramUploader insta;
    YouTubeUploader yt;

    std::cout << " Direct Calls " << std::endl;
    insta.uploadContent();
    yt.uploadContent();

    std::cout << "\n Polymorphic Calls (Base Class Pointers) " << std::endl;
    
    SocialMediaUploader* uploader1 = new InstagramUploader();
    SocialMediaUploader* uploader2 = new YouTubeUploader();

    uploader1->uploadContent();
    uploader2->uploadContent();

    delete uploader1;
    delete uploader2;

    return 0;
}
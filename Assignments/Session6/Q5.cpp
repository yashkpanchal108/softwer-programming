//Explain in your own words the difference between encapsulation and abstraction, using examples from any social media app you use daily (like Instagram or WhatsApp).

#include <iostream>
using namespace std;

class WhatsAppFeature {
public:
    
    virtual void sendVoiceNote() = 0; 
};

class VoiceNoteService : public WhatsAppFeature {
public:
    void sendVoiceNote() override {
       
        compressAudio();
        encryptData();
        transmitOverNetwork();
        cout << "Voice Note Sent Successfully!" << endl;
    }

private:
    void compressAudio() { /* Complex code */ }
    void encryptData() { /* Complex code */ }
    void transmitOverNetwork() { /* Complex code */ }
};

int main() {
    WhatsAppFeature* feature = new VoiceNoteService();
    
  
    feature->sendVoiceNote(); 
    
    return 0;
}
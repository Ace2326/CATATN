#include "CATATN.hpp"
#include <iostream>

int main() {
    CATATN catatn;

    // Example of personality setting and response
    catatn.setPersonality("humorous");
    std::string response = catatn.respond();
    catatn.speak(response);

    // Example of listening and responding
    std::string userInput = catatn.listen();
    if (!userInput.empty()) {
        catatn.speak("You said: " + userInput);
    }

    // Example of facial recognition (uncomment to test with webcam)
    // catatn.detectFaces();

    // Example of running an Nmap scan
    std::string targetIp = "192.168.1.1";
    std::string scanResult = catatn.runNmap(targetIp);
    std::cout << scanResult << std::endl;

    // Example of generating code
    std::string codePrompt = "Write a function to reverse a string";
    std::string generatedCode = catatn.generateCode(codePrompt);
    std::cout << generatedCode << std::endl;

    return 0;
}

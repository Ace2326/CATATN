#pragma once

#include <string>
#include <vector>
#include <opencv2/opencv.hpp>

class CATATN {
public:
    CATATN();
    ~CATATN();

    // Voice Interaction System
    void speak(const std::string& text);
    std::string listen();

    // Personality System
    void setPersonality(const std::string& mode);
    std::string respond();

    // Facial Recognition System
    std::string detectEmotions(const cv::Mat& frame);
    void detectFaces();

    // Cybersecurity Features
    std::string runNmap(const std::string& targetIp);
    std::string metasploit(const std::string& exploit);

    // Code Generation
    std::string generateCode(const std::string& prompt);

private:
    std::string personality;
    std::vector<std::string> voices;
    cv::CascadeClassifier faceCascade;
};

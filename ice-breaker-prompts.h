//header file with a switch statement that will randomly select a prompt for the user to answer

#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <random>

class IceBreakerPrompts {
    std::string prompt;
public:
    void GetPrompt() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 10);
        int random = dis(gen);

        switch (random) {
        case 1:
            prompt = "What is your favorite color?";
            break;
        case 2:
            prompt = "What is your favorite food?";
            break;
        case 3:
            prompt = "What is your favorite movie?";
            break;
        case 4:
            prompt = "What is your favorite song?";
            break;
        case 5:
            prompt = "What is your favorite book?";
            break;
        case 6:
            prompt = "What is your favorite TV show?";
            break;
        case 7:
            prompt = "What is your favorite video game?";
            break;
        case 8:
            prompt = "What is your favorite animal?";
            break;
        case 9:
            prompt = "What is your favorite season?";
            break;
        case 10:
            prompt = "What is your favorite holiday?";
            break;
        default:
            prompt = "What is your favorite color?";
            break;
        }
        std::cout << prompt << std::endl;
    }
};
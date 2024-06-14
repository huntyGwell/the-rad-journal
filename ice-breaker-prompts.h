//header file with a switch statement that will randomly select a prompt for the user to answer

#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <random>

    std::string prompt;
    std::string GetPrompt() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 32);
        int random = dis(gen);

        switch (random) {
        case 1:
            prompt = "What is something that made you curse in your head today?";
            break;
        case 2:
            prompt = "What is something you noticed that you want to work on today?";
            break;
        case 3:
            prompt = "What made you laugh today?";
            break;
        case 4:
            prompt = "What song or kind of song did today feel like?";
            break;
        case 5:
            prompt = "What are you grateful for today?";
            break;
        case 6:
            prompt = "Who did you spend the most time with today?";
            break;
        case 7:
            prompt = "What geve you hope today?";
            break;
        case 8:
            prompt = "In terms of animals how would you describe today?";
            break;
        case 9:
            prompt = "What are you proud of from today?";
            break;
        case 10:
            prompt = "When did you feel inspired today?";
            break;
        case 11:
            prompt = "What made you feel thoughtful today?";
            break;
        case 12:
            prompt = "What was the best thing you ate today?";
            break;
        case 13:
            prompt = "Where did you see kindness today?";
            break;
        case 14:
            prompt = "What is something you re excited about for tomorrow?";
            break;
        case 15:
            prompt = "What do you want to change?";
            break;
        case 16:
            prompt = "What gave you a moment of calm today?";
            break;
        case 17:
            prompt = "How did you better yourself today?";
            break;
        case 18:
            prompt = "What did you accomplish today that you didn't expect to?";
            break;
        case 19:
            prompt = "What moment today made you feel connected to others?";
            break;
        case 20:
            prompt = "Who made you feel valued today?";
            break;
        case 21:
            prompt = "What was the most beautiful thing you saw today?";
            break;
        case 22:
            prompt = "What is something you did today that future you will thank you for?";
            break;
        case 23:
            prompt = "What inspired you to be creative today?";
            break;
        case 24:
            prompt = "How did you make someone's day better today?";
            break;
        case 25:
            prompt = "What is a moment today that you wish could have lasted longer?";
            break;
        case 26:
            prompt = "What did you do today that pushed you out of your comfort zone?";
            break;
        case 27:
            prompt = "What challenge did you overcome today?";
            break;
        case 28:
            prompt = "What is a small victory you had today?";
            break;
        case 29:
            prompt = "What did you learn about yourself today?";
            break;
        case 30:
            prompt = "Who or what brightened your day today?";
            break;
        case 31:
            prompt = "What made you feel peaceful today?";
            break;
        case 32:
            prompt = "What inspired you to think differently today?";
            break;
        default:
            prompt = "What is your favorite color?";
            break;
        }
        return prompt;
    }
#pragma once

#include <iostream>
#include <ctime>
#include <fstream>

// Function to set text color using ANSI escape codes
void setColor(const std::string &color) {
    std::cout << color;
}

// ANSI color codes
const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";

    void Monday() {
        setColor(BLUE);
        std::cout << "It's Monday!" << std::endl;
        //print the textfile to the consol /Days/Monday.txt
        setColor(YELLOW);
        std::ifstream file("Days/Monday.txt");
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    }

    void Tuesday() {
        setColor(BLUE);
        std::cout << "It's Tuesday!" << std::endl;
        //print the textfile to the consol /Days/Tuesday.txt
        setColor(YELLOW);
        std::ifstream file("Days/Tuesday.txt");
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    }

    void Wednesday() {
        setColor(BLUE);
        std::cout << "It's Wednesday!" << std::endl;
        //print the textfile to the consol /Days/Wednesday.txt
        setColor(YELLOW);
        std::ifstream file("Days/Wednesday.txt");
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    }

    void Thursday() {
        setColor(BLUE);
        std::cout << "It's Thursday!" << std::endl;
        //print the textfile to the consol /Days/Thursday.txt
        setColor(YELLOW);
        std::ifstream file("Days/Thursday.txt");
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    }

    void Friday() {
        setColor(BLUE);
        std::cout << "It's Friday!" << std::endl;
        //print the textfile to the consol /Days/Friday.txt
        setColor(YELLOW);
        std::ifstream file("Days/Friday.txt");
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    }

    void Saturday() {
        setColor(BLUE);
        std::cout << "It's Saturday!" << std::endl;
        //print the textfile to the consol /Days/Saturday.txt
        setColor(YELLOW);
        std::ifstream file("Days/Saturday.txt");
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    }

    void Sunday() {
        setColor(BLUE);
        std::cout << "It's Sunday!" << std::endl;
        //print the textfile to the consol /Days/Sunday.txt
        setColor(YELLOW);
        std::ifstream file("Days/Sunday.txt");
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    }
    void Goodbye() {
        setColor(BLUE);
        std::cout << "Goodbye!" << std::endl;
        //print the textfile to the consol /Days/Goodbye.txt
        setColor(YELLOW);
        std::ifstream file("Days/Goodbye.txt");
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    }
    
std::string getDayOfWeek() {
    // Get the current time
    auto now = std::chrono::system_clock::now();

    // Convert to time_t which is a time representation suitable for conversion
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Convert to tm structure for local time
    std::tm* localTime = std::localtime(&currentTime);

    // Days of the week
    const char* daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Get the day of the week
    int dayOfWeek = localTime->tm_wday;

    // Return the corresponding day of the week
    return daysOfWeek[dayOfWeek];
}
// Print the day of the week
void printDayOfWeek() {
    std::string dayOfWeek = getDayOfWeek();
    if (dayOfWeek == "Monday") {
        Monday();
    }
    else if (dayOfWeek == "Tuesday") {
        Tuesday();
    }
    else if (dayOfWeek == "Wednesday") {
        Wednesday();
    }
    else if (dayOfWeek == "Thursday") {
        Thursday();
    }
    else if (dayOfWeek == "Friday") {
        Friday();
    }
    else if (dayOfWeek == "Saturday") {
        Saturday();
    }
    else if (dayOfWeek == "Sunday") {
        Sunday();
    }
    else {
        Goodbye();
    }
}


//a function that writes out the user input to a new file in the directory /Entries
// the file will be named with the date and time of the entry
// the file will be a .txt file

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

#include "ascii-art.h"

//a function that gets the current date and time YYYY-MM-DD
std::string getDateTime() {
    std::string date_now;
    time_t now = time(0);
    tm* ltm = localtime(&now);
    std::string year = std::to_string(1900 + ltm->tm_year);
    std::string month = std::to_string(1 + ltm->tm_mon);
    std::string day = std::to_string(ltm->tm_mday);

    date_now = year + "-" + month + "-" + day;
    return date_now;
}
std::string get_the_goodbye() {
    std::ostringstream caputerStream;
    std::streambuf* originalStream = std::cout.rdbuf();
    std::cout.rdbuf(caputerStream.rdbuf());
    Goodbye();
    std::cout.rdbuf(originalStream);
    return caputerStream.str();
    }

std::string get_the_ascii_day() {
    std::ostringstream caputerStream;
    std::streambuf* originalStream = std::cout.rdbuf();
    std::cout.rdbuf(caputerStream.rdbuf());
    printDayOfWeek();
    std::cout.rdbuf(originalStream);
    return caputerStream.str();
    }



void writeOut(std::string entry) {
    std::ofstream file;
    std::string fileName = "Entries/" + getDateTime() + ".txt";
    file.open(fileName);
    file << get_the_ascii_day();
    file << entry;
    file << get_the_goodbye();
    file.close();
}

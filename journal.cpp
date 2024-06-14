#include <string>
#include <iostream>
#include <fstream> 
#include <sstream>

#include "ascii-art.h"
#include "ice-breaker-prompts.h"
#include "write-out.h"

int main(){
    std::cout << "HELLO!" << std::endl;
    //change color from ascii-art.h
    setColor(GREEN);
    std::cout << "Welcome to your journal!" << std::endl;
    printDayOfWeek();
    setColor(RED);
    std::string myPrompt = GetPrompt();
    std::cout << myPrompt << std::endl;

    //get user input
    std::stringstream entry;
    std::stringstream finalEntry;
    while (true) {
        std::string line;
        std::getline(std::cin, line);
        if (line == "done") {
            break;
        }
        entry << line << std::endl;
    }
    finalEntry << myPrompt << std::endl << entry.str() << std::endl;
    writeOut(finalEntry.str());
    //goodbye message
    Goodbye();

    return 0;

}
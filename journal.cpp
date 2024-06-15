#include <string>
#include <iostream>
#include <fstream> 
#include <sstream>

#include "ascii-art.h"
#include "ice-breaker-prompts.h"
#include "write-out.h"

int main(){
    printSlowly("HELLO \n", std::chrono::milliseconds(100));
    //change color from ascii-art.h
    setColor(GREEN);
    printSlowly("Welcome to your journal!\n", std::chrono::milliseconds(100));
    std::cout << std::endl;
    Slow_printDayOfWeek();
    setColor(MAGENTA);
    std::string myPrompt = GetPrompt();
    printSlowly(myPrompt, std::chrono::milliseconds(100));
    std::cout << std::endl;
    //flush the buffer
    std::cout << std::flush;
    
    setColor(BLUE);

    //get user input
    std::stringstream entry;
    std::stringstream finalEntry;
    std::string line;
    while (line != "done") {
        std::getline(std::cin, line);
        if (line == "done") {
            break;
        }
        entry << line << std::endl;
    }
    finalEntry << myPrompt << std::endl << entry.str() << std::endl;
    writeOut(finalEntry.str());
    //goodbye message
    Slow_Goodbye();

    return 0;

}

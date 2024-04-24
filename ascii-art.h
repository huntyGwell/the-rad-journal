#include <iostream>
#include <ctime>

class Week {
public:
    void Monday() {
        std::cout << "It's Monday!" << std::endl;
    }

    void Tuesday() {
        std::cout << "It's Tuesday!" << std::endl;
    }

    void Wednesday() {
        std::cout << "It's Wednesday!" << std::endl;
    }

    void Thursday() {
        std::cout << "It's Thursday!" << std::endl;
    }

    void Friday() {
        std::cout << "It's Friday!" << std::endl;
    }

    void Saturday() {
        std::cout << "It's Saturday!" << std::endl;
    }

    void Sunday() {
        std::cout << "It's Sunday!" << std::endl;
    }

    void GetDateTime() {
        std::time_t now = std::time(0);
        std::tm* timeinfo = std::localtime(&now);
        std::cout << "Current date and time: " << std::asctime(timeinfo) << std::endl;
    }
};

int main() {
    Week week;
    week.Monday();
    week.GetDateTime();
    return 0;
}
#include <exception>
#include <iostream>
#include <ostream>
#include <string>

class TimeFmtError: public std::exception {
private:
    std::string msg;
public:
    TimeFmtError(std::string _msg)
        : msg("Invalid time format: " + _msg) 
    {
        int c;
        std::cout << "&c: " << &c << std::endl;
        std::cout << "Construct" << std::endl;
    }
    virtual const char* what() const noexcept {
        return msg.c_str();
    }
    ~TimeFmtError() {
        std::cout << "The exception is out of scope!" << std::endl;
    }
};

class Time {
private:
    int hour, minute, second;
public:
    Time(int _hour, int _minute, int _second)
        : hour(_hour), minute(_minute), second(_second) 
    {
        if(hour < 0 || hour >= 24) {
            throw TimeFmtError(
                "Expect <hour> in range [0, 24), found: " + 
                std::to_string(hour)
            );
        }
        if(minute < 0 || minute >= 60) {
            throw TimeFmtError(
                "Expect <minute> in range [0, 60), found: " + 
                std::to_string(minute)
            );
        }
        if(second < 0 || second >= 60) {
            throw TimeFmtError(
                "Expect <second> in range [0, 60), found: " + 
                std::to_string(second)
            );
        }
    }
};

void function() {
    int hour, minute, second;
    std::cin >> hour >> minute >> second;
    std::cout << "&hour: " << &hour << std::endl;
    Time t(hour, minute, second);
}

void function2() {
    int b;
    std::cout << "In function" << std::endl;
    std::cout << "&b: " << &b << std::endl;
    function();
}

int main(void) {
    int *h{new int};
    std::cout << "&h: " << h << std::endl;
    try {
        function2();
        // == DO SOMETHING ELSE ==
    } catch (const std::exception &e) {
        int a;
        std::cout << "&a: " << &a << std::endl;
        std::cout << "&e: " << &e << std::endl;
        std::cout << e.what() << std::endl;
    }
    delete h;
    std::cout << "Scope out of the catch!" << std::endl;
}
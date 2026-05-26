#pragma once
#include <iostream>
#include <string>

namespace HomeOS {

    enum Level { INFO, WARNING, ERROR };

    std::ostream& operator << (std::ostream& os, const Level& level);

    class Logger { 
    public:
        static void log(const Level& level, const std::string& sender, const std::string& message);
    };
}
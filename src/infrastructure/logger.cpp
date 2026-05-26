#include "Logger.h"

namespace HomeOS {
   std::ostream& operator << (std::ostream& os, const Level& level) {
      switch (level) {
         case Level::ERROR:   os << "ERROR";   break;
         case Level::WARNING: os << "WARNING"; break;
         case Level::INFO:    os << "INFO";    break;
      }
      return os;
   }

   void Logger::log(const Level& level, const std::string& sender, const std::string& message) {
      std::cout << "[" << level << "] [" << sender << "]: " << message << "\n";
   }

}
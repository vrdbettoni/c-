#include <cstring>
#include <iostream>
#include <iosfwd>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <thread>
#include <sstream>
#include <fstream>

class Logger
{
    public:
        Logger(std::string file);
        void log(std::string const& des, std::string const& message);

    private:
        void logToConsole(std::string log);
        void logToFile(std::string log);
        std::string makeLogEntry(std::string line);
        std::string _file;
};
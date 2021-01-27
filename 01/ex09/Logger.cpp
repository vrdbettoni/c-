#include "Logger.hpp"

Logger::Logger(std::string file) : _file(file){}

void Logger::logToConsole(std::string log){std::cout << makeLogEntry(log) << std::endl;}

void Logger::logToFile(std::string log)
{
    std::ofstream tofile (_file.c_str(), std::ofstream::app);
    tofile << makeLogEntry(log) << std::endl;
}

std::string Logger::makeLogEntry(std::string line)
{
time_t      rawtime;
    struct tm*  timeinfo;
    std::stringstream log;

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    log << '[';
    log << 1900 + timeinfo->tm_year;
    log << std::setw(2) << std::setfill('0') << timeinfo->tm_mon + 1;
    log << std::setw(2) << std::setfill('0') << timeinfo->tm_mday;
    log << '_';
    log << std::setw(2) << std::setfill('0') << timeinfo->tm_hour;
    log << std::setw(2) << std::setfill('0') << timeinfo->tm_min;
    log << std::setw(2) << std::setfill('0') << timeinfo->tm_sec;
    log << "] ";
    return(log.str() += line);
}

void Logger::log(std::string const& dest, std::string const& message)
{
    std::string choice[] = { "logToConsole", "logToFile" };
    typedef void (Logger::*logFuncPtr) (std::string message);
    logFuncPtr lfp[] = { &Logger::logToConsole, &Logger::logToFile };
    for (int i = 0; i < 2; ++i) {
        if (choice[i] == dest) {
            (this->*lfp[i]) (message);
            return ;
        }
    }
}
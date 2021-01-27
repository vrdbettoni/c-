#include "Logger.hpp"

int main()
{
    int     time = 500000;
    Logger logger("log");

    logger.log("logToFile", "Ceci");
    usleep(time);
    logger.log("logToFile", "est un");
    usleep(time);
    logger.log("logToFile", "magnifique");
    usleep(time);
    logger.log("logToFile", "test pour");
    usleep(time);
    logger.log("logToFile", "verifier");
    usleep(time);
    logger.log("logToFile", "les logs");
    logger.log("logToConsole", "Cela marche");
    usleep(time);
    logger.log("logToConsole", "aussi");
    usleep(time);
    logger.log("logToConsole", "dans la");
    usleep(time);
    logger.log("logToConsole", "console");
    usleep(time);
    logger.log("logToConsole", "bien");
    usleep(time);
    logger.log("logToConsole", "evidement");
    return(0);
}

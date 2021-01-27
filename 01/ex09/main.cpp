#include "Logger.hpp"

int main()
{
    Logger logger("log");

    logger.log("logToFile", "Ceci");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    logger.log("logToFile", "est un");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    logger.log("logToFile", "magnifique");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    logger.log("logToFile", "test pour");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    logger.log("logToFile", "verifier");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    logger.log("logToFile", "les logs");
    logger.log("logToConsole", "Cela marche");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    logger.log("logToConsole", "aussi");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    logger.log("logToConsole", "dans la");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    logger.log("logToConsole", "console");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    logger.log("logToConsole", "bien");
    std::this_thread::sleep_for (std::chrono::seconds(1));
    logger.log("logToConsole", "evidement");
}

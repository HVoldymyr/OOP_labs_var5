#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <vector>
#include <string>
#include <ctime>
#include "Cone.h"

using namespace std;

class Logger 
{
private:
    static Logger* instance;
    vector<string> log;
    Logger();

public:
    static Logger* getInstance();
    void addRecord(Cone cone);
    void saveLog();
};

#endif // LOGGER_HPP
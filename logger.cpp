#include "Logger.h"
#include <fstream>
#include <iomanip>
#include <chrono>

Logger* Logger::instance = 0;

Logger::Logger() {}

Logger* Logger::getInstance() 
{
    if (!instance) 
    {
        instance = new Logger();
    }
    return instance;
}

void Logger::addRecord(Cone cone) 
{
    string record = "objectName: " + cone.getObjectName() + "\n";
    record += "radius: " + to_string(cone.getRadius()) + "\n";
    record += "height: " + to_string(cone.getHeight()) + "\n";
    log.push_back(record);
}

void Logger::saveLog() 
{
    ofstream file("log.txt");

    file << "ClassName: Cone\n";
    file << "numberOfEntities: " << Cone::getCount() << "\n";

    for (size_t i = 0; i < log.size(); i++) 
    {
        file << log[i] << "\n";
    }

    file.close();
}
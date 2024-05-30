#include <iostream>
#include "Cone.h"
#include "Logger.h"

using namespace std;

int main() 
{
    Cone cone1("Cone1", 3.0, 5.0);
    Cone cone2("Cone2", 4.0, 6.0);

    Logger* logger = Logger::getInstance();
    logger->addRecord(cone1);
    logger->addRecord(cone2);

    logger->saveLog();

    cout << "Number of Cone objects: " << Cone::getCount() << endl;

    return 0;
}

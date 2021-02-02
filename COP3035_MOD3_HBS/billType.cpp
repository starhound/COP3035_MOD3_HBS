#include "billType.h"
#include <iostream>

int billType::getPatientId()
{
    return patientId;
}

map<string, int> billType::getPatientCharges()
{
    return patientCharges;
}

void billType::setPatientId(int id)
{
    patientId = id;
}

void billType::print() const {
    for (auto const& x : patientCharges)
    {
        std::cout << x.first  // string (key)
            << ':'
            << x.second // string's value 
            << std::endl;
    }

}

void billType::setPatientBill(map<string, int> bill)
{
    patientCharges = bill;
}

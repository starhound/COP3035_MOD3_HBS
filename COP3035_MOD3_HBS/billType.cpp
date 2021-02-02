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
    cout << "Bill Record:" << endl;
    cout << "Patient ID #" << patientId << endl;
    int total = 0;
    for (auto const& x : patientCharges)
    {
        cout << x.first << ':' << x.second << endl;
        total += x.second;
    }
    cout << "Bill Total: $" << total << endl;
}

void billType::setPatientBill(map<string, int> bill)
{
    patientCharges = bill;
}

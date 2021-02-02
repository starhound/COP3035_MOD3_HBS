#include "billType.h"

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

void print() {
    string output = "";
}

void billType::setPatientBill(map<string, int> bill)
{
    patientCharges = bill;
}

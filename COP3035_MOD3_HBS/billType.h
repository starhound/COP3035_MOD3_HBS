#pragma once
#include <map>
#include <string>

using namespace std;

class billType
{
public:
	int getPatientId();
	map<string, int> getPatientCharges();
	void setPatientId(int id);
	void setPatientBill(map<string, int> bill);

private:
	int patientId;
	map<string, int> patientCharges;
};


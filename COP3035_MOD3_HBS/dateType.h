#pragma once
#include <string>

using namespace std;

class dateType
{
public:
	dateType() {

	}

	dateType(string pDOB, string pAdmit, string pDischarge) {
		patientAdmitDate = pAdmit;
		patientDateOfBirth = pDOB;
		patientDischargeDate = pDischarge;
	}

	string getDateOfBirth();
	string getAdmitDate();
	string getDischargeDate();
	void setDateOfBirth(string pDOB);
	void setDischargeDate(string pDischarge);
	void setAdmitDate(string pAdmit);
	void print();

private:
	string patientDateOfBirth;
	string patientAdmitDate;
	string patientDischargeDate;
};


#include "dateType.h"

string dateType::getAdmitDate() {
	return patientAdmitDate;
}

string dateType::getDateOfBirth() {
	return patientDateOfBirth;
}

string dateType::getDischargeDate() {
	return patientDischargeDate;
}

void dateType::setAdmitDate(string pAdmit) {
	patientAdmitDate = pAdmit;
}

void dateType::setDateOfBirth(string pDOB) {
	patientDateOfBirth = pDOB;
}

void dateType::setDischargeDate(string pDischarge) {
	patientDateOfBirth = pDischarge;
}
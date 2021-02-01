#include "doctorType.h"

string doctorType::getSpecialy() {
	return specialty;
}

void doctorType::print() {
	cout << "First Name: " << getFirstName() << " Last Name: " << getLastName() << " Specialty: " << getSpecialy() << endl;
}

#include "doctorType.h"

string doctorType::getSpecialy() {
	return specialty;
}

void doctorType::print() const {
	cout << "First Name: " << getFirstName() << " Last Name: " << getLastName() << " Specialty: " << specialty << endl;
}

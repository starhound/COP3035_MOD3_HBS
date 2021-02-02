#include "doctorType.h"

string doctorType::getSpecialy() {
	return specialty;
}

void doctorType::print() const {
	cout << "Doctor Record: " << endl; 
	personType::print();
	cout << "Specialty: " << specialty << endl;
}

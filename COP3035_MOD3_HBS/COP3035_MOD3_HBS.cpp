#include "billType.h"
#include "dateType.h"
#include "doctorType.h"
#include "patientType.h"
#include "personType.h"

using namespace std;

int main() {
	//new doctor
	doctorType doc1("john", "smith", "general");
	doc1.print();
	//patient date
	cout << endl;
	dateType patientDate("01-01-1970", "01-01-2020", "01-05-2020");
	//patient
	patientType patient(1, 20, "bill", "fonz", patientDate, doc1);
	patient.print();
	cout << endl;
	//bill
	billType bill;
	map<string, int> charges = {
		{"Bed Cost", 100},
		{"Doctor Time", 75},
		{"Supplies", 5},
		{"Fee", 1},
	};
	//link a bill to a patient 
	bill.setPatientId(patient.getPatientId());
	//link charges
	bill.setPatientBill(charges);

	bill.print();
	return 0;
}
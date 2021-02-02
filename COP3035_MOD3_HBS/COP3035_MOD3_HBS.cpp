#include "billType.h"
#include "dateType.h"
#include "doctorType.h"
#include "patientType.h"
#include "personType.h"

using namespace std;

int main() {
	//new doctor
	doctorType doc1("john", "smith", "general");
	//patient date
	dateType patientDate("01-01-1970", "01-01-2020", "01-05-2020");
	//patient
	patientType patient(1, 20, "bill", "fonz", patientDate, doc1);

	patient.print();
	return 0;
}
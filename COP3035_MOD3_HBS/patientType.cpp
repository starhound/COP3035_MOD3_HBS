#include "patientType.h"

doctorType patientType::getPatientDoctor() {
    return patientDoctor;
}

dateType patientType::getPatientDates() {
    return patientDate;
}

int patientType::getPatientId() {
    return patientId;
}

int patientType::getPatientAge() {
    return patientAge;
}

void patientType::setPatientAge(int pAge) {
    patientAge = pAge;
}

void patientType::setPatientDates(dateType pDates) {
    patientDate = pDates;
}

void patientType::setPatientDoctor(doctorType pDoctor) {
    patientDoctor = pDoctor;
}

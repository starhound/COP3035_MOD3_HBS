#pragma once
#include "personType.h"
#include "doctorType.h"
#include "dateType.h"

class patientType :
    public personType
{
public:
    patientType() {

    }

    patientType(int id, int age, string first, string last, dateType date, doctorType doctor) {
        personType::setName(first, last);
        patientAge = age;
        patientId = id;
        patientDate = date;
        patientDoctor = doctor;
    }

    doctorType getPatientDoctor();
    dateType getPatientDates();
    int getPatientId();
    int getPatientAge();
    void setPatientAge(int pAge);
    void setPatientId(int pId);
    void setPatientDoctor(doctorType pDoc);
    void setPatientDates(dateType pDate);
    void print();

private:
    int patientId;
    int patientAge;
    dateType patientDate;
    doctorType patientDoctor;
};


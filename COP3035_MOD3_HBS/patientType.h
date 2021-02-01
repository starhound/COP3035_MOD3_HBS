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

    patientType(int id, int age, dateType date, doctorType doctor) {
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

private:
    int patientId;
    int patientAge;
    dateType patientDate;
    doctorType patientDoctor;
};


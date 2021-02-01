#include "personType.h"

class doctorType : public personType
{
public:
    doctorType() {}
    doctorType(string first, string last, string spec) {
        personType::setName(first, last);
        specialty = spec;
    }
    void print();
    string getSpecialy();

private:
    string specialty;

};


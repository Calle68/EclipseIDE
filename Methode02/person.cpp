/*
 * person.cpp
 *
 *  Created on: 18.02.2024-2000
 *  Author: Fehlhaber
 */
#include "person.h"

using std::ostream;


ostream& Person::drucke(ostream& os) {
return os << name_ << "("
<< alter_ << ") aus "<< ort_ << "\n";
};



/*
 * person.h
 *
  *  Created on: 18.02.2024-2000
 *  Author: Fehlhaber
 */
#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include <iostream> // ostream

struct Person {
std::string name_;
int alter_;
std::string ort_;
std::ostream& drucke(std::ostream& os);
};

#endif /* PERSON_H_ */

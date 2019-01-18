#include <iostream>
#include <string>
#include "Event.h"

int main()
{
	unsigned int dayTest = 1;
	unsigned int monthTest = 1;
	unsigned int yearTest = 1970;
	std::string description = "NULL";
	Event newEvent;
	unsigned int day = newEvent.getDay();
	unsigned int month = newEvent.getMonth();
	unsigned int year = newEvent.getYear();
	std::string eventDescription = newEvent.getEventDescription();
	std::cout << "this is the day: " + day;
	return 0;
} 
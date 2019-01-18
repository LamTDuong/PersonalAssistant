#include "Event.h"
#include <iostream>
#include <string>

// Constructor class saving day, month, year, and description
// Also contains a priority level number of 1 (highest), 2, or 3 (lowest)
// DEFAULT FORMAT: Month/Day/Year 
Event::Event(int month, int day, int year, int hour, int minute, std::string eventDescription, int priorityLevel)
{
	// Description character limit
	if (eventDescription.size() < 500)
	{
		Event::eventDescription = eventDescription;
	}
	else
	{
		throw "Exception: Event description cannot be greater than 500 characters!";
	}
	
	// Priority level must be between 1-3
	if ((priorityLevel >= 1) && (priorityLevel <= 3))
	{
		Event::priorityLevel = priorityLevel;
	}
	else 
	{
		throw "Exception: Priority can only be 1, 2, or 3!";
	}

	Event::timeOfEvent = date::

	Event::day = day;
	Event::month = month;
	Event::year = year;

	date::year_month_day dueDate = Event::makeYearMonthDay(month, day, year);
	Event::dueDate = dueDate;
}

// Default empty constructor for an empty Event
// with the lowest priority level of 3 and the
// date of Jan/1/1970
Event::Event()
{
	int month = 1;
	int day = 1;
	int year = 1970;

	Event::eventDescription = "NULL";
	Event::priorityLevel = 3;
	Event::month = month;
	Event::day = day;
	Event::year = year;

	date::year_month_day dueDate = Event::makeYearMonthDay(month, day, year);
	Event::dueDate = dueDate;
}

// Return the description of the event
std::string Event::getEventDescription()
{
	return Event::eventDescription;
}

// Return the due date as a string
std::string Event::getDueDateString()
{
	std::string dueDateString = "";
	dueDateString += Event::month;
	dueDateString += "/";
	dueDateString += Event::day;
	dueDateString += "/";
	dueDateString += Event::year;
	return dueDateString;
}

// Return the day of the due date
date::day Event::getDay()
{
	return Event::dueDate.day();
}

// Return the month of the due date
date::month Event::getMonth()
{
	return Event::dueDate.month();
}

// Return the year of the due date
date::year Event::getYear()
{
	return Event::dueDate.year();
}

// Return the priority level
int Event::getPriorityLevel()
{
	return Event::priorityLevel;
}

// Make a year_month_day object of the date library
date::year_month_day Event::makeYearMonthDay(int inputMonth, int inputDay, int inputYear)
{
	return date::year{ inputYear } / inputMonth / inputDay;
}

Event::~Event()
{
}
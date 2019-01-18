#pragma once
#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <iostream>
#include <ctime>
#include <chrono>
#include "date.h"

class Event
{
private:
	std::string eventDescription;
	std::string dueDateInString;
	date::year_month_day dueDate;
	date::time_of_day<std::chrono::minutes> timeOfEvent;
	int day, month, year; 
	int priorityLevel;

public:
	Event(int month, int day,  int year, int hour, int minute, std::string eventDescription, int priorityLevel);
	Event();

	// ACCESSOR METHODS
	std::string getEventDescription();
	std::string getDueDateString();
	date::day getDay();
	date::month getMonth();
	date::year getYear();
	int getPriorityLevel();

	date::year_month_day makeYearMonthDay(int inputMonth, int inputDay, int inputYear);

	virtual ~Event();
};

#endif
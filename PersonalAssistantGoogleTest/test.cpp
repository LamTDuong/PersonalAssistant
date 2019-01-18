#include "pch.h"
#include <string>
#include "../PersonalAssistant/Event.h"
#include "../PersonalAssistant/Event.cpp"

// Test case where the constructor is made to look like an empty constructor
TEST(EventConstructorWithDefaultParameters, EventTest) {
	Event newEvent(int(1), int(1), int(1970), "NULL", 3);
	EXPECT_EQ(newEvent.getDay(), date::day(1));
	EXPECT_EQ(newEvent.getMonth(), date::month(1));
	EXPECT_EQ(newEvent.getYear(), date::year(1970));
	std::string description("NULL");
	EXPECT_EQ(newEvent.getEventDescription(), description);
	EXPECT_EQ(newEvent.getPriorityLevel(), 3);
}

// Just an overloaded constructor with no parameter arguments
TEST(EventEmptyConstructor, EventTest)
{
	Event newEvent;
	EXPECT_EQ(newEvent.getDay(), date::day(1));
	EXPECT_EQ(newEvent.getMonth(), date::month(1));
	EXPECT_EQ(newEvent.getYear(), date::year(1970));
	std::string description("NULL");
	EXPECT_EQ(newEvent.getEventDescription(), description);
	EXPECT_EQ(newEvent.getPriorityLevel(), 3);
}

// Test case where it is just a regular date and time

// Test case for dueDate to string

// Test case where it is the current date and time

// Test case where the description is very over the character limit

// Test case where the priority level is not valid

// Test case where it is set before 1970

// Test case where it is overdue the due date

// Test case where it is during an event happening

// Test case where it is before the due date
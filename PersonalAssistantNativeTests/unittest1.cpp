#include "stdafx.h"
#include <string>
#include "../PersonalAssistant/Event.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PersonalAssistantNativeTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(EventConstructorWithDefaultParameters)
		{
			// TODO: Your test code here
			Event newEvent(unsigned int(1), unsigned int(1), unsigned int(1970), "NULL", 3);
			Assert::AreEqual(newEvent.getDay(), date::day(1));
			Assert::AreEqual(newEvent.getMonth(), date::month(1));
			Assert::AreEqual(newEvent.getYear(), date::year(1970));
			std::string description("NULL");
			Assert::AreEqual(newEvent.getEventDescription(), description);
			Assert::AreEqual(newEvent.getPriorityLevel(), 3);
		}

		TEST_METHOD(EventEmptyConstructor)
		{
			Event newEvent;
			Assert::AreEqual(newEvent.getDay(), date::day(1));
			Assert::AreEqual(newEvent.getMonth(), date::month(1));
			Assert::AreEqual(newEvent.getYear(), date::year(1970));
			std::string description("NULL");
			Assert::AreEqual(newEvent.getEventDescription(), description);
			Assert::AreEqual(newEvent.getPriorityLevel(), 3);
		}

	};
}
// Definicja (implementacja)
#include "DateType.h"
RelationType DateType::ComparedTo(DateType otherDate)
	{
		if(Year < otherDate.Year)
			return Precedes;
		if(Year > otherDate.Year)
			return Follows;	
		if(Month < otherDate.Month)
			return Precedes;
		if(Month > otherDate.Month)
			return Follows;	
		if(Day < otherDate.Day)
			return Precedes;
		if(Day > otherDate.Day)
			return Follows;	
		return Same;	
	}
DateType::DateType(){
	Day = 1;
	Month = 1;
	Year = 1;
}

DateType::DateType(int newMonth, int newDay, int newYear) {
	Day = newDay;
	Month = newMonth;
	Year = newYear;
}

int DateType::GetYear() const {return Year;}

int DateType::GetMonth() const {return Month;}

int DateType::GetDay() const {return Day;}

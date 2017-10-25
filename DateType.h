// deklaracja 
enum RelationType{Precedes, Same, Follows};
class DateType {

public: 
	RelationType ComparedTo(DateType dateA);
	DateType();
	DateType(int newMonth, int newDay, int newYear);
	int GetYear() const;
	int GetMonth() const;
	int GetDay() const;
private:
	int Year;
	int Month;
	int Day;
};

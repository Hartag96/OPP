#include <stdio.h>
#include <stdlib.h>
#include "DateType.h"
#include<iostream>
using namespace std;

int main()
{
	DateType today(3, 4, 2004);
	DateType tomorrow, someDay;
	

	DateType Tomorrow(1, 18, 2002);
	DateType AnotherDay(1, 18,2002);
	if (Tomorrow.ComparedTo(AnotherDay) == Same) {
		cout << "co to" << endl;	
	}
	cout << tomorrow.GetDay();
	cout << today.GetMonth();
	return 0;
}

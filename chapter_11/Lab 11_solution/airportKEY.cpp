#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct airport     // defines the structure airport
{                  
	int landed;    // planes landed in a month
	int departed;  // planes departured in a month
	int mostLanded; // greatest number of planes
	               // landed in one day in the month
	int leastLanded; // least number of planes
	                 // landed in one day in the month
};


const int MAXMONTH = 12;

int main()
{
	airport planes[MAXMONTH];
	int pos;                 // loop counter
	int totalLandings = 0;  // Total landings in the year
	int totalDeparted = 0;  // Total departures in a year
	int mostLandings =0;    // Day of most landings
	int leastLandings = 99999; // Day of least landings
	string monthMost;       // Month that had most single day landings
	string monthLeast;      // Month that had least single day landings
	string month;

	for (pos =0; pos < MAXMONTH; pos++)
	{
		switch (pos)
		{
		case 0:  month = "January";
				 break;
		case 1:	 month = "Febuary"; break;
		case 2:  month = "March";   break;
		case 3:	 month = "April";   break;
		case 4:	 month = "May";     break;
		case 5:	 month = "June";    break;
		case 6:	 month = "July";    break;
		case 7:	 month = "August";  break;
		case 8:	 month = "September"; break;
		case 9:	 month = "October"; break;
		case 10: month = "November"; break;
		case 11: month = "December"; break;
		}

	   cout << "Please enter the number of planes that landed in " << month << ": ";
	   cin >> planes[pos].landed;
	   cout << "Please enter the number of planes that departed in "<< month << ":";
 	   cin >> planes[pos].departed;
	   cout << "Please enter the greatest number of planes that landed on a single day in "
	        << month << ": ";
	   cin >> planes[pos].mostLanded;
	   cout << "Please enter the least number of planes that landed on a single day in "
	        << month << ": ";
	   cin >> planes[pos].leastLanded;
	   totalLandings = totalLandings + planes[pos].landed;
	   totalDeparted = totalDeparted + planes[pos].departed;
		if (mostLandings < planes[pos].mostLanded)
		{
			mostLandings = planes[pos].mostLanded;
			monthMost = month;
		}

		if (leastLandings > planes[pos].leastLanded)
		{
			leastLandings = planes[pos].leastLanded;
			monthLeast = month;
		}


	}	



	cout << setprecision(2) << fixed << showpoint;

	cout << "The average monthly landings for the year is " << (float)totalLandings/MAXMONTH << endl;
	cout << "The average monthly departures for the year is " 
		 << (float)totalDeparted/MAXMONTH << endl;

	cout << "The total landings for the year is " << totalLandings << endl;
	cout << "The total departures for the year is " << totalDeparted << endl;

	cout << "The greatest number of planes that landed in a single day is " << mostLandings
		 << " which occured in the month of " << monthMost << endl;

	cout << "The least number of planes that landed in a single day is " << leastLandings
		 << " which occured in the month of " << monthLeast << endl;


	return 0;
}

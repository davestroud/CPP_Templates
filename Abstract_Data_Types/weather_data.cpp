// Write a program that uses a structure to store the following weather data
// for a particular month:

//******************************************************************************
// The program should also calculate the following:                            *
//      Average monthly rainfall                                               *
//      Total Rainfall for the year                                            *
//      Highest Temperature, and the month it occured                          *
//      Lowest Temperature, and the month it occured                           *
//      Average Temperature of all the montly average temperatures             *
// Input Validation: Only accept temperatures within the range between -100    *
// and +140 degrees Fahrenheit                                                 *
// *****************************************************************************
#include <iostream>
using namespace std;

// Declare struct
struct WeatherData
{
  double rain;          // Total Rainfall
  double high;          // High Temperature
  double low;           // Low Temperature
  double averageTemp;   // Average Temperature
};

// Function Prototypes
void getMonthData(WeatherData &);
double totalRain(WeatherData[], int);
double averageMonthlyRainfall(WeatherData[], int);
double averageAverageTemp(WeatherData[], int);
double highestTemp(WeatherData[], int, int &);
double lowestTemp(WeatherData[], int, int &);

int main()
{
  // Constant for the number of months
  const int NUM_MONTHS = 12;

  // Create an array of WeatherData structure
  WeatherData year[NUM_MONTHS];

  int highestMonth;       // The month with the highest temp
  int lowestMonth;        // The month with the lowest tmep

  // Get the weather data for each month by using a for loop
  cout << "Enter the following information:\n";
  for (int index = 0; index < NUM_MONTHS; index++)
  {
      // Get the Rainfall
      cout << "Month " << (index + 1) << endl;
      getMonthData(year[index]);
  }

  // Display the total Rainfall
  cout << "\nTotal Rainfall:"
        << totalRain(year, NUM_MONTHS) << endl;

  // Display the average monthly Rainfall
  cout << "Average Monthly Rain: "
        << averageMonthlyRainfall(year, NUM_MONTHS)
        << endl;

  // Display the average of the monthly average temperatures.
  cout << "Average Monthly Average Temperature: "
        << averageAverageTemp(year, NUM_MONTHS)
        << endl;

  // Display the highest temperature and the month it occured in.
  double highest = highestTemp(year, NUM_MONTHS, highestMonth);
  cout << "Highest Temperature: " << highest;
  cout << "   (Month ") << highestMonth << ")\n\n"

  // Display the lowest temperature and the month it occured in.
  double lowest = lowestTemp(year, NUM_MONTHS, lowestMonth);
  cout << "Lowest Temperature: " << lowest;
  cout << "    (Month ") << lowestMonth << ")\n\n"

  return 0;
}

// The getMonthData function accepts a WeatherData
// variable by reference.  It prompts the user for
// weather data and stores the input in the arguement

void getMonthData(WeatherData &data)
{
  // Get the total rainfall for the month.
  cout << "\tTotal Rainfall: ";
  cin >> data.rain;

  // Get the high temperature.
  cout << "\tHigh temperature: "
  cin >> data.high;

  // Validate the temperature
  while (data.high < -100 || data.low > 140)
  {
      cout << "ERROR: Temperature must be in the range "
            << "of -100 through 140.\n"
      cout << "\tHigh Temperature: ";
      cin >> data.high;
  }

  // Get the low temperature
  cout << "\tLow Temperature: "
  cin >> data.low;

  // Validate the low temperature.
  while (data.high < -100 || data.low > 140)
  {
    cout << "ERROR: Temperature must be in the range "
          << "of -100 through 140.\n"
    cout << "\tLow Temperature: ";
    cin >> data.low;
  }

  // Calculate the average temperature.
  data.averageTemp = (data.high + data.low) / 2.0;
}

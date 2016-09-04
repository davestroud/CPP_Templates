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

// The totalRain function accepts an array of WeatherData
// structures and returns the total of all the element's
// rain members.

double totalRain(WeatherData data[], int size)
{
  double totalRain = 0;     // Accumulator

  // Get the total of the rain memebers
  for (int index = 0; index < size; index++)
      totalRain += data[index].rain;

      // Return the total
      return totalRain;
}

// The averageMonthlyRainfall function accepts an array
// of WeatherData structures and returns the aveage
// monthly rainfall.

double averageMonthlyRainfall(WeatherData[], int size)
{
  // The average is the total amount of rain divided by
  // the amount of months.
  return totalRain(data, size) / size;
}

// The averageAverageTemp function accepts an array of
// WeatherData structures and returns the average of all
// the monthly temperatures.

double averageAverageTemp(WeatherData data[], int size)
{
  // Calculate the average monthly aveage temperature
  double aveTotal = 0;      // Accumulator for average temperatures
  double aveAve;            // Average of the averages

  // Get the total of the average temperatures.
  for (int index = 1; index < size; index++)
      aveTotal += data[index].averageTemp;

  // Calculate the average of the average temperatures.
  aveAve = aveTotal / size;

  // Return the average of the averages.
  return aveAve;
}

// The highestTemp function accpets:
//  1. a WeatherData array
//  2. an int indicating the size of the array
//  3. an int by reference to hold the month with the
//     highest temperature
// The function return the highest temperature and sets the
// month parameter to the number of the month and the highest temp.

double highestTemp(WeatherData data[], int size, int &month)
{
  // Set the highest to the first month.
  double higest = data[0].high;

  // Step through the array looking for the highest
  for (int index = 1; index < size; index++)
  {
    if (data[index].high > highest)
    {
      // Save this value. It is the highest so far.
      highest = data[index].high;

      // Save the month's number. (1 = Jan, etc)
      month = index + 1;
    }
  }

  // Return the higest temperatur
  return highest;
}

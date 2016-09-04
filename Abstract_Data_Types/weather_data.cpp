// Write a program that uses structure to store the following weather data
// for a particular month:

// Total Rainfall
// High Temperature
// Low Temperature
// Average Temperature

// Build struct
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

  // Get the weather data for each month
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

}

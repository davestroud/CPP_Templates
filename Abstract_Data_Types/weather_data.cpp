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
double averageAverageTemp(WeatherData{}, int);
double highestTemp(WeatherData[], int, int &);
double lowestTemp(WeatherData[], int, int &);

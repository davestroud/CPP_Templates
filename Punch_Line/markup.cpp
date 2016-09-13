#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double calculateRetail(double, double);

int main(int argc, char const *argv[]) {

    double wholesale, markupPercentage, retail;

    cout << "Enter the items wholesale cost:";
    cin >> wholesale;

    cout << "Enter the markup percentage:";
    cin >> markupPercentage;

    retail = calculateRetail(wholesale, markupPercentage);

    cout << "The retail price is $" << setprecision(2)
        << fixed << retail << endl;


  return 0;
}


double calculateRetail(double wholesale, double markupPercentage)
{
  // Receive wholesale and markup percentage
  double markup = wholesale * markupPercentage / 100;
  return wholesale + markup;
}

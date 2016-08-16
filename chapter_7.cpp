/* John David Stroud CS2250 Module 7 Assignment
 ~ This program displays each employees ID# 
 and asks for their hours worked and payrate per hour.
 The gross wages are then calculated and displayed. 
 Please enter at least 6 per hour and do not enter negative
 values for hours worked or you will be asked to start the 
 program over.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int empId = 7;
    int workers[empId] = {5658845, 4520125, 7895122, 8777541,
                                    8451277, 1302850, 7580489};
    double hours[empId];
    double payRate[empId];
    int index;
    
    // Input the data
    cout << "Enter the hours worked by " << empId;
    cout << " employees and their hourly rate." << endl;
    for (index = 0; index < empId; index++)
    {
        cout << "Hours worked by employee # " << (index + 1) << "(ID = " << workers[index] << "): ";
        cin >> hours[index];
        if (hours[index] < 0) {
            cout << hours[index] << " is less than 0 ";
            cout << "Run the program again " << endl;
            cout << "and enter a positive number.";
            break; // program breaks if you enter a negative number
        }
        cout << "Hourly pay rate for employee # ";
        cout << (index + 1) << "(ID = " << workers[index] << "): ";
        cin >> payRate[index];
        if (payRate[index] < 6){
            cout << payRate[index] << " is less than 6 ";
            cout << "Run the program again " << endl;
            cout << "and enter a number greater " << endl;
            cout << "than 6." << endl;
            break; // program breaks if you enter a number less than 6
        }
    }
    
    // Display each employee's gross pay
    cout << "Here is the gross pay for each employee:" << endl;
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < empId; index++) {
        double wages = hours[index] * payRate[index];
        cout << "Employee # " << (index + 1) << "(ID = " << workers[index] << "): ";
        cout << ": $ " << wages << endl;
    }
    return 0;
}


// Specification file for the ShiftSupervisor class
#ifndef SHIFT_SUPERVISOR_H
#define SHIFT_SUPERVISOR_H
#include <string>
#include "Employee.h"
using namespace std;

class ShiftSupervisor : public Employee
{
private:
	double salary;		// Annual salary
	double bonus;		// Annual production bonus

public:
	// Default constructor
	ShiftSupervisor() : Employee()
		{ salary = 0.0; bonus = 0.0; }

	// Constructor
	ShiftSupervisor(string aName, string aNumber, string aDate,
		double aSalary, double aBonus) : 
		Employee(aName, aNumber, aDate)
		{ salary = aSalary; bonus = aBonus; }

	// Mutators
	void setSalary(double s)
		{ salary = s; }

	void setBonus(double b)
		{ bonus = b; }

	// Accessors
	double getSalary() const
		{ return salary; }

	double getBonus() const
		{ return bonus; }
};

#endif
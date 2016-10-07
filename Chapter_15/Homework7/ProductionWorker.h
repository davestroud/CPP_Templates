#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

class ProductionWorker : public Employee
{
private:
  int shift;
  double hourlyPayRate
public:
  // Constructor
  ProductionWorker(string name, int number, string hDate,
    int shiftNum, double payRate) : Employee(name, number, hdate)
    {   shift = shiftNum;
        hourlyPayRate = payRate;
    }

    // Mutators
    void setShift(int shiftNum)
    {   shift = shiftNum; }

    void setHourlyPayRate(double payRate)
    {   hourlyPayRate = payRate; }

    // Accessors
    int getShift()
    {  return shift;  }

    double getHourlyPayRate()
    {  return hourlyPayRate;  }
};
#endif

// This program will read in monthly sales into a floating dynamic array.
// A function finds the total yearly sales
// Another function finds the average sales

// Dean DeFino

#include<iostream>
using namespace std;


void yearTotal(float * sales, int saleSize, float & sum);  //function that calculates yearly total
void yearAverage(float sum, int saleSize, float& avg);     //function that calculates average

int main()

{
  float * sales; //points to a dynamic array
  int saleSize;  //holds the size of the array as given by the user
  float sum = 0;  //sum of sales
  float avg;    //the averge monthly sales

  cout << "Please input the number of monthly sales to be input" << endl;
  cin >> saleSize;
  
  sales = new float[saleSize];

  for (int pos = 0;  pos < saleSize;  pos++)
		{
		  cout << "Please input the sales for  month " << pos + 1 << endl;
		  cin >> sales[pos];
		}

	yearTotal(sales, saleSize, sum);
    
	cout << "The total sales for the year is $" << sum << endl;
	yearAverage(sum, saleSize, avg);
	cout << "The average monthly sale is $" << avg << endl;
        

    return 0;
}

//*******************************************************************
//                   yearTotal
//
// task:       This procedure takes an array and calculates the sum
//			   of the elements in the array
// data in:    array and size of array
// data out:   sum of all elements in the array
//
//********************************************************************

void yearTotal(float * sales, int saleSize, float & sum)

{

  sum = 0;
  for (int pos = 0;  pos < saleSize;   pos++)
      sum = sum + sales[pos];


}

//***********************************************************************
//                      yearAverage
//
// task:       This procedure takes an array and calculates the average
//			   of the elements in the array
// data in:    array and size of array
// data out:   average of all elements in the array
//
//***********************************************************************

void yearAverage(float sum, int saleSize, float& avg) //function that calculates average
{
	avg = sum / saleSize;
}
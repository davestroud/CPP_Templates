#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(double scores[], int numScores);

int main (void){
 double *scores, //To dynamically allocate an array
 total = 0.0, // Accumulator
 average; // To hold average scores
 int numScores, //To hold the number of test scores
 count; //Counter variable

 //Get the number of test scores
 cout << "How many test scores would you like to enter? ";
 cin >> numScores;

 //Dynamically allocate an array large enough to hold that many test scores

 scores = new double[numScores];

 //Get the test scores
 cout << "Enter the test scores below.\n";
 for (count = 0; count < numScores; count++){
  cout << "Test Score " << (count + 1) << ": ";
  cin >> scores[count];
 }

 //Calculate the total of the scores
 for (count = 0; count < numScores; count++){
  total += scores[count];
 }

 //Calculate the average test score
 average = total / numScores;

 //Display the results
 cout << fixed << showpoint << setprecision(2);
 cout << "Average score is: " << average << endl;


 bubbleSort(scores,numScores);
 for (count = 0; count < numScores; count++){
  cout<<"score "<<(count+1)<<": "<<scores[count]<<endl;
 }


 //Free dynamically allocated memory
 delete [] scores;
 scores = 0; //Make scores point to null.
 cin.ignore(INT_MAX, '\n');
 cin.ignore(INT_MAX, '\n');

 return 0;
}


void bubbleSort(double scores[], int numScores){
 bool exchanges;
 do{
  exchanges = false; // assume no exchanges
  for(int i = 0; i < numScores - 1; i++){
   if(scores[i] > scores[i + 1]){
    double temp = scores[i];
    scores[i] = scores[i+1];
    scores[i+1] = temp;
    exchanges = true; // after exchange, must look again
   }
  }
 }while(exchanges);
}

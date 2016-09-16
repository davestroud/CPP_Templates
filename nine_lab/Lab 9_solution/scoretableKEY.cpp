// This program will read scores into a one dimensional array.  It will call a function
// to sort the scores before printing them out. 
// It will will also find the average of the scores
// It uses a dynamic array the size of which is given by the user(use of pointers)

// Dean DeFino

#include <iostream>
using namespace std;


void sort(float* score, int num_scores);

int main()

{

	float * score;			 // pointer to array
    int   num_scores;		 // size of the array
    float average;			 // finds the average
    float total = 0;	 	 // the total of all scores

	cout << "Please input the number of scores" << endl;
	cin >> num_scores;

	score = new float[num_scores];
    if (score == NULL)   // always test for null unless compiler handles this exception
 
	{
	   cout << "Error allocating memory!\n";
	   return 1;
	}

	for (int count = 0;  count < num_scores; count++)
	{

	    cout << "Please enter a score  "<< endl;
	    cin  >> score[count];
		total = total + score[count];
	}

    average = total / num_scores;
    
	cout << "The average of the scores is " << average << endl<< endl;

    sort(score,num_scores);
    cout << "Here are ths scores in ascending order" << endl;
    for (int count1 = 0;  count1 < num_scores;  count1++)

       cout << score[count1] << endl;

     return 0;
}

void sort(float * score, int size)

{

	int swap_occured = 1;
	int bottom = size-1;
    float temp;
	
	while (swap_occured)
    {
	
	  swap_occured = 0;
	  for (int pos = 0;  pos < bottom; pos++)

		if (score[pos] > score[pos + 1])
		{
			temp = score[pos];
			score[pos] = score[pos + 1];
			score[pos + 1] = temp;
			swap_occured = 1;
		}
		bottom--;
	}
}
#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

// GradedActivity class declaration

class GradedActivity
{
private:
   double score;   // To hold the numeric score
public:
   // Default constructor
   GradedActivity()
      { score = 0.0; }

   // Constructor
   GradedActivity(double s)
      { score = s; }

   // Mutator function, setter
   void setScore(double s)
      { score = s; }

   // Accessor functions, getters
   double getScore() const
      { return score; }

   char getLetterGrade() const;
};
#endif 

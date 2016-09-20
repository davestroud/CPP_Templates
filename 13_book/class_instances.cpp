// This program creates three instances of the Rectangle class.
#include <iostream>

// Recatangle class declaration.
class Rectangle
{
  private:
    double width;
    double length;
  public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

//**************************************************
// setWidth assigns a value to the width member.   *
//**************************************************

 void Rectangle::setWidth(double w)
 {
   width = w;
 }

//**************************************************
// setLength assigns a value to the length member. *
//**************************************************

void Rectangle::setLength(double len)
{
  length = len;
}

//**************************************************
// getWidth returns the value in the width member. *
//**************************************************

double Rectangle::getWidth() const
{
  return width;
}

//****************************************************
// getLength returns the value in the length member. *
//****************************************************

double Rectangle::getLength() const
{
  return length;
}

//*****************************************************
// getArea returns the product of width times length. *
//*****************************************************

double Rectangle::getArea() const
{
  return width * length;
}

//*****************************************************
// Function main                                      *
//*****************************************************

int main(int argc, char const *argv[]) {
  double number;      // To hold a number
  double totalArea;   // The total area
  Rectangle kitchen;  // To hold kitchen dimensions
  Rectangle bedroom;  // To hold bedroom dimensions
  Rectangle den;      // To hold den dimensions

  // Get the kitchens dimensions
  std::cout << "What is the kitchens length? " << std::endl;
  std::cin >> number;                           // Get the length
  kitchen.setLength(number);                    // Store in kitchen object
  std::cout << "What is the kitchens width? " << std::endl;
  std::cin >> number;                           // Get the width
  kitchen.setWidth(number);                     // Store in kitchen object

  // Get the bedrooms dimensions
  std::cout << "What is the bedrooms length? " << std::endl;
  std::cin >> number;                           // Get the length
  bedroom.setLength(number);                    // Store in bedroom object
  std::cout << "What is the bedrooms width? " << std::endl;
  std::cin >> number;                           // Get the width
  bedroom.setWidth(number);                     // Store in bedroom object

  // Get the dens dimensions
  std::cout << "What is the dens length? " << std::endl;
  std::cin >> number;                           // Get the length
  den.setLength(number);                        // Store in den object
  std::cout << "What is the dens width? " << std::endl;
  std::cin >> number;                           // Get the width
  den.setWidth(number);                         // Store in den object

  // Calculate the total area of the three rooms.
  totalArea = kitchen.getArea() + bedroom.getArea()
              + den.getArea();

  // Display the total area of three rooms.
  std::cout << "The total area of the three rooms is "
            << totalArea << std::endl;

  return 0;
}

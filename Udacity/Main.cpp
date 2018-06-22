# include <iostream>

int main(int argc, char const *argv[]) {
  enum MONTHS { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
  MONTHS bestMonth;

  bestMonth = Jan;

  if (bestMonth == Feb) {
    std::cout << "I'm not so sure January is the best month." << '\n';
  }
  else {
    std::cout << "January sucks" << '\n';
  }
  return 0;
}

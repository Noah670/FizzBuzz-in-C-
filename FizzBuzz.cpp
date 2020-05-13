/*
* Noah670
* 5-12-2020
*
*/

#include <iostream>
using namespace std;

int main()
{

  int userInput;

  while (userInput != 999)

  {
    cout << "Please enter any number, or press 999 to quit ";
    cin >> userInput;

    if (userInput % 5 == 0 && userInput % 3 == 0)
    {
      cout << "FizzBuzz" << endl;
    }
    else if (userInput % 3 == 0)
    {
      cout << "Fizz" << endl;
    }
    else if (userInput % 5 == 0)
    {
      cout << "Buzz" << endl;
    }
    else
    {
      cout << "I don't recognize that number" << endl;
    }
  }

  cout << "Bye!";
}
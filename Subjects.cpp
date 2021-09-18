#include<iostream>
using namespace std;

int
main ()
{

  const char *sub[7] =
    { "Discerte Structures", "Cloud Computing", "Data Structure and Algorithms", "Web Development Lab", "Data communication",
"Unix and Shell Programming Lab", "Java Programming" };
  cout << "Enter the subjects of your current semester:" << endl;

  cout << "The sub are:" << endl;
  for (int j = 0; j < 7; j++)
    {
      cout << j + 1 << "." << sub[j];
      cout << endl;
    }

  return 0;
  
}
#include <iostream>
#include "hashTable.h"
using namespace std;

static const int MAX_TRIES = 3;

int main()
{
  string username;
  string password;
  
  //READ IN DATA

  cout << "Hello! Welcome to the password checker,";
  cout << "an application of hashtables." << endl;

  LinkedList test;
  Item one, two, three;
  test.insertItem(&one);
  test.printList();
  /*
  for (int tries=0; tries<MAX_TRIES; tries++){

    cout << "Username: ";
    cin  >> username;
    cout << "Password: ";
    cin  >> password;

    if (tries == 4){ //Check against table
      cout << "Authentication Successful!" << endl;
      return 0;
    }else{
      cout << "Authentication Unsuccessful (" 
           << tries<< "tries remaining)" << endl;
    }
  }
  */
  cout << "Your have used up all of your tries, goodbye." << endl;
  return 0;
}

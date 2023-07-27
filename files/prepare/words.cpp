// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile ("test.txt");
  string words[100];
  string name;
  int value;
  int sum = 0;

  int i = 0;
  if (myfile.is_open())
  {
    while (myfile >> name >> value)
    {
      words[i] = name;
      sum += value;
      i++;
    }
    myfile.close();



    for( string word: words){
        cout << word << " ";
    }

    cout << endl;
    cout << sum;
    
  }

  else cout << "Unable to open file"; 

  return 0;
}
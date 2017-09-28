#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input;
  int count = 0, length;
  int shift;

  cout << "Enter a phrase: \n";
  getline(cin, input);

  cout << "\nHow many times do you want to shift the letter(s) in the message? ";
  cin >> shift;

  length = input.length();

  for (count = 0; count < length; count++)
  {
    if(isalpha(input[count]))
    {
      input[count] = tolower(input[count]);
      for (int i = 0; i < shift; i++)
      {
        if (input[count] == 'z')
          input[count] = 'a';
        else
          input[count]++;
      }
    }
  }

  cout << "\nResult: \n" <<input << endl;

}

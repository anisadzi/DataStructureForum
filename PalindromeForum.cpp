#include <iostream>
using namespace std;
int palindrome_check(string s, int start, int end) //calling for function
{
    if(end - start == 1 || start == end) //if the string length = 1, return true
    {
        return 1;
    }
    else //else, compare the first and last characters, and check them
    {
        if (s [start] == s [end]) //if both characters are the same, then apply recursion to the remaining substrings
        {
            return palindrome_check(s, start+1, end-1); 
        }
        else //else return false
        {
            return 0;
        }
    }
}

//driver code
int main()
{
   string s;
   cin >> s; //input from user
   int n = s.length();
   if(palindrome_check (s, 0, n-1))
   {
       cout << "Yes" << endl; //output yes if the string is a palindrome
   }
   else
   {
       cout << "No" << endl; //output no if the string is not a palindrome
   }
   return 0;
}
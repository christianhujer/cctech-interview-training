#include <iostream>
#include <algorithm>
using namespace std;
bool isPalindrome(string palindromeCandidate);
int main()
{
    cout<<"hello";	
    if(isPalindrome("dave"))
    return EXIT_SUCCESS;
    else
    return EXIT_FAILURE;
}

bool isPalindrome(string palindromeCandidate){

string temp=palindromeCandidate;
 reverse(palindromeCandidate.begin(), palindromeCandidate.end());
 if (temp==palindromeCandidate)
       return true;
    else
        return false;	
};


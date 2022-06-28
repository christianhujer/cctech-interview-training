#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool isPalindrome(string palindromeCandidate);
int main()
{
    if(isPalindrome("ana@"))
    return EXIT_SUCCESS;
    else
    return EXIT_FAILURE;
}

bool isPalindrome(string palindromeCandidate){

    string temp = "";//Empty string for removing special chars from palindromeCandidate

    for (int i = 0; i < palindromeCandidate.size(); ++i)
    {
        if ((palindromeCandidate[i] >= 'a' && palindromeCandidate[i] <= 'z') || (palindromeCandidate[i] >= 'A' && palindromeCandidate[i] <= 'Z'))
        {
            temp = temp + palindromeCandidate[i];
        }
    }
    palindromeCandidate = temp;//now palindromeCandidate doesnt have any special characters

    reverse(palindromeCandidate.begin(), palindromeCandidate.end());

     if (strcasecmp(temp.c_str(), palindromeCandidate.c_str()) == 0)//strcasecmp to avoid case
       return true;
    else
        return false;
};


#include<iostream>
using namespace std;

bool isPalindrome(string palindromeCandidate){
    int len = palindromeCandidate.length();
    bool palin = true;

    for(int i=0; i<len; i++){
        if(palindromeCandidate[i] != palindromeCandidate[len-i-1]){
            palin = false;
            break;
        }
    }
    return palin;
}

int main()
{
    cout << isPalindrome("mom") << endl;
    return EXIT_SUCCESS;
}

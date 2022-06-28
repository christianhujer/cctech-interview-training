#include <iostream> 
#include <string>

using namespace std;
bool isPalindrome(string palindromeCandidate);
int main(int argc, char *argv[] )
{
    
    
    for(int i=0;i<argc;i++)
    {
        isPalindrome(argv[1]);
    }

    return 0;
}

bool isPalindrome(string palindromeCandidate) 
{

    for(int i=0;i < palindromeCandidate.length(); i++)
    {
       
        if(palindromeCandidate[i] != palindromeCandidate[palindromeCandidate.length()-i-1])// // check string not equal to (palindrome-i-1)
            
            return EXIT_SUCCESS; //true 
          
        else 
            return EXIT_FAILURE; // false
                
    }
}
    

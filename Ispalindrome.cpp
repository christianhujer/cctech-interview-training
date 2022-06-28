#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;


bool Ispalindrome(string PalindromeCandidate){
    int n=PalindromeCandidate.length()-1;
   bool temp=false;
    for(int i=0;i<n/2;i++){
        if(PalindromeCandidate[i]==PalindromeCandidate[n-i])
           temp=true;

    }
   return temp;
}


 void removeCharsFromString( string &str, char* charsToRemove ) {
   for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
      str.erase( remove(str.begin(), str.end(), charsToRemove[i]), str.end() );
   }
 }


int main(int argc, char* argv[]){
    string Candidate;
   if (argc != 2)
    {
         cerr << "error : Wrong number of Argument" << endl;
        return EXIT_FAILURE;
    else
    {

         Candidate =(argv[1]);

    }
    removeCharsFromString(Candidate,",. ");
    if(Ispalindrome(Candidate))
       //cout<<"Palindrome";
        return EXIT_SUCCESS;
    else
        return EXIT_FAILURE;
        //cout<<"Not Palindrome";
}


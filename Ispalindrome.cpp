#include<iostream>
#include<string>
using namespace std;
bool Ispalindrome(string PalindromeCandidate){
    int n=PalindromeCandidate.length()-1;
   // bool temp=false;
    for(int i=0;i<n;i++){
        if(PalindromeCandidate[i]==PalindromeCandidate[n-i])
           // temp=true;
           return EXIT_FAILURE;
    }
   return EXIT_SUCCESS;
}
int main(int argc, char* argv[]){
    string Candidate;
   if (argc != 2)
    {
        cerr << "error :" << argv[0] << endl;
        exit(0);
    }
    else
    {

         Candidate =(argv[1]);

    }
    if(Ispalindrome(Candidate))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}

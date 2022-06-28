#include <iostream>
using namespace std;

bool isPalindrome(string palindromeCandidate){
    if(palindromeCandidate=="")
    return EXIT_FAILURE;
    char charArray[palindromeCandidate.length()];
    for(int i=0;i<palindromeCandidate.length();i++){
        if(palindromeCandidate[i]>96 && palindromeCandidate[i]<123)     //convert lower chars to upper
            charArray[i]=palindromeCandidate[i]-32;
        else if(palindromeCandidate[i]<65)
            continue;
        else
            charArray[i]=palindromeCandidate[i];    // copy string to an charArray
    }
    bool flag=true;
    for(int i=0;i<palindromeCandidate.length();i++){
        if(charArray[i] != charArray[palindromeCandidate.length()-i-1]){
            flag= false;
            cout<<charArray[i]<<" "<< charArray[palindromeCandidate.length()-i-1] <<"error"<<endl;
            break;
        }
    }
    return flag;
}

int main(){
    string test = "Icici";
    cout<< isPalindrome(test)<<endl;
    return EXIT_SUCCESS;
}
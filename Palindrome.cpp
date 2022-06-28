#include <iostream>
using namespace std;

bool isPalindrome(string palindromeCandidate){
    if(palindromeCandidate=="")
        return true;
    string temp;
    for(int i=0;i<palindromeCandidate.length();i++){
        if(ispunct(palindromeCandidate[i]) || palindromeCandidate[i]==' ')
            continue;
        else
            temp+=tolower(palindromeCandidate[i]);        
    }
    bool flag=true;
    for(int i=0;i<temp.length()/2;i++){
        if(temp[i]!=temp[temp.length()-i-1]){
            flag=false;
            break;
        }
    }
    return flag;
}

int main(int argc, char* argv[]){
    string test = argv[1];
    if(isPalindrome(test))
        return EXIT_SUCCESS;
    else
        return EXIT_FAILURE;
}
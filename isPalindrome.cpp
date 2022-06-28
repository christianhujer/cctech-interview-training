#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string palindromeCandidate){
    int forwd_index, backwd_index;
    forwd_index = 0;
    int length = palindromeCandidate.length();

    if(length==0){
        return true;
    }else{
        backwd_index = length - 1;

        while(forwd_index<=backwd_index){
            if(tolower(palindromeCandidate[forwd_index]) != tolower(palindromeCandidate[backwd_index])){
                return false;                
                break;
            }else{
                forwd_index++;
                backwd_index--;
            }            
        }
        return true;
    }    
}

int main(int argc, char *argv[]){
    if(argc==1 || argc>2){
        cout<<"error: Wrong numbers of arguments"<<endl;
    }else{
        cout<<isPalindrome(argv[1])<<endl;
    }
    return EXIT_SUCCESS;
}
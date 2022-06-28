#include "isPalindrome.h"

#include <algorithm>
#include <iostream>

void convertToLowerCase(std::string& word){
    for(int i = 0; i < word.length(); ++i)
        word[i] = tolower(word[i]);
}

void removePunctuation(std::string& word){
    word.erase(std::remove(word.begin(), word.end(), ' '), word.end());
    word.erase(std::remove(word.begin(), word.end(), ','), word.end());
    word.erase(std::remove(word.begin(), word.end(), '.'), word.end());
}

bool isPalindrome(const std::string& palindromeCandidate){
    std::string reversed(palindromeCandidate);
    std::string inOrder(palindromeCandidate);

    std::reverse(reversed.begin(), reversed.end());

    convertToLowerCase(inOrder);
    convertToLowerCase(reversed);

    removePunctuation(inOrder);
    removePunctuation(reversed);

    return reversed == inOrder;
}

int main(int argc, char* argv[]){
    if(argc == 2){
        std::string palindromeCandidate = argv[1];
        std::cout << !isPalindrome(palindromeCandidate) << std::endl;
    }
    else
        std::cerr << "Wrong number of arguments" << std::endl;


    return EXIT_SUCCESS;
}
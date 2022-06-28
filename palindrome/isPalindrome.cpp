#include "isPalindrome.h"

#include <algorithm>
#include <iostream>

void convertToLowerCase(std::string& word){
    std::transform(word.begin(), word.end(), word.begin(), tolower);
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
        bool isCandidatePalindrome = isPalindrome(palindromeCandidate); 
        std::cout << !isCandidatePalindrome << std::endl;
        if(isCandidatePalindrome)
            return EXIT_SUCCESS;
        else
            return EXIT_FAILURE;
    }
    else{
        std::cerr << "Wrong number of arguments" << std::endl;
        return EXIT_FAILURE;
    }
}
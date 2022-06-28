# Palindrome

Write a program that tells whether a given input string is a palindrome.

A palindrome is the same forward and backward.

# Examples
## Examples of Palindromes
> ""
> "a"
> ",."
> "Aa"
> "a."
> "level"
> "121"
> "Nitin"
> "madam"
> "ICICI"
> "Malayalam"
> "A man, a plan, a canal, panama."

## Examples of Non-Palindromes
> "ab"

# Program Interface and Architecture
The program should be callable from the command line using its name `isPalindrome`.
It should receive a single string as an argument.
It will return with `EXIT_SUCCESS` (0) if the argument string is a palindrome, and `EXIT_FAILURE` (1) otherwise.

Usage Examples:
```
$ ./isPalindrome "" ; echo $?
0
$ ./isPalindrome "a" ; echo $?
0
$ ./isPalindrome "ab" ; echo $?
1
$ ./isPalindrome ; echo $?
./isPalindrome: error: Wrong number of arguments
1
$ ./isPalindrome foo bar ; echo $?
./isPalindrome: error: Wrong number of arguments
$ ./isPalindrome "A man, a plan, a canal, panama."
0
$
```

The actual behavior of the program should be in a separate function named `isPalindrome`.
The `isPalindrome()` function should have the following signature:
```C++
bool isPalindrome(string palindromeCandidate);
```

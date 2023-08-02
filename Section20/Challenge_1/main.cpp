// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


bool is_palindrome(const std::string& s)
{
    std::deque<int> prhase_charcode;
    std::deque<int> prhase_charcode_reverse;
    
    for(char chr : s) {
        if(std::isalpha(chr)) {
            prhase_charcode.push_back(std::toupper(chr));
            prhase_charcode_reverse.push_front(std::toupper(chr));
        }
            
    }
    
    for(size_t i = 0; i < prhase_charcode.size(); i++) {
        if(prhase_charcode_reverse[i] != prhase_charcode[i]) {
            return false;
        }
    }
    
    if(s.length() > 0) {
        return true;
    }
    
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    return false;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
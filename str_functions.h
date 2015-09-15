#ifndef STR_FUNCTIONS_H
#define STR_FUNCTIONS_H
#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <iterator>

/*
 * reverses str in place
 */
void reverse(std::string& str) {
    int start = 0, end = str.length()-1;
    while (start < end) {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        ++start;
        --end;
    }
}

/*
 * reverses a string using std::reverse
 */
void reverse2(std::string& str) {
    std::reverse(str.begin(), str.end());
}

/*
 * reverses the words of a sentece
 * the idea is to split the sentence into words
 * put them in a vector and reverse the vector
 */
std::string reverse_phrase(std::string& str) {
    std::vector<std::string> tokens;
    std::istringstream is(str);
    copy(std::istream_iterator<std::string>(is),
         std::istream_iterator<std::string>(),
         std::back_inserter(tokens));
    std::reverse(tokens.begin(), tokens.end());
    std::stringstream ss;
    for(auto i=0; i<tokens.size(); ++i) {
        if (i != 0)
            ss << " ";
        ss << tokens[i];
    }
    return ss.str();
}

std::string int_to_str(unsigned number, unsigned int base=2) {
    std::string s;
    if (number == 0)
        return "0";
    while (number > 0) {
        auto remainder = number % base;
        s += std::to_string(remainder);
        number = number / base;
    }
    std::reverse(s.begin(), s.end());
    return s;
}

#endif // STR_FUNCTIONS_H

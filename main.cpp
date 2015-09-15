#include <iostream>

#include "str_functions.h"


using namespace std;

int main()
{
    std::string s("abcde");
    reverse(s);
    cout << "using reverse" << endl;
    cout << "reversed: "<< s << endl;
    cout << "now using reverse2" << endl;
    reverse2(s);
    cout << "reversed: " << s << endl;

    std::string phrase("I like you");
    cout << "reversing phrase `" << phrase << "` -> ";
    phrase = reverse_phrase(phrase);
    cout << phrase << endl;

    cout << "binary represation of " << 5 << " " << int_to_str(5)
            << endl;
    cout << "Here we convert integer" << 1245 << " to a string: "
         <<  int_to_str(1245) << endl;

    return 0;
}


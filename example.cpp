// import order is self.h, local_file.h, <3rd_party>, <std_library>
#include "ex_import.h"
// imports iostream library to allow input/output
#include <iostream>
#include <string>  //for std::string

// forward declaration of yearsToDays()
float yearsToDays(int years);

// void notes no return value
// string_view is read only copy of std::string, cheap to initialize for func parameters
void getInfo(std::string_view name)
{
    std::cout << "name: " << name << "\n";

    bool cool = false;
    std::cout << "coolness = " << cool << "/100\n";
    
    char rating = 'F';
    std::cout << "peer reviewed rating of " << name << " = " << rating << "\n";

    int size = 1;
    std::cout << "size calculation complete\n";
    std::cout << "sizeof(" << name << ") = " << sizeof(size) << "cm (small)";

}

// main() is run when .exe is run
int main()
{
    // initializes x as an integer and assigns 8 as value
    int x = 8;
    // initializes and assigns constant variable DAYS_IN_YEAR
    const int AGE_OF_ADULTHOOD { 18 };
    // insertion operator "<<" puts string into output (terminal)
    // "\n" makes newline but does not flush output to immediately print
    std::cout << "Roast Mode\n";

    std::cout << "How old are you?: ";
    int years;
    std::cin >> years;

    std::string age_insult;
    if (years < AGE_OF_ADULTHOOD)
    {
        age_insult = "baby";
    }
    else if (years > 65)
    {
        age_insult = "old";
    }
    else if (years > 35)
    {
        age_insult = "middle aged";
    }
    else
    {
        age_insult = "ugly";
    }
    std::cout 
        << yearsToDays(years) 
        << " days on this earth and this " 
        << age_insult 
        << " loser has nothing to show for it!\n";

    std::cout << "What is your name?: ";
    // std::string more usable than C-type strings, expensive to intialize but modifiable
    std::string name {};
    // extracts entire line from std::cin instead of one word, std::ws ignores leading white space
    std::getline(std::cin >> std::ws, name);

    // uses string.length() to get length
    std::cout << "ah yes. the " << name.length() << " most worthless letters\n";
    std::cout << "here let me fix it for you!\n";
    name = "Idiot";
    getInfo(name);

    // returns 0 to main function, signifying success
    return 0;
}

//TO ADD
// forward identifier
// namespace
// preprocessor
// macro
// directive
// header files
// header guard
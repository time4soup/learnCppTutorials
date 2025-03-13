#include <iostream>

/* Example for Ch6 Q1
std::string getQuantityPhrase(int amt) 
{
    if (amt < 0) {
        return "negative";
    } else if (amt == 0) {
        return "no";
    } else if (amt == 1) {
        return "a single";
    } else if (amt == 2) {
        return "a couple of";
    } else if (amt == 3) {
        return "a few";
    } else {
        return "many";
    }
}

 std::string getApplesPluralized(int amt) 
 {
    if (amt == 1) {
        return "apple";
    } else {
        return "apples";
    }
 }

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
*/

/* Example for Ch4 Q3
//gets user input of a float
float getFloat() {
    std::cout << "enter the height of the tower: ";
    float h;
    std::cin >> h;
    return h;
}

//prints a statement to the console for the height and the time
void printHeight(float h, int time) {
    std::cout << "The height after " << time << " seconds is " << h << "\n";
}

int main() {
    float a { -9.8 }; //acceleration due to gravity
    float v { 0 }; //initial velocity
    float h { getFloat() };

    for (int i { 0 }; i < 5; i++) {
        if (h > 0) {
            v = v + a;
            h = h + v;
        }
        if (h < 0) {
            h = 0;
            v = 0;
            std::cout << "THUD\n";
        }
        printHeight(h, i + 1);
    }
}
*/


/* Example for Ch4 Q2
float getNumber()
{
    std::cout << "enter a number: ";
    float x;
    std::cin >> x;
    return x;
}

char getSymbol()
{
    std::cout << "enter a math symbol: ";
    char c;
    std::cin >> c;
    if (c == '+' || c == '/' || c == '*' || c == '-') {
        return c;
    } else {
        return getSymbol();
    }
}

float doMath(float x, float y, char c)
{
    if (c == '+') {
        return x + y;
    } else if (c == '-') {
        return x - y;
    } else if (c == '*') {
        return x * y;
    } else {
        return x / y;
    }
}

int main() 
{
    float num1 { getNumber() };
    float num2 { getNumber() };
    char symbol { getSymbol() };
    std::cout << num1 << " " << symbol << " " << num2 << " = " << doMath(num1, num2, symbol) << "\n";
}
*/
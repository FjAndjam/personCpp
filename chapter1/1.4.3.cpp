#include <iostream>
int main()
{
    int sum = 0, val = 0;

    // // Keep executing the while as long as val is less than or equal to 10
    // while (val <= 10) {
    //     sum += val; // assigns sum + val to sum
    //     ++val; // add 1 to val
    // }
    // std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;

    // // Read until end-of-file or not an integer, calculating a running total of all values read
    // while (std::cin >> val)
    // {
    //     sum += val;
    // }
    // std::cout << "Sum is:  " << sum << std::endl;

    // Exercises Section 1.4.3
    // Exercise 1.16: Write your own version of a program that prints the sum of a set of integers read from cin.
    int exitFlag{1};
    do
    {
        std::cout << "Enter a number(q for quit): ";
        if( std::cin >> val) {
            sum += val;
        } else {
            exitFlag = 0;
        }
    } while (exitFlag);

    std::cout << "Sum is:  " << sum << std::endl;

    return 0;
}
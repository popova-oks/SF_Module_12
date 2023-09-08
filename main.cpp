#include <iostream>
#include "IsKPeriodic.h"
#include <string>

int main ()
{
    
    char str_1[12] {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
    char str_2[12] {'a', 'b', 'a', 'a', 'b', 'a', 'a', 'b', 'a', 'a', 'b', 'a'};
    char str_3[12] {'a', 'b', 'b', 'a', 'a', 'b', 'b', 'a', 'a', 'b', 'b', 'a'};
    char str_4[12] {'a', 'b', 'c', 'd', 'e', 'f', 'a', 'b', 'c', 'd', 'e', 'f'};
    char str_5[12] {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'd'};
    char str_6[12] {'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'a'};

    std::cout << "Frequency of str_1 = " << IsKPeriodic(str_1, 12) <<"\n\n";
    std::cout << "Frequency of str_2 = " << IsKPeriodic(str_2, 12) <<"\n\n";
    std::cout << "Frequency of str_3 = " << IsKPeriodic(str_3, 12) <<"\n\n";
    std::cout << "Frequency of str_4 = " << IsKPeriodic(str_4, 12) <<"\n\n";
    std::cout << "Frequency of str_5 = " << IsKPeriodic(str_5, 12) <<"\n\n";
    std::cout << "Frequency of str_6 = " << IsKPeriodic(str_6, 12) <<"\n\n";
    
    std::cout <<"\n";

    return 0;
}
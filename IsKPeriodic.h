#pragma once
#include <iostream>
#include <string>


bool check_substr(char str[], const size_t len_str, char subs [], size_t len_subs, int &counter)
{
    if (len_str % len_subs)                                   //проверяем кратность числа символов строки и подстроки
    {
        return false;
    }
    int s = 0;
    while (s < len_subs)
    {
        for (int i = 0; i + len_subs < len_str; i += len_subs)
        {
            if (str[i + s] != str[i + s + len_subs])          //проверяем символы со сдвигом на длину подстроки
            {
                return false;
            }
            if (str[i + s] == str[i + s + len_subs])          //сохраняем число идущих подряд одинаковых символов
            {
                counter ++;
            }
            else
            {
                if (counter <= len_str/2 + 1)
                    counter = 0;
            }
        }
        s ++;
    }
    return true;
}


int IsKPeriodic (char* str, const int len_str)
{
    char* subs  = new char [len_str/2+1];
    subs[0] = str [0];                              
    
    int shift_str = 1;
    int index_subs = 0;
    int counter = 0;

    while (index_subs < len_str/2 + 1)                      //длина подстроки не может быть больше половины строки
    {        
        if (subs[0] == str[shift_str])                      //если первый симол подстроки и текущий символ строки совпадают
                                                            //проверяем является ли подстрокой
        {
            size_t len_subs = index_subs + 1;
            if (check_substr(str, len_str, subs, len_subs, counter))
            {
                std::cout << "A sub-string is found!\n";    
                delete [] subs;
                return len_subs;
            }
            if (counter > len_str/2 + 1)                    //если число одинаковых символов больше длины половины строки + 1
            {                                               //после первой проверки на подстроку отбрасываем худшие случаи
                                                            //{'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'd'}
                                                            //{'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'a'}
                std::cout << "A sub-string is not found!\n";    
                delete [] subs;
                return -1;
            }           
        }
        index_subs++;
        subs[index_subs] = str [shift_str]; 
        shift_str ++;
    }    
    std::cout << "A sub-string is not found!\n";    
    delete [] subs;
    return -1;
}
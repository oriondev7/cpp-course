//Without STL
#include <iostream>

int howManyWords(char * str);

int main()
{
    char str[] = "We are trying to count number of words in this text";
    std::cout << howManyWords(str) << std::endl;
    return 0;
}

int howManyWords(char * str)
{
    int count = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == 32)
            count++;
        i++;
    }
    return ++count;
}

//With STL
//Пока что учу STL.

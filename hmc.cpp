//Without STL
#include <iostream>

int howManyConsonant(char * str);

int main()
{
    char str[] = "How many consonant here?";
    std::cout << howManyConsonant(str) << std::endl;
    return 0;
}

int howManyConsonant(char * str)
{
    
    int size = 0;
    while(str[size] != '\0')
        size++;
    size++;
    char consonant[] = "BbCcDdFfGgHhJjKkLlMmNnPpQqRrSsTtVvWw";
    int count = 0;
    for(int i = 0; i < size; i++)
        for(int j = 0; j < strlen(consonant); j++)
        {
            if(str[i] == consonant[j])
                count++;
        }
    return count;
}

//With STL
//Пока что учу STL.

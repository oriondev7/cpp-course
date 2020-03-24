//Without STL
#include <iostream>

void sentencesCutter(char * str);

int main()
{
    char str[] = "Let's try to print each word in new line";
    sentencesCutter(str);
    return 0;
}

void sentencesCutter(char * str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        std::cout << str[i];
        if(str[i] == 32)
            std::cout << '\n';
        i++;
    }
    std::cout << std::endl;
}


//With STL
//Пока что учу STL.

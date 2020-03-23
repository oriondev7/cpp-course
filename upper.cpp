#include <iostream>

char * upper(char * str);

int main() {
    char str[] = "This is C++";
    std::cout << upper(str) << std::endl;
    return 0;
}

char * upper(char * str)
{
    int size = 0;
    while(str[size] != '\0')
        size++;
    str[++size - 1] = '\0';
    for(int i = 0; i < size; i++)
        if(str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    return str;
}
//

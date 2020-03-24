//Without STL
#include <iostream>

bool isPunctMark(char a);
void spaceRemover(char * str);

int main()
{
    char str[] = "Let's remove redundant spaces there , so all , including this text be happy !";
    spaceRemover(str);
    return 0;
}

bool isPunctMark(char a)
{
    bool check = false;
    char pM[] = "!,.?";
    for(int i = 0; i < strlen(pM); i++)
        if(a == pM[i])
            check = true;
    return check;
}

void spaceRemover(char * str)
{
    int size = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        size++;
        if(isPunctMark(str[i]) && str[i - 1] == 32)
            size--;
        i++;
    }
    size++;
    char *nStr = new char[size];
    int j = 0;
    i = 0;
    while(j < size)
    {
        if(str[i] == 32 && isPunctMark(str[i + 1]))
        {
            i++;
        }
        nStr[j] = str[i];
        i++;
        j++;
    }
    std::cout << nStr << std::endl;
    delete [] nStr;
}

//With STL
//Пока что учу STL.

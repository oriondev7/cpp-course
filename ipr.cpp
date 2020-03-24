//Without STL
#include <iostream>

bool isSpace(char a);
bool isPunctMark(char a);
void spaceRemover(char * str);

int main()
{
    char str[] = " There are too many spaces in this text ! ";
    spaceRemover(str);
    return 0;
}

bool isSpace(char a)
{
    return a == 32;
}

bool isPunctMark(char a)
{
    bool check = false;
    char pM[] = ",.!?";
    for(int i = 0; pM[i] != '\0'; i++)
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
        if((i == 0 && isSpace(str[i])) || (isSpace(str[i]) && isPunctMark(str[i + 1])))
            size--;
        if(isSpace(str[i]) && (isSpace(str[i + 1]) || str[i + 1] == '\0'))
            size--;
        i++;
    }
    size++;
    char *nStr = new char[size];
    i = 0;
    int j = 0;
    while(j < size)
    {
        if((i == 0 && isSpace(str[i])) || (isSpace(str[i]) && isPunctMark(str[i + 1])))
            i++;
        if(isSpace(str[i]) && (isSpace(str[i + 1]) || str[i + 1] == '\0'))
            i++;
        nStr[j] = str[i];
        i++;
        j++;
    }
    std::cout << nStr << std::endl;
    delete [] nStr;
}

//With STL
//Пока что учу STL.

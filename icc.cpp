//Without STL
#include <iostream>

bool isSpace(char a);
int copyCheck(char * str, int num);
void cont(char * str);

int main()
{
    char str[] = "We We twice twice don't We don't repeat twice repeat twice twice repeat twice don't twice twice We";
    cont(str);
    return 0;
}

bool isSpace(const char a)
{
    return a == 32;
}

int copyCheck(char * str, const int num)
{
    int size = 0;
    int nNum = num;
    //Вычисляем размер следующего слова строки
    while(!isSpace(str[nNum]) && str[nNum] != '\0')
    {
        size++;
        nNum++;
    }
    size++;
    char *temp = new char[size];
    temp[size - 1] = '\0';
    size = 0;
    nNum = num;
    //Записивыем это слово во временную переменную
    while(!isSpace(str[nNum]) && str[nNum] != '\0')
    {
        temp[size] = str[nNum];
        size++;
        nNum++;
    }
    size = 0;
    bool copy = false;
    int copyCount = 0;
    int i = 0;
    while(i < num && !copy)
    {
        //size считает количество букв в слове
        size++;
        if(isSpace(str[i]))
            size = 0;
        if(strlen(temp) == size && isSpace(str[i + 1]))
        {
            nNum = 0;
            while(str[i - size + 1] == temp[nNum])
            {
                i++;
                nNum++;
                copyCount++;
                if(copyCount != 0 && str[i - size + 1] != temp[nNum])
                    copy = true;
            }
        }else
            i++;
    }
    delete [] temp;
    return copyCount;
}

void cont(char * str)
{
    int size = 0;
    while(str[size] != '\0')
        size++;
    size++;
    const int ORIGINAL_SIZE = size;
    char * nStr = new char[size];
    nStr[size - 1] = '\0';
    size = 0;
    int i = 0;
    int iterCheck = 0;
    while(i < ORIGINAL_SIZE){
        nStr[size] = str[i];
        if(isSpace(str[i]))
        {
            //i + 1 чтобы с пробела перейти на слово
            i += copyCheck(str, i + 1);
            while(iterCheck != i){
                i++;
                iterCheck = i;
                i += copyCheck(str, i + 1);
                }
        }
        size++;
        i++;
        iterCheck = i;
    }
    char *nStr2 = new char[size];
    nStr2[size - 1] = '\0';
    for(int i = 0; i < size; i++)
    {
        nStr2[i] = nStr[i];
    }
    delete [] nStr;
    std::cout << nStr2 << std::endl;
    delete [] nStr2;
}

//With STL
//Пока что учу STL.
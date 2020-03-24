//Without STL
#include <iostream>

void digitReplace(char * str);

int main()
{
    char str[] = "I completed 7 tasks and had difficulties with just 1 of them.";
    digitReplace(str);
    return 0;
}

void digitReplace(char * str)
{
    int size = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        switch(str[i])
        {
            case '1':
                size += 3;
                break;
            case '2':
                size += 3;
                break;
            case '3':
                size += 5;
                break;
            case '4':
                size += 4;
                break;
            case '5':
                size += 4;
                break;
            case '6':
                size += 3;
                break;
            case '7':
                size += 5;
                break;
            case '8':
                size += 5;
                break;
            case '9':
                size += 4;
                break;
//            case :
//                size += 3;
//                break;
        }
        i++;
        size++;
    }
    size++;
    char *nStr = new char[size];
    char one [] = "one",
         two[] = "two",
         three[] = "three",
         four[] = "four",
         five[] = "five",
         six[] = "six",
         seven[] = "seven",
         eight[] = "eight",
         nine[] = "nine";
//         ten[] = "ten";
    i = 0;
    int j = 0;
    int n = 0;
    while(i < size)
    {
        switch(str[i])
        {
            case '1':
                while(one[n] != '\0')
                {
                    nStr[j] = one[n];
                    j++;
                    n++;
                }
                i++;
                n = 0;
                break;
            case '2':
                while(two[n] != '\0')
                {
                    nStr[j] = two[n];
                    j++;
                    n++;
                }
                i++;
                n = 0;
                break;
            case '3':
                while(three[n] != '\0')
                {
                    nStr[j] = three[n];
                    j++;
                    n++;
                }
                i++;
                n = 0;
                break;
            case '4':
                while(four[n] != '\0')
                {
                    nStr[j] = four[n];
                    j++;
                    n++;
                }
                i++;
                n = 0;
            break;
            case '5':
                while(five[n] != '\0')
                {
                    nStr[j] = five[n];
                    j++;
                    n++;
                }
                i++;
                n = 0;
                break;
            case '6':
                while(six[n] != '\0')
                {
                    nStr[j] = six[n];
                    j++;
                    n++;
                }
                i++;
                n = 0;
                break;
            case '7':
                while(seven[n] != '\0')
                {
                    nStr[j] = seven[n];
                    j++;
                    n++;
                }
                i++;
                n = 0;
                break;
            case '8':
                while(eight[n] != '\0')
                {
                    nStr[j] = eight[n];
                    j++;
                    n++;
                }
                i++;
                n = 0;
                break;
            case '9':
                while(nine[n] != '\0')
                {
                    nStr[j] = nine[n];
                    j++;
                    n++;
                }
                i++;
                n = 0;
                break;
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

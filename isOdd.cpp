//Without STL
#include <iostream>

bool isOdd(int a);
int biggestOdd(int arr[], int size);

int main()
{
    int arr[]{10, 9, 13, 43, -7, 4, 13};
    std::cout << biggestOdd(arr, sizeof(arr)/sizeof(arr[0])) << std::endl;
    return 0;
}

bool isOdd(int a)
{
    return a % 2 != 0;
}

int biggestOdd(int arr[], int size)
{
    int bigger = 0;
    bool biggerCheck = false;
    for(int i = 0; i < size; i++)
    {
        if(isOdd(arr[i]) && !biggerCheck)
        {
            bigger = arr[i];
            biggerCheck = true;
        }
        if(isOdd(arr[i]))
            for(int j = 0; j < size; j++)
            {
                if(isOdd(arr[j]) && arr[i] > arr[j] && arr[i] > bigger)
                    bigger = arr[i];
            }
    }
    return bigger;
}



//With STL
//Пока что учу STL.

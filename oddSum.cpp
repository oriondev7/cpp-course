//Without STL
#include <iostream>

bool isOdd(int a);
int oddSum(int arr[], int size);

int main()
{
    int arr[]{1, 78, 5, 34, 7, -4, -13};
    std::cout << oddSum(arr, sizeof(arr)/sizeof(arr[0])) << std::endl;
    return 0;
}

bool isOdd(int a)
{
    return a % 2 != 0;
}

int oddSum(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; ++i)
        if(isOdd(arr[i]))
            sum += arr[i];
    return sum;
}

//With STL
//Пока что учу STL.

//Without STL
#include <iostream>

double fractionalPart(double a);
double absNumber(double a);
double minNumber(double arr[], int size);

int main()
{
    double arr[]{1.67, 32.0, 3.0, 7.12, -4.1, -8.09};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout << absNumber(fractionalPart(minNumber(arr, size))) << std::endl;
    return 0;
}

double fractionalPart(double a)
{
    int b = a;
    return a - b;
}

double absNumber(double a)
{
    if(a < 0)
        a = -(a);
    return a;
}

double minNumber(double arr[], int size)
{
    double min = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

//With STL
//Пока что учу STL.

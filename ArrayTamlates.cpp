// ArrayTamlates.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

/// <summary>
/// Заполнение массива
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="arr"></param>
/// <param name="size"></param>
template<typename T>
void FillArray(T arr[], int size);

/// <summary>
/// Печать массива
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="arr"></param>
/// <param name="size"></param>
template<typename T>
void PrintArray(T arr[], int size);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int sizze = 20;
    int Array[sizze];
    FillArray(Array, sizze);
    PrintArray(Array, sizze);
}



template<typename T>
void FillArray(T arr[], int size) {
    random_device random;
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = random() % (100 + 50) - 50;
    }
}

template<typename T>
void PrintArray(T arr[], int size) {
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
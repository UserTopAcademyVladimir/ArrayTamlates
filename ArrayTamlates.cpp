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

template <typename T>
void SortBubble(T arr[], int size);

template <typename T>
bool SortBubbleLeft(T arr[], int size, int i, bool flag);

template <typename T>
bool SortBubbRight(T arr[], int size, int i, bool flag);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int sizze = 20;
    int Array[sizze];
    FillArray(Array, sizze);
    PrintArray(Array, sizze);

	cout << " -------------After sorting------------ " << endl;
	SortBubble(Array, sizze);
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


template <typename T>
void SortBubble(T arr[], int size ) {	
	int i = 0;
	bool flag = true;
	for (; i < size; ++i) {		
		
		if (SortBubbleLeft(arr,  size, i, flag))
			break;
		
		if (SortBubbRight(arr, size, i, flag))
			break;
	}
}

template<typename T>
bool SortBubbleLeft(T arr[], int size, int i, bool flag){
	for (int j = i; j < size - 1 - i; ++j) {
		if (arr[j] > arr[j + 1])
		{
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			flag = false;
		}
	}

	return flag;
}

template<typename T>
bool SortBubbRight(T arr[], int size, int i, bool flag) {
	for (int k = size - 1 - i; k > i; --k) {
		if (arr[k - 1] > arr[k])
		{
			int tmp = arr[k - 1];
			arr[k - 1] = arr[k];
			arr[k] = tmp;
			flag = false;
		}
	}

	return flag;
}


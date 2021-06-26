﻿#include<iostream>
using namespace std;
#define tab "\t"

void  FillRand(int arr[], const int n);
void  FillRand(double arr[], const int n);
void  Print(int arr[], const int n);
void  Print(double arr[], const int n);
void  PrintRaverse(int arr[], const int n);
void  PrintRaverse(double arr[], const int n);
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	FillRand(arr, n);
	Print(arr, n);
	PrintRaverse(arr, n);
	cout << "Сумма элементов массива" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива" << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:\t" << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве:\t" << maxValueIn(arr, n) << endl;

	double d_arr[n]; //double array
	FillRand(d_arr, n);
	Print(d_arr, n);
	PrintRaverse(d_arr, n);
	cout << "Сумма элементов массива:" << Sum(d_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива" << Avg(d_arr, n) << endl;

}

void  FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
		//Функция rand () возвращает псевдослучайное число  в промежутке от 0 до 32 756

	}
}
void  FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand()%100)/10;
		//Функция rand () возвращает псевдослучайное число  в промежутке от 0 до 32 756

	}
}
void  Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void  Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void  PrintRaverse(int arr[], const int n)
{
	for (int i = n -1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void  PrintRaverse(double arr[], const int n)
{
	for (int i = n -1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double) Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double) Sum(arr, n) / n;
}
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
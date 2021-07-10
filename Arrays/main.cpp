#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"



#define ARRAYS_1
#define ARRAYS_2

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
	cout << "\n================= 2D arrays =====================\n";
	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}
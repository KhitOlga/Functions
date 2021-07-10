#include"FillRand.h"

void  FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		//Функция rand () возвращает псевдослучайное число  в промежутке от 0 до 32 756

	}
}
void  FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
		//Функция rand () возвращает псевдослучайное число  в промежутке от 0 до 32 756

	}
}
void  FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}

	}
}
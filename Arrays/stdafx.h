#pragma once
#include<iostream>
using namespace std;
#define tab "\t"

extern int g_a; //Глобальная переменная ее видят все функции, и ее может изменить любая функция
		//Поэтому использование глобальных переменных настоятельно НЕ рекомендуется DEPRECATED
		//поскольку неизвестно что в ней хранится

const int ROWS = 5;
const int COLS = 8;
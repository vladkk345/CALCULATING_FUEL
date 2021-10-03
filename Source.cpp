#include "Header.h"
#include <stdio.h>

static int mode;
static double distance;
static double fuel;

//---------------------------------------------------------------------

int set_mode(int param)
{
	if (param == 0 || param == 1)
	{
		mode = param;
	}
	else
	{
		if (mode == 0)
		{
			printf("Указан недопустимый режим. Используется режим %d (метрический).\n", mode);
		}

		if (mode == 1)
		{
			printf("Указан недопустимый режим. Используется режим %d (американский).\n", mode);
		}		
	}	
	return mode;
}

//---------------------------------------------------------------------

void get_info()
{
	if (mode == 0)
	{
		printf("Введите пройденное расстояние в километрах: ");
		scanf_s("%lf", &distance);
		printf("Введите объем израсходованного топлива в литрах: ");
		scanf_s("%lf", &fuel);
	}

	if (mode == 1)
	{
		printf("Введите пройденное расстояние в милях: ");
		scanf_s("%lf", &distance);
		printf("Введите объем израсходованного топлива в галлонах: ");
		scanf_s("%lf", &fuel);
	}
}

//---------------------------------------------------------------------

void show_info()
{
	if (mode == 0)
	{
		fuel = (fuel * 100) / distance;
		printf("Расход топлива состаляет %.2lf литров на 100 км\n", fuel);
	}

	if (mode == 1)
	{
		fuel = distance / fuel;
		printf("Расход топлива состаляет %.1lf мили на галлон\n", fuel);
	}
}

//---------------------------------------------------------------------

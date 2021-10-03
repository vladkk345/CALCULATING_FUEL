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
			printf("������ ������������ �����. ������������ ����� %d (�����������).\n", mode);
		}

		if (mode == 1)
		{
			printf("������ ������������ �����. ������������ ����� %d (������������).\n", mode);
		}		
	}	
	return mode;
}

//---------------------------------------------------------------------

void get_info()
{
	if (mode == 0)
	{
		printf("������� ���������� ���������� � ����������: ");
		scanf_s("%lf", &distance);
		printf("������� ����� ���������������� ������� � ������: ");
		scanf_s("%lf", &fuel);
	}

	if (mode == 1)
	{
		printf("������� ���������� ���������� � �����: ");
		scanf_s("%lf", &distance);
		printf("������� ����� ���������������� ������� � ��������: ");
		scanf_s("%lf", &fuel);
	}
}

//---------------------------------------------------------------------

void show_info()
{
	if (mode == 0)
	{
		fuel = (fuel * 100) / distance;
		printf("������ ������� ��������� %.2lf ������ �� 100 ��\n", fuel);
	}

	if (mode == 1)
	{
		fuel = distance / fuel;
		printf("������ ������� ��������� %.1lf ���� �� ������\n", fuel);
	}
}

//---------------------------------------------------------------------
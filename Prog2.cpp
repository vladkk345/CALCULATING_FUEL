// Prog2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <Windows.h>
#include "Header.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int mode;
	printf("Введите 0 для метрического режима или 1 для американского режима: ");
	scanf_s("%d", &mode);

	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Введите 0 для метрического режима иди 1 для американского режима");
		printf("(-1 для завершения): ");
		scanf_s("%d", &mode);

		if (mode > 1)
		{
			set_mode(mode);
			get_info();
			show_info();
			printf("Введите 0 для метрического режима иди 1 для американского режима");
			printf("(-1 для завершения): ");
			scanf_s("%d", &mode);
		}		
	}

	printf("Программа завершена.\n");
	return 0;
}


#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include "Struct.h"
#include "MyFunc.h"

int nz;

void main()
{
	FILE*file;
	setlocale(LC_ALL, "Ru");
	srand(time(NULL));
	while (true)
	{
		printf("Введите номер задания, 0 - для выхода "); scanf("%d", &nz);
		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	Создать бинарный файл, компонентами которого является структура, 
			содержащая следующие поля :
			a. наименование работы;
			b. выделенное количество часов на выполнение данной работы;
			c. реально затраченное время на выполнение работы;
			d. стоимость работы.
			e.Переписать бинарный файл так, чтобы увеличить стоимость работы на 20 % , 
			если работа была выполнена на 2 часа раньше запланированного времени*/
			work workD;
			strcat(workD.workName, "developmnt");
			workD.schTime = 12;
			workD.rTime = 10;
			workD.price = 1000.00;
			if ((file = fopen("data", "wb")) == NULL)perror("Ошибка открытия файла: ");
			else
			{

			}
		}
		else
		{
			red();
			printf("Такого задания не существует \n");
			white();
		}
	}
}
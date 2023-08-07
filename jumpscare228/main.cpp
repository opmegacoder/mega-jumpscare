#include "Windows.h"
#include <iostream>

using namespace std;

void pizdec()
{
	int gavno = 2773;
	for (int i = 0; i < gavno; i++)
	{
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
	}

}

void randomizator(int *udacha)
{
	srand(time(NULL));

	*udacha = rand() % 2 + 1;
}

void main()
{
	setlocale(LC_ALL, "RU");

	printf("здаров ты попал на телепорограмму недохакеросы здеся будет решатся судьба твоево монитора\n");

	int bebra = 0;

	Sleep(2000);

	printf("чтож начем...\n");
	
	randomizator(&bebra);

	printf("%d",bebra);

	if (bebra == 1 )
	{
		pizdec();
	}
	else if (bebra == 2)
	{
		printf("вам фартануло и масть у вас отличная!!!");
	}

	cin.get();





}

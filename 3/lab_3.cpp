//---------------3-------------------//
//Грайик квадратной функции y=x*x

#include <graphics.h> // Описание для графической функции
#include <conio.h>      // описание функций ввода-вывода с консоли 


int main()
{
	float x, y;
	// Автоматическое определение графических параметров
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "");     // Инициализируется графический режим

	x = -10; //Инициализируем x
	moveto(x, x * x); //Устанавливаем курсор

	do
	{
		y = x * x; //Формула для построения графиков
		lineto(x * 50 + getmaxx() / 2, getmaxy() / 2 - (y * 20));     // начало отрисовки графика
		x = x + 0.02;
	} while (x < 10);
	getch();                 // ожидание нажатия пользователем любой клавиши
	closegraph();        // выход из графического режима
	return 0;
}
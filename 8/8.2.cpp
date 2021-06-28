#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    char i;

    cout << "Введите букву: ";
    cin >> i;

    i = toupper(i); //преобразуем введнную букву в верхний регистр

    cout << "Буква в верхнем региистре: " << i << endl;

    system("pause");
    return 0;
}

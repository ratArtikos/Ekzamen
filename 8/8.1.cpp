#include <iostream>
using namespace std;

int main()
{
    int i, k;
    cin >> i;
    while (i > 0) {
        k = i % 10; //получаем остаток от деления на 10
        i = i / 10; //делим на 10, чтобы далее получить меньшее число для следующего остатка
        cout << k << endl; 
    }

system("pause");
return 0;

}

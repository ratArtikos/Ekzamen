//---------------2-------------------//

void stringCompress(char* src) {
    char* original;
    original = src;
    char* rst;
    rst = src;

    int histogram[256];
    for (int i = 0; i < 256; i++) {
        histogram[i] = 0;
    }


    int length = 0;
    while (*src != NULL) {
        length++;
        src++;
    }
    src = original;
    int j = 0;


    for (int i = 0; i < length; i++) {
        histogram[(int)src[i]]++;
        if (histogram[(int)src[i]] == 1) {
            rst[j] = src[i];
            j++;
        }

    }
    rst[j] = '\0';


    char* final;


    rst = original;
    int index = 0;
    char buffer[33];

    for (int i = 0; i < j; i++) {

        final[index] = rst[i];

        stringstream number;
        number << histogram[(int)rst[i]];
        cout << number.str() << endl;
        char* temp = new char[number.str().length() + 1];
        strcpy(temp, number.str().c_str());
        index++;
        cout << temp << endl;
        for (int k = 0; k < number.str().length(); k++)
        {
            final[index] = temp[k];
            index++;

        }

    }

    final[index] = '\0';
    src = original;

    if (index <= length) {
        for (int i = 0; i < index; i++)

            cout << final[i];
    }
    else {
        cout << src << endl;
    }

}


const int NN = 10;
void sort() {
    int Mas_2[NN];
    srand(10);
    for (int i = 1; i < NN; i++) Mas_2[i] = rand() % 144; 
    int tmp;
    for (int i = 1; i < NN; i++)
        for (int j = i; j > 0 && Mas_2[j - 1] > Mas_2[j]; j--)
        {                   
            tmp = Mas_2[j - 1];
            Mas_2[j - 1] = Mas_2[j];
            Mas_2[j] = tmp;
        };
}

#include <string>
#include <regex>
using namespace std;

string srt2_3 = "asdksdkdskkkkksdkkksdf"; 
test = regex_replace(test, regex("kk"), "klm"); // ������� "kk" �� "klm"
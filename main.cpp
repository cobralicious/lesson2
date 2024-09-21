// #include <iostream>
//
// int main()
// {
//     // указываем пространство имен для поиска
//     using namespace std;
//     cout << "Hello, World!" << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
//
// // определяем фк. и определение
// int DemoConsoleOutput()
// {
//     cout << "Простой строковой литерал" << endl;
//     cout << "Запись числа пять " << 5 << endl;
//     cout << "Запись деления" << 10/5 << endl;
//     cout << "примерно равно" << 22/7 << endl;
//     cout << "Более точно Пи равно " << 22.0/7 << endl;
//
//     return 0;
// }
//
// int main()
// {
//     // вызываем фк.
//     DemoConsoleOutput();
// }


#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Объявление переменной дпя хранения целого числа
    int inputNumber;

    cout << "Input int num: ";

    //Сохранить введенное пользователем целое число
    cin >> inputNumber;

    //Аналогично текстовым данным
    cout << "Input your name: ";
    string inputName;
    cin >> inputName;

    cout << inputName << " inputed " << inputNumber << endl;

    return 0;
}
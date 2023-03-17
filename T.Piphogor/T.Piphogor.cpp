#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Программа предназначенная для решения задач с помощью Теоремы Пифагора" << endl;
    cout << "Если переменная неизвестна - введите 0" << endl;
    float a;
    float b;
    float c;
    cout << "Гиппотенуза a=";
    cin >> a;
    cout << "Катет b=";
    cin >> b;
    cout << "Катет c=";
    cin >> c;
    cout << "Выбор треугольника\nТреугольник равнобедренный - 0\tТреугольник неравнобедренный - 1" << endl;
    int variant;
    cin >> variant;
    if (variant == 1)
    {
        if (a == 0) a = sqrt(pow(b, 2) + pow(c, 2));
        if (b == 0) b = sqrt(pow(a, 2) - pow(c, 2));
        if (c == 0) c = sqrt(pow(a, 2) - pow(b, 2));
    }
    if (variant == 0)
    {
        b = sqrt(pow(a, 2) / 2);
        c = sqrt(pow(a, 2) / 2);
    }
    cout << "Гиппотенуза a=" << a << endl;
    cout << "Катет b=" << b << endl;
    cout << "Катет c=" << c << endl;
    int exit;
    cout << "Чтобы закрыть программу напишите 0" << endl;
    cin >> exit;
    while (exit != 0)
    {
        cout << "Ошибка, чтобы закрыть программу напишите 0" << endl;
        cin >> exit;
    }
}





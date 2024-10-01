using namespace std;
#include <iostream>


int main()
{
    float a, b, res;
    cout << "enter first dsget: \n";
    cin >> a;
    cout << "enter second deget: \n";
    cin >> b;
    //реализация меню
    char key;
    cout << "\n + see Sum \n";
    //..............
    //ввод оператора
    cin >> key;
    //реализация swich
    switch (key)
    {
    case '+':
        res = a + b;
        cout << res;
        break;
    case '-':
        res = a - b;
        cout << res;
        break;
    case '*':
        res = a * b;
        cout << res;
        break;
    case '/':
        res = a / b;
        cout << res;
        break;
    }
}

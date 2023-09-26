#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    float num,a1,a2;
    //int b, c;
    //char a;
    //cout << "Введите действие:\n ";
    //cin >> a;
    //cout << "Введите числа\n";
    //cin >> b;
    //cin >> c;
    //switch (a) {
    //case '+':
    //    cout << b + c;
    //    break;
    //case '-':
    //    cout << b - c;
    //    break;
    //case '*':
    //    cout << b * c;
    //    break;
    //case '/':
    //    if (c == 0) cout << "На ноль делить нельзя";
    //    else cout << b / c;
    //    break;
    //default:
    //    cout << "Введено неверное действие ";
    //}

     //   cin >>a1>>a2>>a3;
     //if (a1>a2)  swap(a1, a2);
     //if (num >= a1) {
     //    if (num <= a2) {
     //        cout << "yes";
     //    }
     //    else cout << "no";
     //}
     //else {
     //    cout << "no";
     //}
    cout << "intput number: ";
    cin >> num;
    cout << "input rabge: ";

    cin >> a1 >> a2;
    if (a1 > a2) swap(a1, a2);
    //реализация определения принадлежности диапазона
    //c использованием дизьюнкции
    if (num > a2 || num < a1)cout << "no";
    cout << num << "is not in range[" << a1 << ";" << a2 << "]";
    else
    cout << num << "is in range[" << a1 << ";" << a2 << "]";
    //реализация определения принадлежности диапазона
    //c использованием коньюнкции
    if (num >= a1 && num <= a2)cout << "yes";
        cout << num << "is not in range[" << a1 << ";" << a2 << "]";
    else
        cout << num << "is in range[" << a1 << ";" << a2 << "]";


   
}
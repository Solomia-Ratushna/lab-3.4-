// Lab_03_4.cpp
// < ������� ������ >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 0.1
#include <iostream>
using namespace std;
int main()
{
    double x; // ������� ��������
    double y; // ������� ��������
    double R; // ������� ��������
    double x1;
    double y1;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    if (((y > -R && x < R / 2) && y > -(x * 2)) || ((y > -R && x > R / 2) && y > -((R - x) * 2)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
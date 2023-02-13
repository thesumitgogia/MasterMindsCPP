#include <iostream>
using namespace std;
int area(int);
int area(int, int);
int area(int, int, int);
int main()
{
    int side;
    cout << "Enter side of Square: " << endl;
    cin >> side;
    area(side);

    int length, breadth;
    cout << "Enter length and breadth of Rectangle: " << endl;
    cin >> length >> breadth;
    area(length, breadth);

    int side1, side2, side3;
    cout << "Enter three sides of Triangle: " << endl;
    cin >> side1 >> side2 >> side3;
    area(side1, side2, side3);

    return 0;
}

int area(int a)
{
    cout << "Area of Square: " << a * a << endl;
}

int area(int a, int b)
{
    cout << "Area of Rectangle: " << (a * b) / .5 << endl;
}

int area(int a, int b, int c)
{
    cout << "Area of Triangle: " << (a + b + c) * 2 << endl;
}
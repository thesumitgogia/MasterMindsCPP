#include <iostream>
using namespace std;
class Rectangle
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sub(int a, int b)
    {
        return a - b;
    }

    int mul(int a, int b)
    {
        return a * b;
    }

    int div(int, int);
};
int main()
{
    int a, b;
    cout << "Hello World!";
    cin >> a >> b;
    return 0;
}

int Rectangle::div(int a, int b)
{
    return a / b;
}
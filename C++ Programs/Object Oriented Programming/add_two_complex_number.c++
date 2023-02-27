#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    float real, imag;

public:
    // ComplexNumber(/* args */);
    // ~ComplexNumber();

    int read();
    int add(ComplexNumber, ComplexNumber);
    int sub(ComplexNumber, ComplexNumber);
    int mul(ComplexNumber, ComplexNumber);
    // int div();
    int show();
};

int ComplexNumber::read()
{
    cout << "Enter Real and Imiaginary of Complex Numuber:" << endl;
    cin >> real >> imag;
    return 0;
};
int ComplexNumber::add(ComplexNumber C1, ComplexNumber C2)
{
    real = C1.real + C2.real;
    imag = C1.imag + C2.imag;
}
int ComplexNumber::sub(ComplexNumber C1, ComplexNumber C2)
{
    real = C1.real - C2.real;
    imag = C1.imag - C2.imag;
}
int ComplexNumber::show()
{
    if (imag > 0)
        cout << real << '+' << imag << 'i' << endl;
    else
        cout << real << imag << 'i' << endl;
}
int ComplexNumber::mul(ComplexNumber C1, ComplexNumber C2){
    real = C1.real * C2.real - C1.imag * C2.imag;
    imag = C1.real * C2.imag + C2.real * C1.real;
}

int main()
{
    ComplexNumber C1, C2, C3;
    C1.read();
    C2.read();
    // C3.add(C1, C2);
    // C3.show();
    // C3.sub(C1, C2);
    C3.mul(C1, C2);
    C3.show();

    return 0;
}
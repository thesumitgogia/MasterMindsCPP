#include <iostream>
using namespace std;
class sample
{
    int x, y; // private variables
public:
    sample(int a, int b) // constructor definition
    {
        x = a;
        y = b;
    }

    int sum(sample s) // function defintion
    {
        int sum;
        sum = s.x + s.y; // access
        return sum;
    }
};

int main()
{
    sample obj(2, 3);
    int res = obj.sum(obj); // function calling
    cout << "sum=" << res << endl;
    return 0;
}

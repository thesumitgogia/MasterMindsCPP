#include <iostream>
using namespace std;

class time
{
private:
    int hours, minutes;

public:
    void read();
    void add_time(time, time);
    void print();
};
int main()
{
    time t1, t2, t3;
    t1.read();
    t2.read();
    t3.add_time(t1, t2);
    t3.print();
    return 0;
}
void time::read()
{
    cout << "Enter hours and minutes: ";
    cin >> hours >> minutes;
}
void time::print()
{
    cout << hours << '\t' << minutes;
}


void time::add_time(time tt1, time tt2)
{
    hours = tt1.hours + tt2.hours;
    minutes = tt1.minutes + tt2.minutes;
    if (minutes > 60)
    {
        hours = hours + 1;
        minutes = minutes - 60;
    }
}
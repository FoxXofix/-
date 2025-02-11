#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void fun(float x, float& p, float& s)
{
    p = x * 4;
    s = x * x;
}

int main()
{
    float a, p, s;
    cout << "a = ? \n";
    cin >> a;
    fun(a, p, s);
    cout << (p >= s ? "p > s" : "s < p") << endl;
    return 0;
}
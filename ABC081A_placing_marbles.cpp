// Contest url : https://atcoder.jp/contests/abs/tasks/abc081_a

#include<iostream>
using namespace std;
int main()
{
    // First input (int)
    int input, a, b, c;
    cin >> input;
    // Calculate product
    a = input % 10;
    b = (input % 100 - a) / 10;
    c = (input - a - b) / 100;
    // Output
    cout << a + b + c;
    return 0;
}
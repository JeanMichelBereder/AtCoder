#include<iostream>
using namespace std;
int main()
{
    // First input (int)
    int a, b;
    cin >> a >> b;
    // Calculate product
    int p;
    p = a * b;
    // Output
    if (p%2==0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    char a[10] = "Ghost";
    char b[10] = "";

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[5-i-1];
    }

    cout << b;
}

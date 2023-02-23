#include <iostream>

using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    int x;
    cin >> x;
    int i = 0;
    int c = -1;

    while (i < 5)
    {
        if (a[i] == x)
        {
            c = i;
            break;
        }
        else
        {
            i++;
        }
    }
    if (c == -1)
    {
        cout << " No such element found.";
    }
    else
    {
        cout << x << " found at " << c;
    }
}

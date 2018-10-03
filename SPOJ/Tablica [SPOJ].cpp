#include <iostream>
using namespace std;

int main()
    {
    int tab[100];
    int a;
    int b=0;
    while(cin >> a)
    {
        tab[b] = a;
        b++;
    }
    for (int i=b-1; i>=0;i--)
    {
        cout << tab[i] << " ";
    }
	return 0;
    }

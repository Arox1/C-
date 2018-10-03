#include <iostream>

using namespace std;

int main()
{
    int32_t a,b;
    char wybor;
    while(cin >> wybor >> a >> b)
    if(b==0)
    {
        cout << "Error." << endl;
    }
    else{
    {
        switch(wybor)
        {
       case '+':
        cout << a+b << endl;
        break;

       case '-':
        cout << a-b << endl;
        break;

       case '*':
        cout << a*b << endl;
        break;

       case '/':
        cout << a/b << endl;
        break;

       case '%':
        cout << a%b << endl;
        break;
        }
    }
    }
    return 0;
}

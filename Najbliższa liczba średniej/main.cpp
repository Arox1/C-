/*
Program pobiera 5 liczb a nastêpnie:
- wyswietla je
- sumuje
- wyciaga srednia
- wykazuje najwieksza z liczb
- wskazuje liczbe nablizsza sredniej wpisanych liczb
(wykorzystanie biblioteki math.h i funkcji fabs)
[fabs - zwraca wartosc bezwzgledna liczby zmiennoprzecinkowej jaka jest float,
dzieki czemu porownywane sa tylko dodatnie liczby]
*/

#include <iostream>
#include <math.h>
using namespace std;
float a,b,c,d,e,m;
float srednia;
float najblizej;
int main()
{
    cout << "Podaj 5 liczb po spacji." << endl;
    cin >> a>>b>>c>>d>>e;
    cout << "Twoje liczby to: " <<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<< endl;
    cout << "Suma tych liczb to: " << a+b+c+d+e <<endl;
    srednia = (a+b+c+d+e)/5;
    cout << "Srednia z tych liczb to: " << srednia <<endl;
    m=a;
    if (b>m) m=b;
    if (c>m) m=c;
    if (d>m) m=d;
    if (e>m) m=e;
    cout << "Najwieksza z tych liczb to: "<<m<<endl;
    najblizej=a;
    if(fabs(srednia-b)<(srednia-a))         najblizej=b;
    if(fabs(srednia-c)<(srednia-najblizej)) najblizej=c;
    if(fabs(srednia-d)<(srednia-najblizej)) najblizej=d;
    if(fabs(srednia-e)<(srednia-najblizej)) najblizej=e;
    cout << "Liczba najblizsza sredniej to: " <<najblizej<<endl;
    return 0;
}

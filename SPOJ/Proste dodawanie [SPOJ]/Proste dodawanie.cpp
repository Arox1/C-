#include <iostream>

using namespace std;

int main()
{
    int l_testow;
    int ile_liczb;
    cout << "Podaj liczbe testow: ";
    cin >> l_testow;
    cout << "Liczba testow: " << l_testow << endl;
    for(int u=0; u<l_testow; u++)
    {
        cout << "Podaj ilosc liczb do zsumowania: ";
        cin >> ile_liczb;
        cout << "Ilosc liczb do zsumowania: " << ile_liczb << endl;
        int tab[ile_liczb];
        int suma=0;
        for(int i=0; i<ile_liczb; i++)
        {
          cout << "Podaj " << i+1 << " liczbe: ";
          cin >> tab[i] ;
          suma=suma+tab[i];
        }
        cout << "Suma podanych liczb wynosi: " << suma << endl;
    }
    return 0;
}

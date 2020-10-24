#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tab_1[2][3], tab_2[2][3];

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "Podaj wartosc w pierwszej macierzy na pozycji " << i + 1 << "x" << j + 1 << endl;
            cin >> tab_1[i][j];
            cout << "Podaj wartosc w drugiej macierzy na pozycji " << i + 1 << "x" << j + 1 << endl;
            cin >> tab_2[i][j];
        }
    }

    int wynik[2][3];

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            wynik[i][j] = tab_1[i][j] + tab_2[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < 2; ++i)
    {
        cout << "|";
        for (int j = 0; j < 3; ++j)
        {
            cout << setw(10) << wynik[i][j];
        }
        cout << "|" << endl;
    }

    return 0;
}
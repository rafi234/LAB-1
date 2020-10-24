#include <iostream>
#include <cstring>

using namespace std;

int sprawdz_palindrom(char argv[], int k)
{
    int len = strlen(argv);
    if (len == 1)
    {
        cout << argv << " jest jedno wyrazowym palindromem" << endl;
        return 0;
    }
    for (int i = 0, j = len - 1; i < len / 2; ++i, --j)
    {
        if (argv[i] != argv[j])
        {
            cout << argv << " nie jest palindromem" << endl;
            return 0;
        }
    }
    cout << argv << " jest palindromem" << endl;
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "nie podano slowa do sprawdzenia" << endl;
        return 0;
    }

    for (int i = 1; i < argc; ++i)
        sprawdz_palindrom(argv[i], i);

    return 0;
}

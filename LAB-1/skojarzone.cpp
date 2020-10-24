#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Podaj dwie liczby aby sprawdzic czy sa one liczbami skojarzonymi: " << endl;
	
	int a, b;
	cin >> a >> b;
	int wynik_a = 0, wynik_b = 0;

	for (int i = 1; i < (a / sqrt(2)); ++i)
	{
		if (a % i == 0)
			wynik_a += i;
	}
	for (int i = 1; i < (b / sqrt(2)); ++i)
	{
		if (b % i == 0)
			wynik_b += i;
	}

	if (wynik_a  == b +	1 && wynik_b  == a + 1)
		cout << "liczby sa skojarzone" << endl;

	return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
	bool stop = true;
	while (stop)
	{
		float masa, wzrost, BMI;
		cout << "Podaj swoja mase ciala w kilogramach: " << endl;
		cin >> masa;
		cout << "Podaj swoj wzrost w metrach: " << endl << endl;
		cin >> wzrost;

		BMI = masa / (wzrost * wzrost);

		if (BMI < 16.0)
			cout << "wyglodzenie" << endl << endl;
		else if (BMI >= 16.0 && BMI <= 16.99)
			cout << "wychudzenie" << endl << endl;
		else if (BMI >= 17.0 && BMI <= 18.49)
			cout << "niedowaga" << endl << endl;
		else if (BMI >= 18.5 && BMI <= 24.99)
			cout << "wartosc prawidlowa" << endl << endl;
		else if (BMI >= 25.0 && BMI <= 29.99)
			cout << "nadwaga" << endl << endl;
		else if (BMI >= 30.0 && BMI <= 34.99)
			cout << "I stopien otylosci" << endl << endl;
		else if (BMI >= 35.0 && BMI <= 39.99)
			cout << "II stopień otylosci" << endl << endl;
		else if (BMI > 40.0)
			cout << "otylosc skrajna" << endl << endl;

		cout << "Czy chcesz sprwadzic BMI ponownie?" << endl << "Jesli tak wcisnij T"<< endl << "Jesli nie wcisnij N" << endl << endl;

		char str;
		cin >> str;

		if (str == 'N' || str == 'n')
			stop = false;
		else if (str == 'T' || str == 't')
			stop = true;
		else { stop = false; cout << "bledna komenda" << endl; }

	}
	return 0;
}

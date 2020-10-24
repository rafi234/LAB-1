#include <iostream>

using namespace std;

void quick_sort(char **tab, int lewy, int prawy)
{
	if(prawy <= lewy) 
		return;
	
	int i = lewy - 1, j = prawy + 1, 
	pivot = atoi(tab[(lewy+prawy)/2]); 
	
	while(1)
	{
		while(pivot>atoi(tab[++i]));
			while(pivot<atoi(tab[--j]));
				if( i <= j)
					swap(tab[i],tab[j]);
				else
					break;
	}

	if(j > lewy)
		quick_sort(tab, lewy, j);
	if(i < prawy)
		quick_sort(tab, i, prawy);
}

int main(int argc, char *argv[])
{

	if (argc == 1)
	{
		cout << "Brak argumentow do posortowania";
		return 0;
	}
	
	quick_sort(argv, 1, argc-1);

	for(int i=0; i< argc; i++)
	{
		cout << argv[i] << endl;
	}
	return 0;
} 
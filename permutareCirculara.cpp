#include <fstream>
#include <iostream>
#define NMAX 100
using namespace std;
ifstream fin("numere.in");
int main()
{
	int n, i, v[NMAX], aux;
	fin >> n;
	for (i = 0; i < n; i++) fin >> v[i];
	fin.close();
	// permutez circular la stanga cu o pozitie
	// elementele din prima jumatate
	aux = v[0];
	for (i = 1; i < n/2; i++) v[i-1] = v[i];
	v[n/2-1] = aux;
	// permutez circular la dreapta cu o pozitie
	// elemtenele din a doua jumatate
	aux = v[n-1];
	for (i = n-1; i > n/2; i--) v[i] = v[i-1];
	v[n/2] = aux;
	// afisez vectorul
	for (i = 0; i < n; i++) cout << v[i] << ' ';
	return 0;
}

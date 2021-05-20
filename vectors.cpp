#include <iostream>
using namespace std;
int const n = 10;
class Wektor
{
	int rozm = 0;
	int pojemnosc = 0;
	int* arr = 0;

public:
	Wektor() {			//konstruktor domyślny pozwalający na utworzenie wektora liczb całkowitych składającego się z 6 elementów
		arr = new int[6];
		pojemnosc = 6;
		rozm = 0;
	}
	Wektor(int rozmiar) {  //konstruktor pozwalający na utworzenie wektora liczb całkowitych składającego się z n elementów
		rozmiar = n;
		arr = new int[n];
		pojemnosc = n;
	}
	Wektor(const Wektor& wektor) { //konstruktor kopiujący tworzony jest po to żeby nie zmieniać wartości wektora,
 //następuje kopiowanie wartości do innego miejsca w pamięci 
		arr = wektor.arr;
		pojemnosc = wektor.pojemnosc;
		rozm = wektor.rozm;
	}
	~Wektor() {
	}; //destruktor, jest on potrzebny do czyszczenia pamięci po użyciu wektora



	int il_skalar(Wektor& a, Wektor& b) // funkcja obliczania iloczynu skalarnego
	{
		int wynik = 0;

		for (int i = 0; i <= rozm; i++) {
			wynik += (a[i] * b[i]);
		}
		cout << "Iloczyn skalarny wektorow wynosi " << wynik << endl;
	}
	int liczb_element(Wektor& a)
	{
		cout << "liczba elementow: " << rozm << endl;
	}
	Wektor operator+(const Wektor& a) { //przeciążenie operatora dodawania
		Wektor ret = a;
		for (int i = 0; i < rozm; i++)
			ret.arr[i] += this->arr[i];

		return ret;
	}
	Wektor operator-(const Wektor& a) {//przeciążenie operatora odejmowania
		Wektor ret = *this;
		for (int i = 0; i < rozm; i++)
			ret.arr[i] -= a.arr[i];

		return ret;
	}
	Wektor operator++(int) {	//przeciążenie operatora zwiększania
		for (int i = 0; i < rozm; i++)
			arr[i]++;

		return *this;
	}
	Wektor operator--(int) {	//przeciążenie operatora zmniejszania
		for (int i = 0; i < rozm; i++)
			arr[i]--;

		return *this;
	}
	int& operator[](int indeks) { //przecizenie operatora indeksowania
		return arr[indeks];
	}
};

int main()
{

	//przypisanie wartosci wektorow
	Wektor x;
	for (int i = 0; i <= n; i++)
	{
		x[i];
	}

	Wektor y;
	for (int j = n; j >= 0; j--)
	{
		y[j];
	}


	cout << endl << "Dodawanie " << x + y << endl << "Odejmowanie " << x - y << endl << "Zwiekszanie " << y++ << endl << "Zmniejszenie " << y-- << endl;

}
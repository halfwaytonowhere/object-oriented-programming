// labki2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <iomanip>
#include <assert.h>
#include <algorithm>

using namespace std;

mt19937 gen(chrono::system_clock::now().time_since_epoch().count());
uniform_real_distribution<double>distribution{ -1.0,1.0 };
uniform_real_distribution<double> distr{ -10.0,10.0 };


class Point2d{

	float xp, yp; 
public:
	Point2d(float x=0, float y=0): xp{x}, yp{y}
	{}
	float get_xp(void) const { return xp; }
	float get_yp(void) const { return yp; }
	void set_xp(float x) { xp = x; }
	void set_yp(float y) { yp = y; }
};
class Circle {

	float xo, yo, ro;
public:
	Circle(float x=0, float y=0, float r=1): xo{x},yo{y},ro{r}
	{}
	float get_x(void) const { return xo; }
	float get_y(void) const { return yo; }
	float get_r(void) const { return ro; }
	void set_x(float x) { xo = x; }
	void set_y(float y) { yo = y; }
	void set_r(float r) { ro = r; }

	bool is_inside(const Point2d& p) {
		float x_p = p.get_xp();
		float y_p = p.get_yp();
		float rp;

		rp = sqrt((xo - x_p) * (xo - x_p) + (yo - y_p) * (yo - y_p));

		if (rp > ro) {
			//cout << "Punkt znajduje sie poza okregiem" << endl;
			return false;
		}
		else {
			//cout << "Punkt znajduje sie wewnatrz okregu" << endl;
			return true;
		}

	}

};


class TQuadEq {
private:
	double a, b, c;
	//mutable double delta;
public:


	TQuadEq(double x1 = 1, double x2 = 2, double x3 = 1) :a{ x1 }, b{ x2 }, c{ x3 }
	{}
	double get_a(void) const { return a; }
	double get_b(void) const { return b; }
	double get_c(void) const { return c; }
	void set_a(double x1) { a = x1; }
	void set_b(double x2) { b = x2; }
	void set_c(double x3) { c = x3; }

	TQuadEq()
	{}

	double CoputeDelta(void) const {

		return (b * b) - (4 * a * c);
	}

	int GetNumRoots(const double delta) const {
			if (sqrt(delta) < 0)
			return 0;
		else if (sqrt(delta) == 0)
			return 1;
		else
			return 2;
	}

	void Getroots(double& root1, double& root2) const {
		double delta = CoputeDelta();
		if (GetNumRoots(delta) == 1) {
			root1= -b / (2 * a);
		}
		else if (GetNumRoots(delta) == 2) {
			root1= (-b - sqrt(delta) / 2 * a);
			root2= (-b + sqrt(delta) / 2 * a);
		}
	}
};

class SmartArray {
	float* tab = new float[100];
	int rozmiar_tab;
public:
	SmartArray(int size_tab) : rozmiar_tab{ size_tab }
	{
		for (int i = 0; i < size_tab; i++)
		{
			tab[i] = distr(gen);
		}
		cout << "Obiekt został utworzony." << endl;
		cout << "Wartości argumentów konstruktora: Wielkość tablicy - " << size_tab << endl;
	}
	SmartArray(const SmartArray& kopia) {
		tab = new float[kopia.rozmiar_tab];
		rozmiar_tab = kopia.rozmiar_tab;
		for (int i = 0; i < rozmiar_tab; i++) {
			tab[i] = distr(gen);
		}
		cout << "Obiekt utworzono przez kopie konstruktora." << endl;
	}
	~SmartArray() {
		cout << "Wywolanie destruktora" << endl;
	}

	double at(int indeks) {
		assert(indeks);
		assert(indeks >= 0 && indeks <= rozmiar_tab);
		return tab[indeks];
	}
	void ustawelement(int indeks, double element) {
		tab[indeks] = element;
	}
	double maksymalnawartosc() {
		double maksimum = 0;
		for (int i = 0; i < rozmiar_tab; i++) {
			if (tab[i] > maksimum) {
				maksimum = tab[i];
			}

		}return maksimum;
	}
	void print() {
		cout << "Wartosci tablicy:" << endl;
		for (int i = 0; i < rozmiar_tab; i++)
			cout << i << " . \t" << tab[i] << endl;

	}
};

int main()
{
	/*
	int n_w_okregu = 0;
	srand(time(NULL));

	Point2d p(2,4);
	Circle kolo(0,0,5);
	int n_prostokata;
	cout << "Podaj liczbe do rozkladu monte carlo" << endl;
	cin >> n_prostokata;

	for (int i = 0; i < n_prostokata; i++) {
		float x = distribution(gen);
		float y = distribution(gen);
		Point2d punkt(x, y);
		Circle kolo2(0, 0, 1);

		if (kolo2.is_inside(punkt) == true) n_w_okregu++;

	}
	float liczba_pi = 4.0 * n_w_okregu / n_prostokata;
	cout << "Liczba Pi wynosi " << setprecision(10) << liczba_pi << endl;
	*/
	float a, b, c;
	cout << "Wprowadz wspolczynniki trojmianu kwadratowego, a :" << endl;
	cin >> a;
	cout << "b : " << endl;
	cin >> b;
	cout << "c : " << endl;
	cin >> c;
	double root1, root2;
	TQuadEq rownanie(a, b, c);

	cout << rownanie.CoputeDelta() << endl;
	cout << rownanie.GetNumRoots(rownanie.CoputeDelta()) << endl;
	rownanie.Getroots(root1, root2);
	cout << root1 << endl << root2 << endl;

	/*SmartArray arr = SmartArray(16);
	arr.print();
	arr.ustawelement(15, 10.4243);
	arr.print();
	cout << "Element pod indeksem 4" << ": " << arr.at(4) << endl;
	cout << "Maksymalna wartosc w tablic: " << arr.maksymalnawartosc() << endl;
	SmartArray arr2 = SmartArray(arr);
	arr2.print();
	*/





}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
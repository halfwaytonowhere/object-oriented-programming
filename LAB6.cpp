// LABORATORIUM6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int factorial(int n) 
{
	if (n > 1) return n * factorial(n - 1);
	else return 1;
}

class Complexnum {
private:
	int _re, _im;
public:
	Complexnum(int re = 1, int im=0) : _re{re}, _im{im} {}
	int get_re() const { return _re; }
	int get_im() const { return _im; }
	void set_re(int re) { _re = re; }
	void set_im(int im) { _im = im; }

	Complexnum& operator= (const Complexnum& copy)
	{
		if (this != &copy)
		{
			_re = copy._re;
			_im = copy._im;
		}
		return *this;
	}
	Complexnum& operator++ ()
	{
		++_re;
		++_im;
		return *this;
	}
};

Complexnum operator+ (const Complexnum& cops, const Complexnum& copy)
{
	return Complexnum(cops.get_re() + copy.get_re(), cops.get_im() + copy.get_im());
}

bool operator== (const Complexnum& cops, const Complexnum& copy)
{
	return (cops.get_re() == copy.get_re(), cops.get_im() == copy.get_im());
}

istream& operator>> (istream& in, Complexnum& copy)
{
	int r, i;
	in >> r;
	in >> i;
	copy.set_re(r);
	copy.set_im(i);
	return in;
}

ostream& operator<< (ostream& out, Complexnum& copy)
{
	out << copy.get_re();
	out << copy.get_im();
	return out;
}
string reversestring(string line)
{
	string newline = "";
	int sizel = line.size();
	for (int i = sizel; i >= 0; i--)
	{
		newline.push_back(line[i]);
	}
	return newline;
}

int main()
{// Zadanie1.
	/*
	int number;
	cout << "Enter a number to count the factorial. \n";
	cin >> number;
	cout << factorial(number) << endl;

	
// Zadanie2.
	
	Complexnum num(10, 15);
	Complexnum numm(12, 1);
	Complexnum adds = num + numm;
	cout << adds;
		*/

// Zadanie3.
	
	string checks;
	cout << "Type any word" << endl;
	cin >> checks;
	cout << reversestring(checks) << endl;
	cout <<checks << endl; 
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

// lab1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
//#include <ctime>
#include <cmath>
#include <string>



using namespace std;

void dectobin(int liczba) {
	int licznik = 0, tab[63];
	do {
		tab[licznik++] = liczba % 2;
		liczba /= 2;
	} while (liczba!=0);
	for (int i = licznik - 1; i >= 0; i--)
		cout << tab[i];
}
// drugi sposob na bitach
void dec_to_bin( unsigned int l) {
	unsigned int licznik = 31;
	bool ok = false;
	while (licznik--){
		if (l >> licznik & 1 & !ok)
			ok = true;
		if (ok)
			cout << ((l >> licznik) & 1);


	} 
}
int main()
{/*
	float a, b, c, delta, x1, x2, x0;
	cout << "Podaj wspolczynnik a: " << endl;
	cin>>a;
	cout << " Podaj wspolczynnik b: " << endl;
	cin>>b;
	cout << " Podaj wspolczynnik c: " << endl;
	cin>>c;
	delta = (b * b) - 4 * a * c;
	x1 = (-b - sqrt(delta))/2*a;
	x2 = (-b + sqrt(delta))/2*a;
	x0 = -b / 2 * a;
	if (delta > 0)
		cout << "Dla podanych współczynników delta jest większa od zera i posiada dwa rozwiązania : \t" << "x1 = " << x1 << ", \t" << "x2= " << x2 << endl;
	else if (delta == 0)
		cout << "Dla podanych współczynników delta równa zero i równanie posiada jedno rozwiązanie: \t" << "x0 =" << x0 << endl;
	else
		cout << "brak rozwiązań dla podanych współczynników." << endl;
	zadanie2

	srand(time(NULL));
	int losowana= rand() % 101; 
	int wpisana;
	int proba=5;
	do {
		cout << "Odgadnij wylosowana liczbe. Proba nr " << proba << endl;
		cin >> wpisana;
		if (wpisana > losowana) { cout << "Twoja liczba jest wieksza niz wylosowana. Twoja liczba prob wynosi : "; proba--; cout<< proba << endl; }
		else if (wpisana < losowana) { cout << "Twoja liczba jest mniejsza niz wylosowana.Twoja liczba prob wynosi : "; proba--; cout<< proba << endl; }
		else { cout << "Gratulacje. Udalo Ci sie odgdnac liczbe. " << endl; proba = 0; }
	} while (proba > 0);
	
	zadanie3 
	
	 int liczbad;
	cout << "Wprowadz liczbe : " << endl;
	cin >> liczbad;
	cout << "Twoja liczba w zapisie binarnym wygląda następująco: ";
	dectobin(liczbad);
	cout << "Twoja liczba w zapisie binarnym wygląda następująco: ";
	dec_to_bin(liczbad);
	
	zadanie 7. 
	
	char opeerator;
	int x, y;
	cout << "Wprowadz jakie dzialanie matematyczne chcesz zastosowac:" << endl;
	cin >> opeerator;
	cout << "Wprowadz pierwsza liczbe: " << endl;
	cin >> x;
	cout << "Wprowadz druga liczbe: " << endl;
	cin >> y;
	switch(opeerator){
	case('*'):
		cout << x << " * " << y << " = " << x * y << endl;
		break;
	case('+'):
		cout << x << " + " << y << " = " << x + y << endl;
		break;
	case('/'):
		cout << x << " / " << y << " = " << x / y << endl;
		break;
	case('-'):
		cout << x << " - " << y << " = " << x - y << endl;
		break;
	default:
		cout << "nieznany operator" << endl;
		break;

	}
	
	zadanie 8.
	int n, m;
	cout << "Wprowadż dodatnia liczbe:" << endl;
	cin >> n;
	cout << "Wprowadz druga dodatnia liczbe:" << endl;
	cin >> m;

	for (int i = n; i <= m; i=i + n) {
		cout << i << endl;
	}

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

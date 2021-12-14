// lab3cd.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

void reversestring(string line)
{   
    if (line.size() == 0)
    {
        return;
    }
    reversestring(line.substr(1));
    cout << line[0];
}

bool isprime(int a, int o=2)
{
    return (o <= sqrt(a)) ? (a % o ==0 ) ? false : isprime(a, ++o) : true;
}



int main()
{// ZAdanie3.
    
    string check;
    cout << "Enter:" << endl;
    cin >> check;
    reversestring(check);
   
    /*
// Zadanie4.
    int a;
    cout << "Check if your number is prime : " << endl;
    cin >> a;
    cout << "Number " << a << (isprime(a) ? " is  " : " is not ") << "prime. \n";
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

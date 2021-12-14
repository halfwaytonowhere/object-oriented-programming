// LABORATORIUM5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{// Zadanie1.
    /*
    map<string, int> bookcall;
    string name;
    int number;

    while (true) {
        cout << "Enter name of a person you would like to call " << endl;

        cin >> name;

        if (name == "exit") break;
        
        if (bookcall.find(name) != bookcall.end())
            cout << " number : " << bookcall[name] << endl;
        else
        {
            cout << "Contatc doesnt exist. Please enter a number of " << name << endl;
            cin >>bookcall[name];
        }
    }
    */
// Zadanie2. 
    /*
    map<string, int> counter; 
    
    string sentence;

    cout << "Enter any sentence:" << endl;
    getline(cin, sentence);
    string helper = " ";
    for (auto element : sentence)
    {
        helper.push_back(element);
        counter[helper]++;
        helper = " "; 
    }
    for (auto element : counter)
    {
        string word = element.first;
        int count = element.second;
        cout << word << " :: " << count << endl;
    }
    */
// Zadanie3.

    multimap<string, int> lines;
    string words;
    int counts;
    int whichline = 0;
    string helper = " ";
    cout << "Enter some words, press enter after typing one word. If you want to end type in end" << endl;
    while (true) {
        whichline++;
        cout << "Enter word: " << endl;
        cin >> words;    
        if (words == "end")
        {
            for (auto element : lines)
            {
                words = element.first;
                whichline = element.second;

                cout << words << " => " << whichline << endl;
            }
            break;
        }
        lines.insert(pair<string,int>(words, whichline));
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

// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
#include <string>

using namespace std; 

vector<string> shop_list;

void printshoplist() {
    cout << "The shop list consist of :" << endl;
    for (int i = 0; i < shop_list.size(); i++)
    {
        cout << shop_list[i] << "  ";
    }
    cout << endl;
}
void printwektor(vector<double> v) {

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}
vector<double> sum(const vector<double> vect1,const vector<double> vect2)
{   
    vector<double> suma;  
    suma.resize(vect1.size());
    for (int i= 0; i< vect1.size(); i++)
    {
        suma[i] = vect1[i] + vect2[i];
    }
    return suma;
}
void printvector(vector<string> v) {

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}
void printv(vector<int> v) {

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}

int main()
{ // Zadanie 1.
/*
    mt19937 gen(chrono::system_clock::now().time_since_epoch().count());
    uniform_real_distribution<double>distribution{ -20.0,20.0 };

    shop_list.insert(shop_list.begin(), { "wine","beetroot","bananas", "sugar","chocolade","carrot" });
    printshoplist();

    int n = shop_list.size();
    cout << "Last positionf of the list " << shop_list[n - 1] << "will be removed."<< endl;
    shop_list.erase(shop_list.end()-1);
    printshoplist();


    shop_list.insert(shop_list.begin() + 2, { "coffe" });
    for (int i = 0; i < shop_list.size(); i++)
    {
        if (shop_list[i] == "sugar")
        {  
            shop_list.erase(shop_list.begin() + i );
            shop_list.insert(shop_list.begin() + i, { "sweets" });
        }
    }
    printshoplist();

    for (int i = 0; i < shop_list.size(); i++)
    {
        if (shop_list[i] == "chocolade")
        {
            shop_list.erase(shop_list.begin() + i);
        }
    }
    printshoplist();

    sort(shop_list.begin(), shop_list.end());
    printshoplist();

//  Zadanie2. 

    vector<double> vect1;
    vector<double> vect2;

    for (int i = 0; i < 10; ++i)
    {
        vect1.push_back(distribution(gen));
        vect2.push_back(distribution(gen));

    }
    printwektor(vect1);
    printwektor(vect2);

    printwektor(sum(vect1, vect2));
// Zadanie3. 

    vector<string> L1{ "0", "1"};
    vector<string> L2;

    for (int i = 0; i < L1.size(); ++i) L2.push_back(L1[i]);
    reverse(L2.begin(), L2.end());

    for (int i = 0; i < L1.size(); i++)
    {
        L1[i] = "0" + L1[i];
    }
    printvector(L1);
    for (int i = 0; i < L2.size(); i++)
    {
        L2[i] = "1" + L2[i];
    }
    printvector(L2);
     
    for (int i = 0; i < L2.size(); i++)
    {
        L1.push_back(L2[i]);
    }
    cout << "2-bit Gray Code : " << endl;
    printvector(L1);
    */
// Zadanie5. 
    cout << "Type in some integers. The amount of integers depends on you. When you want stop typing input -1.  " << endl;
    int inputs;
    int counter= 0;
    vector<int> vecc;
    do{
        
            cin >> inputs;
            cout << endl;
            if (inputs > 0)
            vecc.push_back(inputs);
        
    } while (inputs != (-1));
  
    vector<int>::iterator it;
    it = unique(vecc.begin(), vecc.end());
    vecc.resize(distance(vecc.begin(), it));
    printv(vecc); 

    vector<int> odds;

    for (int i = 0; i < vecc.size(); i++)
    {
        if (vecc[i] % 2 != 0)
        {
            counter++;
            odds.push_back(vecc[i]);
        }
    }
    cout << "Your vector: " << endl;
    printv(vecc);
    cout << "The amount of odds in your vector is" << counter << " and the odds are: " << endl;
    printv(odds);

    for (int i = 0; i < vecc.size(); i++)
    {
        vecc[i] = vecc[i] * (-1);
    }

    sort(vecc.begin(), vecc.end());
    reverse(vecc.begin(), vecc.end());
    cout << "Your vector after all changes looks like this: " << endl;
    printv(vecc);


    
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sl
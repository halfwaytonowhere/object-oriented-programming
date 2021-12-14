// laby3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string string_reverse(const string& in) {
    int leng = in.size();
    string newss = "";
    for (int i = 0; i< leng; i++) {
        newss += in[leng -i -1];

    }
    return newss;
}


int main()
{
   /*
****************************************************************************************************************
zadanie1.
****************************************************************************************************************
   
    string line;
    int licznik = 0;
    cout << "Wpisz dowolny tekst" << endl;
    getline(cin, line);
    for (int i = 0; i < line.size(); i++) {
        if (line[i] > '1' && line[i] < '9')
            licznik++;
        else
            continue;
    }
    if(licznik < 5 && licznik != 0)
        cout << "W podanym tekscie znajduja sie " << licznik << " cyfry. " << endl;
    else if(licznik == 1)
        cout << "W podanym tekscie znajduje sie " << licznik << " cyfra. " << endl;
    else
        cout << "W podanym tekscie znajduje sie " << licznik << " cyfr. " << endl;

****************************************************************************************************************
zadanie2.
****************************************************************************************************************
    string line;
    fstream file ("C:/Users/agata/OneDrive/Pulpit/jpo/dodo.txt");
    fstream file2("C:/Users/agata/OneDrive/Pulpit/jpo/mambo.txt");

    if (file.is_open()) {
        getline(file, line);
        file2 << string_reverse(line);
        file.close();
    }

****************************************************************************************************************
zadanie3.
****************************************************************************************************************
    
    string napis = "Congratulations Mrs.<name>, you and Mr.<name> are the lucky recipients of a trip for two to XXXXXXX. Your trip to XXX is already scheduled.";
    string szukaneslowa1="<name>";
    string nowe1 = "Smith";
    string szukaneslowa2="X";
    string nowe2 = "Siberia";
    string szukaneslowa3="lucky";
    size_t znalezionapozycja1 = napis.find(szukaneslowa1);
    do
    {
        napis.erase(znalezionapozycja1, szukaneslowa1.size());
        napis.insert(znalezionapozycja1, nowe1);
        znalezionapozycja1 = napis.find(szukaneslowa1, znalezionapozycja1 + szukaneslowa1.size());

    } while (znalezionapozycja1!=string::npos); 
    size_t znalezionapozycja2 = napis.find(szukaneslowa2);
    size_t pozycjaX;
    do
    {   
        pozycjaX = napis.find(" ", znalezionapozycja2);
        napis.erase(znalezionapozycja2, pozycjaX - znalezionapozycja2);
        napis.insert(znalezionapozycja2, nowe2);
        znalezionapozycja2 = napis.find(szukaneslowa2, pozycjaX);

    } while (znalezionapozycja2 != string::npos);
    size_t znalezionapozycja3 = napis.find(szukaneslowa3);
    do
    {
        napis.insert(znalezionapozycja3, "un");
        znalezionapozycja3 = napis.find(szukaneslowa3,znalezionapozycja3+szukaneslowa3.size());

    } while (znalezionapozycja3 != string::npos);

    napis.insert(140, " in December");
    cout << napis << endl;
    */
}


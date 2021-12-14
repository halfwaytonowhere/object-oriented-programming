// LABORATORIUM7.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include< exception>

using namespace std;
class Person {
private:
    string _name, _lastname;
    int _pid;
public:
    Person( string name, string lastname, int pid ) : _name{name}, _lastname{lastname}, _pid{pid} {}
    string get_name() const{ return _name; }
    string get_lastname() const{ return _lastname; }
    int get_pid() const { return _pid; }
    void set_name(const string& name) { _name = name; }
    void set_lastname(const string& lastname) { _lastname = lastname; }
    void set_pid(int pid) { _pid = pid ; }
 
    string to_string()
    {
        stringstream ss;
        ss<< "Name: " << _name << " Lastname: " << _lastname << " Personal id number: " << _pid << endl;
        string str = ss.str();
        return str;
    }

};
class Student: public Person {
private:
    string _fieldofstudy;
    int _indx;
public:
    Student(string name, string lastname, int pid, string fieldofstudy, int indx): Person(name,lastname,pid), _fieldofstudy{ fieldofstudy }, _indx{ indx } {}
    string get_fieldofstudy() const { return _fieldofstudy; }
    int get_indc() const { return _indx; }
    void set_fieldofstudy(const string& fieldofstudy) { _fieldofstudy = fieldofstudy; }
    void set_indx(int indx) { _indx = indx; }

    virtual string to_string()
    {
        stringstream ss;
        ss << "Name: " << get_name() << " Lastname: " << get_lastname() << " Personal id number: " << get_pid() << " Field of study: " << _fieldofstudy << " Index: " << _indx << endl;
        string str = ss.str();
        return str;
    }

};

ostream& operator<< (ostream& out, Student& student)
{
    out << "Name: " << student.get_name() << " Lastname: " << student.get_lastname() << " Personal id number: " << student.get_pid() << " Field of study: " << student.get_fieldofstudy() << " Study index: " << student.get_indc() << endl;
    return out;
}

void func(int a, int b, int c)
{
    double delta, x1, x2;
    try
    {
        delta = (b * b) - (4 * a * c);
        if (delta > 0)
        {
             x1 = (-b - sqrt(delta)) / 2 * a;
             x2 = (-b + sqrt(delta)) / 2 * a;
            cout << x2 <<" "<< x1 << endl;
        }
        if (delta == 0)
        {
            cout<<((-b) / 2 * a)<<endl;
        }
        if (delta < 0)
        {
            throw " Equation has no real solution.";
        }
    }
    catch (const char* ex)
    {
        cerr << ex << endl;
    }
}

int main()
{/*
    Person person1("Axx", "Kxx", 9922311);
    Student stud("Oxx", "Pxx", 9931231, "Eit", 13213);

    cout << person1.to_string() << endl;
    cout << stud.to_string() << endl;
    cout << stud << endl;

    Person person("Mxx", "Lxx", 999922); 
    vector<Person> people{ person1, person, stud };
    
    for (auto element : people) cout << element.to_string() << endl;

    Student* student1 = new Student("Wxx", "Pxx", 123412, "Informatyka", 32131);
    Student* student2 = new Student("Gxx", "Qxx", 186712, "Informatyka", 66631);
    Student* student3 = new Student("Rxx", "Ixx", 421312, "Informatyka", 99131);
    Person* person2 = new Person("Wxx", "Pxx", 123412);

    vector<Person*> people2{person2,student1,student2,student3 };

    for (auto element : people2) cout << element->to_string() << endl;
    
    int x, y, z;
    cout << "Enter three values to compute their zero places." << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    func(x, y, z);
    
    string word;
    cout << "Enter a word: " << endl;
    cin >> word;
    int wordfrom = stoi(word,nullptr,16);
    cout << wordfrom;
    */
    string word;
    cout << "Enter a word: " << endl;
    cin >> word;
    stringstream ss;
    ss >> hex >> word;
    string str = ss.str();
    cout << "Value of your word: " <<str << endl;
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
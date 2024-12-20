#include<iostream>
#include<string>

using namespace std;

string randGrade()
{
    srand(time(0));
    int r = rand() % 9;
    switch (r)
    {
    case 0: return "A"  ; break;
    case 1: return "B+" ; break;
    case 2: return "B"  ; break;
    case 3: return "C+" ; break;
    case 4: return "C"  ; break;
    case 5: return "D+" ; break;
    case 6: return "D"  ; break;
    case 7: return "F"  ; break;
    case 8: return "W"  ; break;
    }
    return " ";
}

int main()
{
    cout << "Press Enter 3 times to reveal your future.";
    string t;
    getline(cin,t);
    getline(cin,t);
    getline(cin,t);
    cout << "You will get " << randGrade() << " in this 261102.";
}








#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phrase;
    cout << "Que voulez vous dire ?"<< endl;
    string& laphrase (phrase);
    getline(cin, phrase);
    cout << "vous avez dit: "<<phrase << " ou "<< laphrase <<endl;
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string pakietgranat;

int main()
{
    cout << "Sapt utility by NerStudio-PL-DE" << endl;
    cout << "Type the package name: ";
    cin >> pakietgranat;

    cout << "Installing: " << pakietgranat << endl;

    /* Czerwone Jabłuszko przekrojone na krzyż*/
    string komenda = "sudo apt install " + pakietgranat;
    system(komenda.c_str());

    return 0;
}

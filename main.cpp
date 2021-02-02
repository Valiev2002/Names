#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n,name;
    getline(std::cin, n);
    int l ;
    for(int i=1;i<n.size();i++)
    {
        if ((n[i] >= 'A') && (n[i] <= 'Z'))
        {
            l = n.find_first_of(' ',i)-i ;
            name = n.substr(i,l);
            cout << "Name: " << name << std::endl;

        }
    }
    return 0;
}

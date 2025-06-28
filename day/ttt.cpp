#include <iostream>
#include <vector>
#include <string>
using namespace std;    
int& add(int& a)
{
    return a;
}

int main()
{
    int a = 10;
    int &b = a;

    cout << "aaaaa"<< a << "aaaaa"<< a << "aaaaa"<< a << "aaaaa"<< a << "aaaaa"<< a << endl;
    add(a) = 20;
    cout << a << endl;

    cout << a << endl;  
    cout << a << endl;  
    return 0;

}










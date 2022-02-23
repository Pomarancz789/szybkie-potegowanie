#include <iostream>
using namespace std;

long long potega (int a, int b)
{
    if (b==0)
        return 1;
    else
        if (b%2==0)
            return potega(a, b/2)*potega(a, b/2);
        else
            return potega(a, b-1)*a;
}


int main() {
    int a=0;
    int b=0;
    
    cout << "podaj podstawe" << endl;
    cin >> a;
    cout << "podaj wykladnik" << endl;
    cin >> b;
    
    cout << potega(a, b) << endl;
    
    return 0;
}

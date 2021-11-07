#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num, x, res, q, t;
    int n, i, pos;
    
    cout<<"Proiect nr3, elaborat de Nicolai Driga" << endl;
    cout << "Tema: Binomul lui Newton \n" ;

    cout << "Input one number: ";
    cin >> num;
    x = num;
    
    cout << "Input power: ";
    cin >> n;
    cout << endl;

    if (n == 0)
    {
        res = 1;
    } else 
    {
        res = pos = 1;


        for (i=1; i<n; i++) 
        {
            if (i > 1) 
            {
                num *= x;
            } else
            {
                num = num;
            }
            pos *= i;
            t = num/pos;
            res = res + t;
            cout << "res" << i << " = " << t << endl; 
        }
    }



    cout << "Value x = " << x << " , n = " << n << " = " << res;
    cout << "\nVerify e^" << x << " = " << exp(x);

    return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double num, x, res, q, t;
    int n, i, pos;
    
    cout<<"Proiect nr3, elaborat de Nicolai Driga" << endl;
    cout << "Tema: descompunerea in serie Taylor \n" ;

    cout << "Input argument x: ";
    cin >> x;
    
    cout << "Input last number - last power: ";
    cin >> n;
    cout << endl;
    
    res = t = 1;

        for (i=1; i<n; i++) 
        {
            q = x/i;
            t *= q;
            res = res + t;
            cout << "res" << i << " = " << t << endl; 
        }



    printf ("Value of sum: (x = %5.2lf, n = %d)= %16.12lf", x, n, res);
    printf("\nVerify e^%5.2lf = %16.12lf", x, exp(x));

    return 0;
}
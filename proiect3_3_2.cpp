#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double Eps, x, res, q, t;
    int i, pos;

    cout<<"Proiect nr3, elaborat de Nicolai Driga" << endl;
    cout << "Tema: descompunerea in serie Taylor \n" ;

    cout << "Input argument x: ";
    cin >> x;
    
    cout << "Input pressicion: ";
    cin >> Eps;
    cout << endl;
    
    i = 0;
    res = t = 1;

    cout << "Eps = " << Eps << " t = " << t << endl;
    while (abs(t) > Eps) 
    {
        i++;
        q = x/i;
        t *= q;
        res = res + t;
        cout << "res" << i << " = " << t << endl; 
    }



    printf ("Value of sum: (x = %5.2lf, n = %d)= %16.12lf", x, i, res);
    printf ("\nVerify e^%5.2lf = %16.12lf", x, exp(x));

    return 0;
}
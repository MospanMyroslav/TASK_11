#include <iostream> 
#include <stdlib.h>
#include "Polinomial.h"
using namespace std;

int main()
{
   Polynomial a, b, c, t;
     setlocale(LC_ALL,"Russian");
   a.enterTerms();
   b.enterTerms();
   t = a;   
   cout << "Первый многочлен:\n";
   a.printPolynomial();
   cout << "Второй многочлен:\n";
   b.printPolynomial();
   cout << "\nДобавление доходность многочленов:\n";
   c = a + b;
   c.printPolynomial();
   cout << "\n+= многочлены доходности:\n";
   a += b;
   a.printPolynomial();
   cout << "\nВычитания доходность многочленов:\n";
   a = t;  
   c = a - b;
   c.printPolynomial();
   cout << "\n-= многочлены доходности:\n";
   a -= b;
   a.printPolynomial();
   cout << "\nУмножения многочленов доходности:\n";
   a = t;  
   c = a * b;
   c.printPolynomial();
   cout << "\n*= многочлены доходности:\n";
   a *= b;
   a.printPolynomial();
   cout << endl;
   system("pause");
}
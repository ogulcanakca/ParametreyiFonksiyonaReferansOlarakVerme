#include "dortgen.hpp"

#include <iostream>

using namespace std;
class dortgen {
public:
	dortgen(int i) :gen(i) {
		cout << this << ": dortgen()" << endl;
	}
	~dortgen() {
		cout << this << ": yokedici()"<< endl;

	}
	dortgen() {
		cout << this << ": dortgen()" << endl;
	}
	
	int gen;

};

void fonksiyon(const dortgen& d) {
	cout << &d << ": fonksion()" << endl;
}

int main()
{
	dortgen d1;
	fonksiyon(d1);
    
}

/* 
Onenote'taki türevlerine bak acil!.

Gördüðün gibi 2 farklý nesne oluþmuþ.
diye aray onenote'ta - Code is life -> C, Cpp extra-
*/
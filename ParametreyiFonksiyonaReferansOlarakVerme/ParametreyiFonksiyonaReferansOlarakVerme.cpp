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
	
	int gen;

};

void fonksiyon(const dortgen& d) {
	cout << &d << ": fonksion()" << endl;
}

int main()
{
	dortgen d1(8);
	fonksiyon(dortgen(5));
    
}

/* 
Onenote'taki türevlerine bak acil!.

https://demok-my.sharepoint.com/personal/2006102068_std_idu_edu_tr/_layouts/OneNote.aspx?id=%2Fpersonal%2F2006102068_std_idu_edu_tr%2FDocuments%2FO%C4%9EULCAN%20%40%20%C4%B0ZM%C4%B0R%20DEMOKRAS%C4%B0%20%C3%9CN%C4%B0VERS%C4%B0TES%C4%B0&wd=target%28Code%20is%20Life.one%7CE6D7DB85-A633-4EC7-BCF2-5EA1E0E3D857%2FC%2C%20C%2B%2B%20extra%7C3DCEC848-A512-4560-BAC5-D5ADD0D195DD%2F%29onenote:https://demok-my.sharepoint.com/personal/2006102068_std_idu_edu_tr/Documents/OÐULCAN%20@%20ÝZMÝR%20DEMOKRASÝ%20ÜNÝVERSÝTESÝ/Code%20is%20Life.one#C,%20C++%20extra&section-id={E6D7DB85-A633-4EC7-BCF2-5EA1E0E3D857}&page-id={3DCEC848-A512-4560-BAC5-D5ADD0D195DD}&object-id={95558536-E409-4214-8F17-31B898E3A7AC}&1D

*/
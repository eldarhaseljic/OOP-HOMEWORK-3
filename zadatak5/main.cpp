#include<iostream>
#include<string>
#include"radnik.h"
#include"baza.h"
using namespace std;

int main(int argc, char *argv[])
{
BazaRadnika b1;
cout << "Unesite ime platu i godine za radinka" << endl;
b1.ucitaj(cin);
if (b1.izbrisi_radnika("alen"))
cout << "alen izbrisan" << endl;
cout << "U Bazi su : " << endl;
b1.ispisi(cout);
cout << "Prosjek plata je: " << b1.prosjek_plata() << endl;
cout << "Prosjek godina je: " << b1.prosjek_godina() << endl;
  return 0;
}

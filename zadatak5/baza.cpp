#include"baza.h"
#include<iostream>
#include<string>

void BazaRadnika::ucitaj(std::istream & ulaz)
{
    radnik v;
    while(v.radnik::unesi(ulaz)){
      try{
for(std::vector<radnik>::iterator k=radnici.begin(); k !=radnici.end(); k++)
  if(v.ime()==(*k).ime()) throw std::domain_error("Greška, Radnik vec u bazi");
radnici.push_back(v);
}
catch (std::domain_error e){
  std::cout << e.what() << std::endl;
}
}
}

void BazaRadnika::ispisi(std::ostream& izlaz)
{
  sort(radnici.begin(), radnici.end(), poImenu);
  radnik x;
  for(std::vector<radnik>::iterator j=radnici.begin(); j!=radnici.end();j++)
  { 
    x=*j;
    x.ispis(izlaz);
  }
}

bool poImenu(const radnik &a, const radnik &b){
  return a.ime() < b.ime();
}

double BazaRadnika::prosjek_plata(){
  int duzina=radnici.size();
  double suma=0;
  for(std::vector<radnik>::iterator i=radnici.begin();i!=radnici.end();i++)
suma+=(*i).plata();
  return (suma/duzina);
}

double BazaRadnika::prosjek_godina(){
  int duzina=radnici.size();
  double suma=0;
for(std::vector<radnik>::iterator j=radnici.begin(); j!=radnici.end();j++)
  suma+=(*j).godine();
return (suma/duzina);
}

bool BazaRadnika::izbrisi_radnika(const std::string ime){
  for(std::vector<radnik>::iterator o=radnici.begin();o!=radnici.end();o++)
    if(ime == (*o).ime()){
      radnici.erase(o--);
        return true;}
}

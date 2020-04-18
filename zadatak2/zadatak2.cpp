#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
#include "ekipe.h"
#include "klub.h"
#include <algorithm>

template<typename T>
void provjera(T sezona,T liga)
{
  if(sezona <2000 || sezona >2016 || liga <1 || liga>4)
    throw std::invalid_argument("Greska pri unosu podataka.");
}

void provjerafajla(std::istream &in)
{
  if(in)
    std::cout << "Rezultati su ucitani!" << std::endl ;
  else
    throw std::logic_error("Rezultati se ne mogu otvoriti !");
}

void ucitaj(int sezona,int liga,std::vector<Timovi>& timovi,std::vector<Timovi>&zeljeni)
{
  int  i=0;
  while(true)
  { 
    if(timovi[i].sezona==sezona && timovi[i].liga==liga)
      break;
    ++i;
  }
  while(timovi[i].sezona==sezona && timovi[i].liga==liga)
  {
    zeljeni.push_back(timovi[i]);
    ++i;
  }
}
int main()
{
  std::ifstream in("engleska_liga.csv");
  provjerafajla(in);
  idinaprvired(in);
  std::vector<Timovi>timovi;
  int i=2;
  while(i<34614)
  {
    Timovi tim;
    ucitaj(in,tim);
    timovi.push_back(tim);
    ++i;
  }
  std::cout << "Unesite sezonu i ligu za prikaz tabele: " << std::endl ;
  int sezona,liga;
  while(std::cin >> sezona >> liga)
  {
    provjera(sezona,liga);
    std::vector<Zeljeni>klubovi;
    std::vector<Timovi>trenutni;
    ucitaj(sezona,liga,timovi,trenutni); 
    int k,g;
    for(int i=0;i<trenutni.size();++i)
    {
      if(!provjeratima(trenutni[i].domaci,klubovi,k))
      {
        Zeljeni klub;
        klub.nazivkluba=trenutni[i].domaci;
        klubovi.push_back(klub);
      }
      if(!provjeratima(trenutni[i].gosti,klubovi,g))
      {
          Zeljeni klub;
          klub.nazivkluba=trenutni[i].gosti;
          klubovi.push_back(klub);   
      }
      
      if(trenutni[i].rezultat=="H")
      {
      klubovi[k].pobjede+=1;
      klubovi[k].poeni+=3;
      klubovi[g].gubitak+=1;
      }
     else  
      if(trenutni[i].rezultat=="D")
        {
          klubovi[k].izjednaceno+=1;
          klubovi[k].poeni+=1;
          klubovi[g].izjednaceno+=1;
          klubovi[g].poeni+=1;
        } 
      else
        {
        klubovi[g].pobjede+=1;
        klubovi[g].poeni+=3;
        klubovi[k].gubitak+=1;
        } 
      klubovi[g].daligolova+=trenutni[i].golovigosti;
      klubovi[k].daligolova+=trenutni[i].golovidomaci;
      klubovi[k].primiligolova+=trenutni[i].golovigosti;
      klubovi[g].primiligolova+=trenutni[i].golovidomaci;
    }
   for(int i=0;i<klubovi.size();++i)
   {
    klubovi[i].razlikagolova=postavirazlikugolova(klubovi[i].daligolova,klubovi[i].primiligolova);
   }
  
   auto kriteriji1=[](struct Zeljeni &a,struct Zeljeni &b)
   {
     return a.poeni>b.poeni;
   };
   auto kriteriji2=[](struct Zeljeni  &a,struct Zeljeni &b)
   {
     return a.razlikagolova>b.razlikagolova;
   };  
   sort(begin(klubovi),end(klubovi),kriteriji2);
   sort(begin(klubovi),end(klubovi),kriteriji1);
   print(klubovi); 
    std::cout << "Unesite sezonu i ligu za prikaz tabele " << std::endl ;
  } 
  return 0;
}

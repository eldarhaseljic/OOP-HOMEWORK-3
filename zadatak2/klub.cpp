#include "klub.h"

bool provjeratima(std::string& naziv ,std::vector<Zeljeni>& timovi,int& a)
{
  bool d=false;
  a=timovi.size();
  for(int i=0;i<a;++i)
  {
    if(naziv==timovi[i].nazivkluba)
    {
      a=i;
      d=true;
      break;
    }
  }
  return d;
}

int postavirazlikugolova(int a,int b)
{
  return a-b;
}
void print(std::vector<Zeljeni>& klubovi)
{
  std::cout << std::endl << std::endl;
  std::cout << "POZ";
  std::string b(26,' ');
  std::cout << "\t" << "KLUB" << b;
  std::cout << "POB";
  std::cout << "\t" << "NER";
  std::cout << "\t" << "IZG";
  std::cout << "\t" << "PGOL";
  std::cout << "\t" << "PRGOL";
  std::cout << "\t" << "GR";
  std::cout << "\t" << "BOD" << std::endl; 
  for(auto i=0;i<klubovi.size();++i)
  {
    std::cout << i+1 << "." << " \t";
    std::string a(30-klubovi[i].nazivkluba.size(),' ');
    std::cout << klubovi[i].nazivkluba << a ;
    std::cout << klubovi[i].pobjede << "\t";
    std::cout << klubovi[i].izjednaceno << "\t";
    std::cout << klubovi[i].gubitak << "\t";
    std::cout << klubovi[i].daligolova << "\t";
    std::cout << klubovi[i].primiligolova << "\t";
    std::cout << klubovi[i].razlikagolova << "\t";
    std::cout << klubovi[i].poeni << std::endl ; 
  }
  std::cout << std::endl ;
}

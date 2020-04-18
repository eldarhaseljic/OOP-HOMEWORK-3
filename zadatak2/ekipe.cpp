#include "ekipe.h"

void idinaprvired(std::istream & in)
{
  std::string data;
  getline(in,data);
}

void ucitaj(std::istream& in,Timovi & tim)
{
  std::string d; 
  getline(in,d,','); 
  auto a=stoi(d,nullptr); 
  tim.sezona=a;
  getline(in,d,',');
  tim.domaci=d;
  getline(in,d,',');
  tim.gosti=d;
  getline(in,d,',');
  a=stoi(d,nullptr);
  tim.golovidomaci=a;
  getline(in,d,',');
  a=stoi(d,nullptr);
  tim.golovigosti=a;
  getline(in,d,',');
  a=stoi(d,nullptr);
  tim.liga=a;
  getline(in,d,'\n');
  tim.rezultat=d;

}
void print(Timovi & tim)
{
  std::cout << tim.sezona << "\t";
  std::cout << tim.domaci << "\t";
  std::cout << tim.gosti << "\t";
  std::cout << tim.golovidomaci << "\t";
  std::cout << tim.golovigosti << "\t";
  std::cout << tim.liga << "\t";
  std::cout << tim.rezultat << std::endl;
}
void print(std::vector<Timovi>&timovi)
{
  for(int i=0;i<timovi.size();++i)
  {
    std::cout << timovi[i].sezona << "\t";
    std::cout << timovi[i].domaci << "\t";
    std::cout << timovi[i].gosti << "\t";
    std::cout << timovi[i].golovidomaci << "\t";
    std::cout << timovi[i].golovigosti << "\t";
    std::cout << timovi[i].liga << "\t"; 
    std::cout << timovi[i].rezultat << std::endl ;
  }
}

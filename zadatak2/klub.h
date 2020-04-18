#ifndef _KLUB_H
#define _KLUB_H
#include "ekipe.h"

struct Zeljeni
{
  std::string nazivkluba;
  int pobjede{0};
  int izjednaceno{0};
  int gubitak{0};
  int daligolova{0};
  int primiligolova{0};
  int razlikagolova{0};
  int poeni{0};
};

void postavipoene(Timovi &,std::vector<Zeljeni>&);
bool provjeratima(std::string &,std::vector<Zeljeni>&,int &);
int postavirazlikugolova(int,int);
void print(std::vector<Zeljeni>&);
#endif

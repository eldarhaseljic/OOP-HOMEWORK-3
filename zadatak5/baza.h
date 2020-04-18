#ifndef _BAZA_H
#define _BAZA_H

#include<iostream>
#include"radnik.h"
#include<string>
#include<vector>
#include<stdexcept>
#include<algorithm>
class BazaRadnika {
  private:
    std::vector<radnik> radnici;

public:
    void ucitaj(std::istream &);
    void ispisi(std::ostream &);
    bool izbrisi_radnika(const std::string);
    double prosjek_plata();
    double prosjek_godina();
};
bool poImenu(const radnik &, const radnik &);
#endif

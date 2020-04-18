#ifndef _EKIPE_H
#define _EKIPE_H
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>

struct Timovi
{
  int sezona;
  std::string domaci;
  std::string gosti;
  int golovidomaci;
  int golovigosti;
  int liga;
  std::string rezultat;
};

void ucitaj(std::istream &,Timovi &);
void print(std::vector<Timovi>&);
void idinaprvired(std::istream &);
void print(Timovi &);
#endif

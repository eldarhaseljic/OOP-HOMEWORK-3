#ifndef _RADNIK_H
#define _RADNIK_H

#include<iostream>
#include<string>

class radnik{
  std::string _ime;
  double _plata;
  int _godine;

  public:
  std::istream& unesi(std::istream & ulaz);
  void ispis(std::ostream & izlaz);
  std::string ime() const {return _ime;}
  double plata() const {return _plata;}
  int godine() const {return _godine;}
};

#endif

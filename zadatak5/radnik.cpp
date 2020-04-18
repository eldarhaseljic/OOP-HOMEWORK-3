#include"radnik.h"
#include<iostream>
#include<string>

std::istream& radnik::unesi(std::istream& ulaz){
ulaz >> _ime >> _plata >> _godine;
return ulaz;}

void radnik::ispis(std::ostream & izlaz)
   {
    izlaz<< _ime<<" "<<_plata<<" "<<_godine<<std::endl;
   }

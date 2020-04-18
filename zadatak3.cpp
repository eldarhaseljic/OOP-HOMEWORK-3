#include<iostream>
#include<vector>

template<typename T,typename U>
U akumuliraj(T begin,T end,U init)
{
  while(begin!=end)
  {
    init+=*begin;
    ++begin;
  }
  return init;
}

int main(int argc, char *argv[])
{
  std::vector<int>elements;
  int init = 10;
  for(auto i=0; i <= init; ++i)
    elements.push_back(i);
  std::cout << "Unesite pocetnu neku  vrijednost : " << std::endl ; 

  std::cin >> init;
  std::cout << "Suma elemnenata vektora [1,...,10] i unesenog  broja jeste :";
  std::cout << akumuliraj(begin(elements),end(elements),init) << std::endl ;
  return 0;
}

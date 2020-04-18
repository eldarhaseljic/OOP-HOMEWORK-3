#include <iostream>
#include <vector>

template <typename T, typename U>
T particionisi(T begin,T end,U p)
  {
    while (begin!=end)
    {
      while(p(*begin))
      {
        ++begin;
        if(begin==end) return begin;
      }
      
      do
        {
          --end;
          if(begin==end) return begin;
        } while(!p(*end));
      
      auto it = *begin;
      *begin = *end;
      *end = it;
      ++begin;
    }
  return begin;
}

int main(int argc, char *argv[])
  {
    std::vector<int> v{13,21,53,45,51,16,75,80,95,101,54,268595};
    
    std::cout << std::endl;
    std::cout << "Elementi vektora prije fukcijce particionisi" << std::endl;
    
    for (auto it = v.begin();  it!=v.end(); ++it)
      {
        std::cout << *it << "\t";
      }
    std::cout << std::endl; 
    
    auto p = [](int i){return (i%5==0 || i%5==5) ;};
    
    auto it1 = particionisi(v.begin(),v.end(),p);
    std::cout << std::endl;
    std::cout << "Elementi vektora poslje funkcije particionisi"<< std::endl;
    
    for (auto it=v.begin(); it!=it1; ++it) 
      {
        std::cout << *it <<"\t"; 
      }
    for (auto it = it1; it!=v.end(); ++it) 
    { 
    std::cout << *it <<"\t";
    }
    std::cout << std::endl;
  return 0;
}

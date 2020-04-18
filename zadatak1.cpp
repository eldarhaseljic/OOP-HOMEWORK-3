#include<iostream>
#include<string>

template<typename T,typename U>
bool jendako(T it1,T it2,U it3)
{
  while(it1!=it2)
  {
    if(*it1!=*it3)
    { 
      return false;
    }
    ++it1;
    ++it3;
  }
  return true;
}

int main(int argc, char *argv[])
{
  std::cout << "Enter a word:" << std::endl;
  std::string word,tempWord;
  while(getline(std::cin,word))
  {
    int k=0;
    for(int i=word.size()-1;i>=0;--i)
    {  
      tempWord[i]=word[k];
      ++k;
    }
    if(jendako(word.begin(),word.end(),tempWord.begin()) )
      std::cout << word << ": Palindrom" << std::endl ;
  }
  return 0;
}

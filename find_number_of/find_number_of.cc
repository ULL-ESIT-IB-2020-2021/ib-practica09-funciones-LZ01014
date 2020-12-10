#include <iostream>
#include <cstring>



int NumberOfCharacter (std::string word, std::string character_to_find){
  int cout = 0;
  for (auto &character: word){
    if(character_to_find.find(character) == std::string::npos){
      cout++;
      continue;
    }
  }
  return cout;
}

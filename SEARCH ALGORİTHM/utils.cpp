#include <iostream> 
#include <cstring> 
using namespace std; 

string toLowerString(string text){//küçük harfe çevirir
   int length = text.length(); 
   for (int i = 0; i < length; i++) { 
      int c = text[i];
      text[i] = tolower(c);         
   }
   return text;
}

string toUpperString(string text){//büyük harfe çevirir
   int length = text.length(); 
   for (int i = 0; i < length; i++) { 
      int c = text[i]; 
      text[i] = toupper(c);         
   }
   return text;
}

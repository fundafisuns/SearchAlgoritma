#include <iostream> 
#include <cstring> 
using namespace std; 

string toLowerString(string text){//k���k harfe �evirir
   int length = text.length(); 
   for (int i = 0; i < length; i++) { 
      int c = text[i];
      text[i] = tolower(c);         
   }
   return text;
}

string toUpperString(string text){//b�y�k harfe �evirir
   int length = text.length(); 
   for (int i = 0; i < length; i++) { 
      int c = text[i]; 
      text[i] = toupper(c);         
   }
   return text;
}

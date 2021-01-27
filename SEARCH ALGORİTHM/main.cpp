#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
using namespace std; 
#include "searchFiles.h"
#include "writeOutput.h"
#include "utils.h"

int main() { 
    setlocale(LC_ALL, "Turkish"); 
    string filePath = "./deneme/";
	
	string outputFileName = getOutputFileName();
    fstream file;
    remove(outputFileName.c_str());
    file.open(outputFileName.c_str(), ios::out); //veriler geldikce sona ekler
    if(!file) { 
       cout<<"dosya a�ma hatas�!!!"; 
	   system("pause");
	   return 0; 
    } 
    file.close(); 
    // Cin>> Search Text
    string searchText;
    int count = 0;
    do {
       system ("CLS");
       if(count != 0){
          cout<<"Min 3 karakter giriniz!"<<endl;
       }
       count++;
       cout<<"L�tfen aramak istedi�iniz kelimeyi giriniz: "<<endl;
       cin>>searchText;
    } while(searchText.length() < 3);
    // Write OutputFile SearchText
    stringstream streamStr;
    streamStr << "------------------------- aran�yor: '";
    streamStr << searchText;
    streamStr << "' -------------------------";
    streamStr << "\n\n\n";
	writeOutputFile(streamStr.str());
    // Search Files
    
	searchFiles(filePath, searchText);
	// Run Output File
	string fileNeededtoBeOpened = "START .\\\""+outputFileName+"\"";//en son dosyaya her �eyi yaz�p ekrana vericek k�s�m
    system(fileNeededtoBeOpened.c_str());
    
	return 0; 
}
 

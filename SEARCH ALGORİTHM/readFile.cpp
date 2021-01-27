#include <iostream>
#include <fstream>
#include <cstring>
using namespace std; 
#include "searchAlgorithm.h"
#include "distanceAlgorithm.h"
#include "writeOutput.h"
#include "utils.h"

void readFile(string filePath, string searchText){
     fstream newfile;
     newfile.open(filePath.c_str(), ios::in); 
     if (newfile.is_open()){
         string tp;
         int line = 1;
         while(getline(newfile, tp)){;
	        searchAlgorithm(toUpperString(tp), toUpperString(searchText), line);
	        distanceAlgorithm(toLowerString(tp), toLowerString(searchText), tp, line);
	        line++;
         }
         newfile.close();
     }
}

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
#include "utils.h"

string getOutputFileName(){ 
    return "output.txt";
}

void writeOutputFile(string text){
     ofstream myfile;
     myfile.open (getOutputFileName().c_str(), fstream::app);//dosyanýn içerisindekileri yazdýrýr
     myfile << text << "\n";
     myfile.close();    
}


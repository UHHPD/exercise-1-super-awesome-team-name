#include <iostream>
#include <fstream>
#include <cmath>


void mean(){
    std::ifstream fin("datensumme.txt");
  std::ifstream fin2("datensumme.txt");
    std::ofstream fout("mittelwerte.txt");
    std::ofstream fout2("varianzen.txt");
      double sum = 0;
  int zahl = 0;
  for(int i = 0; i < 26; i++){
  double mean = 0;
        double var = 0;
        for(int j = 0; j < 9; j++){
            fin >> zahl;
            sum += zahl;
        }
            mean =sum/9;
 for(int i = 0; i < 9; i++){
    fin2 >> zahl;
    var += (zahl - mean)*(zahl - mean);
  }

       fout << mean << std::endl;
        fout2 << var <<std::endl;
        sum = 0; 
  }
  fin.close();
    fout.close();

}



double std_deviation(int N, double var){
  return sqrt(var);
}

int main(){
   mean();

}

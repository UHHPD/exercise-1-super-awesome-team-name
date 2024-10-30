#include <iostream>
#include <fstream>
#include <cmath>

double variance(int N, double mean){
  std::ifstream fin("datensumme.txt");
  double var = 0;
  int zahl = 0;
  for(int i = 0; i < N; i++){
    fin >> zahl;
    var += (zahl - mean)*(zahl - mean);
  }
  return var/N;
}

void mean(int N){
    std::ifstream fin("datensumme.txt");
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
            mean =sum/9;
        }
var = variance(9, mean);
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
    int N = 234;
   mean(N);

}

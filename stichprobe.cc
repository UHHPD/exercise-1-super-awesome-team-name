#include <iostream>
#include <fstream>
#include <cmath>



double mean(int N){
  std::ifstream fin("datensumme.txt");
  double sum = 0;
  
  int zahl = 0;
  
  
  double mean = 0;
  for(int i = 0; i <= N; i++){
    fin >> zahl;
    sum += zahl;
  }
//  std::cout << sum << std::endl;
  mean = sum/N;
  fin.close();
return mean;

}

double variance(int N, double mean){
  std::ifstream fin("datensumme.txt");
  double var = 0;
  int zahl = 0;
  for(int i = 0; i <= N; i++){
    fin >> zahl;
    var += (zahl - mean)*(zahl - mean);
  }
  return var/N;
}

double std_deviation(int N, double var){
  return sqrt(var);
}

int main(){
    int N = 234;
    std::cout << "Mean: " << mean(N) << std::endl;
    std::cout << "Variance: " << variance(N, mean(N)) << std::endl;
    std::cout << "Standard Deviation: " << std_deviation(N, variance(N, mean(N))) << std::endl;

}

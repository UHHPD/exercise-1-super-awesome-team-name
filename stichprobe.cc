#include <iostream>
#include <fstream>

std::ifstream fin("datensumme.txt");

double mean(int N){
  double sum = 0;
  
  int zahl = 0;
  
  
  double mean = 0;
  for(int i = 0; i <= N; i++){
    fin >> zahl;
    sum += zahl;
  }
//  std::cout << sum << std::endl;
  mean = sum/N;
  std::cout << mean << std::endl;
  fin.close();
return mean;

}

int main(){
  int N = 234;
  mean(N);
}

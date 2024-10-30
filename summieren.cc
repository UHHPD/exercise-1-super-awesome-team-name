#include <fstream>
#include <iostream>

std::ifstream fin("daten.txt");
std::ofstream fout("datensumme.txt");

int main() {
    for (int i = 0; i < 234; ++i) {
        int summe = 0;
        int zahl1;
        int zahl2;
        fin >> zahl1;
        fin >> zahl2;
        std::cout << zahl1 << " " << zahl2 << std::endl;
        summe = zahl1 + zahl2;
  fout << summe << std::endl;
  }
   fout.close(); 
    fin.close();
}

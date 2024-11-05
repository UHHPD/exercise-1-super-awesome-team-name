#include <iostream>
#include <fstream>
#include <cmath>

void mean_var() {
    std::ifstream fin("datensumme.txt");
    std::ifstream fin2("datensumme.txt");
    std::ofstream fout("mittelwerte.txt");
    std::ofstream fout2("varianzen.txt");

    double sum = 0;
    int num = 0;

    for (int i = 0; i < 26; i++) {
        double mean = 0;
        double var = 0;

        // Calculate the sum and mean
        for (int j = 0; j < 9; j++) {
            fin >> num;
            sum += num;
        }
        mean = sum / 9;

        // Calculate the variance
        for (int j = 0; j < 9; j++) {
            fin2 >> num;
            var += (num - mean) * (num - mean);
        }
        var = var / 9;

        fout << mean << std::endl;
        fout2 << var << std::endl;

        // Reset sum for the next iteration
        sum = 0;
    }

    fin.close();
    fin2.close();
    fout.close();
    fout2.close();
}

double std_deviation(int N, double var) {
    return sqrt(var);
}

void Mean_Var() {
    std::ifstream fin("mittelwerte.txt");
    std::ifstream fin2("varianzen.txt");

    double sum_mean = 0;
    double sum_var = 0;

    for (int i = 0; i < 26; i++) {
        double num_mean = 0;
        double num_var = 0;

        fin >> num_mean;
        fin2 >> num_var;

        sum_mean += num_mean;
        sum_var += num_var;
    }

    double Mean = sum_mean / 26;
    double Var = sum_var / 26;

    std::cout << "Mean of means: " << Mean << std::endl;
    std::cout << "Mean of variances: " << Var << std::endl;

    fin.close();
    fin2.close();
}

int main() {
    mean_var();
    Mean_Var();
    return 0;
}

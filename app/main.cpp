#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "average.h"

int main(int argc, char** argv) {
    std::string filename = "numbers.txt";
    std::ifstream file(filename);
    std::vector<double> numbers;
    double num;

    while (file >> num) {
        numbers.push_back(num);
    }

    std::cout << "Average: " << average(numbers) << std::endl;
    return 0;
}

//
// Created by Jasper Oh on 2024-09-10.
//

#include "cppExperimental.hpp"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void generateReadings(const char* filename) {
    ofstream outFile(filename);

    if (!outFile) {
        std::cerr << "Unable to open file for writing.\n";
        return;
    }

    // Seed for random number generation
    srand(std::time(0));

    int maxInteger = rand() % (1024 - 512 + 1) + 512;
    for (int i = 0; i <= maxInteger; ++i) {
        double randomDouble = 50.000 + static_cast<double>(rand()) / (RAND_MAX / (90.000 - 50.000));
        outFile << i << ' ' << std::fixed << std::setprecision(3) << randomDouble << '\n';
    }

    outFile.close();
}

void analyzeReadings(const char* filename) {
    std::ifstream inFile(filename);

    if (!inFile) {
        std::cerr << "Unable to open file for reading.\n";
        return;
    }

    vector<double> readings;
    int integerPart;
    double doublePart;

    while (inFile >> integerPart >> doublePart) {
        readings.push_back(doublePart);
    }

    inFile.close();

    if (readings.empty()) {
        std::cout << "No readings found in the file.\n";
        return;
    }

    std::sort(readings.begin(), readings.end());

    double sum = 0;
    for (double value : readings) {
        sum += value;
    }
    double average = sum / readings.size();
    double median = readings[readings.size() / 2];
    if (readings.size() % 2 == 0) {
        median = (readings[readings.size() / 2 - 1] + readings[readings.size() / 2]) / 2;
    }

    std::cout << "There are " << readings.size() << " readings in the file.\n";
    std::cout << "The average reading is " << std::fixed << std::setprecision(3) << average << ".\n";
    std::cout << "The highest reading is " << std::fixed << std::setprecision(3) << readings.back() << ".\n";
    std::cout << "The lowest reading is " << std::fixed << std::setprecision(3) << readings.front() << ".\n";
    std::cout << "The median reading is " << std::fixed << std::setprecision(3) << median << ".\n";
}
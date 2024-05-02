#include "average.h"

double average(const std::vector<double>& numbers) {
    double sum = 0.0;
    for (auto num : numbers) {
        sum += num;
    }
    return numbers.empty() ? 0.0 : sum / numbers.size();
}

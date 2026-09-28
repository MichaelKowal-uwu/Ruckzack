#include <iostream>
#include "knapsack_solver.h"

int main() {
    int n, capacity;
    if (!(std::cin >> n >> capacity)) return 0;

    KnapsackSolver solver(capacity, n);
    solver.readItems();

    std::cout << solver.solve() << std::endl;

    return 0;
}

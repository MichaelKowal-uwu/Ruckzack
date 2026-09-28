#ifndef KNAPSACK_SOLVER_H
#define KNAPSACK_SOLVER_H

#include <vector>

struct Item {
    int id;
    int weight;
    int value;
    double density;
};

class KnapsackSolver {
public:
    KnapsackSolver(int capacity, int n);
    void readItems();
    int solve();

private:
    int capacity;
    int n;
    std::vector<Item> items;
};

#endif

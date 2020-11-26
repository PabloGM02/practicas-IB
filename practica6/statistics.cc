#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

double random(double minimo, double maximo) {
    double x = (double)rand() / RAND_MAX;
    return minimo + x * (maximo-minimo);
}

int main() {
    srand(time(NULL));
    cout << random (0.0, 10.0) << endl;
    return 0;
}
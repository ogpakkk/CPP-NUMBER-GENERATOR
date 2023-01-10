#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int main() {
    srand(0);
    int range;
    cin >> range;
    int PIN[4];
    for (int i = 0; i < 4; i++) {
        PIN[i] = 1 + (rand() % range);
    }
    cout << PIN[0] << PIN[1] << PIN[2] << PIN[3] << endl;


    return 0;
}

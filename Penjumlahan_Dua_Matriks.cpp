#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x, y;
    cin >> x >> y;
    int angka[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> angka[i][j];
        }
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            int tmp;
            cin >> tmp;
            cout << tmp + angka[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int n, a, b;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> a >> b;
    swap(arr[a], arr[b]);
    
    for (const int &i : arr) {
        cout << i << ' ';        
    }
    
    return 0;
}

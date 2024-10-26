#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string nama[n];
    for (int i = n - 1; i >= 0; i--) {
        cin >> nama[i];
    }
    
    for (const string s : nama) {
        cout << s << " ";
    }
    
}

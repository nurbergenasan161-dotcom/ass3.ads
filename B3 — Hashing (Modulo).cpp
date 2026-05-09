#include <iostream>
using namespace std;

int main() {
    int table[7];

    for (int i = 0; i < 7; i++)
        table[i] = -1;

    int keys[] = {10, 20, 5, 15, 7, 32};
    int n = 6;

    for (int i = 0; i < n; i++) {
        int key = keys[i];
        int index = key % 7;

        while (table[index] != -1) {
            index = (index + 1) % 7;
        }

        table[index] = key;
    }

    cout << "Hash Table:" << endl;

    for (int i = 0; i < 7; i++) {
        cout << i << " -> " << table[i] << endl;
    }

    return 0;
}

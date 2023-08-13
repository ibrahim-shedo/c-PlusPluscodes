//upside down right triangle


#include <iostream>
using namespace std;

int main() {
    int height=5;
    
    for (int i = 0; i <= height; i++) {
        // Print spaces
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }

        // Print numbers
        for (int k = i; k < height; k++) {
            cout << k;
        }

        cout <<endl;
    }

    return 0;
}

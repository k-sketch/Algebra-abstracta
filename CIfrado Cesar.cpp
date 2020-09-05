#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int b;
    char a[30];
    char abc[] = "abcdefghijklmnñopqrstuvwxyz";
    cout << "ingresa la oracion a cifrar: "; cin >> a;
    for (int i = 0; i < strlen(a); i++) {
        b = 0;
        while (b < 27) {
            if (a[i] == abc[b] && b < 23) {
                a[i] = abc[b + 3];
                b = 26;
            }
            if (a[i] == abc[b] && (b >= 23 && b < 27)) {
                if (a[i] == 'x') {
                    a[i] = 'a';
                }
                if (a[i] == 'y') {
                    a[i] = 'b';
                }
                if (a[i] == 'z') {
                    a[i] = 'c';
                }
                b = 27;
            }
            b++;
        }
    }
    cout << "la oracion cifrada: " << a;
    return 0;
}
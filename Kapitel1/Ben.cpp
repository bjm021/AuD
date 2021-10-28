#include <iostream>

using namespace std;

// Aufgabe 1 a & b
int iterative(int n)
{
    int t = 0;
    for (int i = 1; i < n+1; i++) {
        t = t + i;
    }
    return t;
}

int recursive(int n) {
    if (n == 1) {
        return 1;
    } else {
        return recursive(n-1) + n;
    }
}

int factorialIt(int x) {
    int output = 1;
    for (int i = 1; i <= x; i++) {
        output *= i;
    }
    return output;
}

int factorialRec(int n) {
    if (n == 1) {
        return 1;
    } else {
        return factorialRec(n-1) * n;
    }
}

void power(int x) {
    for (int i = 1; i <= x; i++) {
        cout << i*i << " ";
    }
}

int recPow(int n) {
    if (n == 1) {
        return 2;
    } else {
        return recPow(n-1) * 2;
    }
}




int main()
{
    cout << "Sum Iterative: " << iterative(10) << endl;
    cout << "Sum Recrsive: " << recursive(10) << endl;
    cout << "Iterative Factorial: " << factorialIt(10) << endl;
    cout << "Recursive Factorial: " << factorialRec(10) << endl;
    power(10);
    cout << endl << recPow(10);
    cout << endl << endl;
    return 0;
}

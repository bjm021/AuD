#include <iostream>
using namespace std;
//                   Übung 01.a
int sumIterativ(int n) {
    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum = sum + i;
    }

    return sum;
}

#include <iostream>
using namespace std;
//                   Übung 01.b
int sumRekursiv(int n) {
    int sum = 0;

    if(n==1) {
        sum = sum + 1;
    } else {
        while(n>0) {
            sum = sum + n;
            n--;
            sumRekursiv(n-1);
        }
      }

    return sum;
}

#include <iostream>
using namespace std;
//                   Übung 01.c
int factorialIterativ(int n) {
    int fac = 1;
    for (int i=1; i<=n; i++) {
        fac = fac * i;
    }

    return fac;
}

#include <iostream>
using namespace std;

int factorialRekursiv(int n) {
    int fac = 1;

    if(n==1) {
        fac = fac + 1;
    } else {
        while(n>0) {
            fac = fac * n;
            n--;
            factorialRekursiv(n-1);
        }
      }

    return fac;
}

#include <iostream>
using namespace std;
//                   Übung 01.d
void power() {
    int n;
    cout<<"Bitte geben Sie eine natuerliche Zahl ein: ";
    cin>>n;

    for (int i = 1; i<=n; i++) {
        cout<< i*i << ", ";
    }

}

#include <iostream>
using namespace std;
//                   Übung 01.e
void powerOfN() {
    int n;
    cout<<"Bitte geben Sie eine natuerliche Zahl ein: ";
    cin>>n;
    int temp = 2;

    for (int i = 1; i<n; i++) {
        temp = temp * 2;
    }

    cout<<temp<<endl;
}

#include <iostream>
using namespace std;

int main()
{

    //cout<<sumIterativ(5)<<endl;
    //cout<<sumRekursive(5)<<endl;
    //cout<<factorialIterativ(5)<<endl;
    //cout<<factorialRekursiv(5)<<endl;
    //power();
    //powerOfN();



}

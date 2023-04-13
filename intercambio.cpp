#include <iostream>

using namespace std;

void intercambio(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
    cout << "El valor de a en intercambio es " << a << endl;
    cout << "El valor de b en intercambio es " << b << endl;
}

int main() {

    int q = 10;
    int r = 20;
    
    intercambio(q, r);

    cout << "El valor de q en main es " << q << endl; //20
    cout << "El valor de r en main es " << r << endl; //10

    return 0;
}
#include <iostream>
using namespace std;

int perbandingan(int a, int b);

int main () {
int nilai1, nilai2;
cout << "masukan nilai A : ";
cin >> nilai1;
cout << "masukan nilai B : ";
cin >> nilai2;
cout << "nilai maximum adalah : " << perbandingan (nilai1, nilai2);
}

int perbandingan(int a, int b) {
return max (a,b);
}


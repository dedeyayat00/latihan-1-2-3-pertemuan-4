#include <iostream>
using namespace std;

bool genap(int n);

int main () {
cout << "hasilnya adalah : " << genap (10);
return 0;
}
bool genap (int n) {
return (n % 2 == 0);
}
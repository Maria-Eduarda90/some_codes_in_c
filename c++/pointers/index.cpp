
#include<iostream>
#include<cstddef>

using namespace std;

int main(){

    int var1;
    int* pont1;
    var1=5;
    pont1=&var1;
    cout << pont1 << endl;

    int* pont2;
    pont2 = NULL;
    cout << "Pont 2: " << pont2 << endl;

    int* pont3 = new int;
    *pont3 = 35;

    delete pont3;
    pont3 = pont1;
    cout << "Pont 3: " << *pont3;

    return 0;
}

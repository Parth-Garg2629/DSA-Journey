#include <iostream>
using namespace std;
int main(){
    int a=123;
    char ch='a';
    float f=1.3;
    double d=1.34;
    cout << a << endl;
    cout << ch << endl;
    cout << f << endl;
    cout << d << endl;
    int s1= sizeof(a);
    int s2= sizeof(ch);
    int s3= sizeof(f);
    int s4= sizeof(d);
    cout << "Size of int is :" << s1 << endl;
    cout << "Size of char is :" << s2 << endl;
    cout << "Size of float is :" << s3 << endl;
    cout << "Size of double is :" << s4 << endl;
}
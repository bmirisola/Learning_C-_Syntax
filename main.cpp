#include <iostream>
using namespace std;

unsigned int z = 4;
double x;
double y;

#define TICKS_PER_REVOLUTION 4096

typedef int hamil;

const int WHEEL_DIAMETER = 9;

hamil silliness = 11;

enum bobforapples {blue, red, green, purple} c, r;

bobforapples d;

int add(double x, double y){
    return  x + y;

}

int main() {
    c = blue;
    cout << c << endl;
    x = 7;
    y = 10;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << "\?" << endl;
    cout << TICKS_PER_REVOLUTION << endl;
    cout << WHEEL_DIAMETER << endl;
    cout << x+y+z;

    add(x,y);
    return 0;
}
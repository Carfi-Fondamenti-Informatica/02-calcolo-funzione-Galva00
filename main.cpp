#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a=0, b=0, x=0, y=0, z=0;
    cin>> a >> b >> x >> y;
    if (x<0 and y>0) {
        z=a*x - b*y;
        cout << z <<endl;
    } else if (x>=0 and y<=0) {
        float P= pow(x,2);
        z = a*P - b*y;
        cout << z <<endl;
    } else {
        float P = pow(y,2);
        z = a*x + b*P;
        cout << z <<endl;
    }
        return 0;
    }

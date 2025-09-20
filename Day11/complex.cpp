#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;

    void setData(int r, int i) {
        real = r;
        imag = i;
    }

    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, sum;

    c1.setData(3, 4);   // 3 + 4i
    c2.setData(1, 2);   // 1 + 2i

    sum = c1.add(c2);   // (3+1) + (4+2)i = 4 + 6i

    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    cout << "Sum: ";
    sum.display();

    return 0;
}

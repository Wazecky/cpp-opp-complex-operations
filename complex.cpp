#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

    Complex operator+(const Complex& other) const {
        double newReal = this->real + other.real;
        double newImaginary = this->imaginary + other.imaginary;
        return Complex(newReal, newImaginary);
    }

    friend Complex operator+(int real, const Complex& complex) {
        return Complex(real + complex.real, complex.imaginary);
    }

    friend std::ostream& operator<<(std::ostream& os, const Complex& complex) {
        os << complex.real << " + " << complex.imaginary << "i";
        return os;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2 = 2 + c1;
    std::cout << c2 << std::endl;
    return 0;
}

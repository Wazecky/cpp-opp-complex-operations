#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

    // Conjugate function
    Complex Conjugate() const {
        return Complex(real, -imaginary);
    }

    // Overloaded << operator for easy output
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex) {
        os << complex.real << " + " << complex.imaginary << "i";
        return os;
    }
};

int main() {
    // Example usage
    Complex c1(2, 3);
    
    // Display the original complex number
    std::cout << "Original: " << c1 << std::endl;

    // Calculate and display the conjugate
    Complex conjugate = c1.Conjugate();
    std::cout << "Conjugate: " << conjugate << std::endl;

    return 0;
}

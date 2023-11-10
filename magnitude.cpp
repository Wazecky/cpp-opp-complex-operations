#include <iostream>
#include <cmath>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

    // Magnitude function
    double Magnitude() const {
        return std::sqrt(real * real + imaginary * imaginary);
    }

    // Overloaded << operator for easy output
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex) {
        os << complex.real << " + " << complex.imaginary << "i";
        return os;
    }
};

int main() {
    // Example usage
    Complex c1(3, 4);
    
    // Display the original complex number
    std::cout << "Original: " << c1 << std::endl;

    // Calculate and display the magnitude
    double magnitude = c1.Magnitude();
    std::cout << "Magnitude: " << magnitude << std::endl;

    return 0;
}

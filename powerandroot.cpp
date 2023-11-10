#include <iostream>
#include <cmath>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

    // Power function
    Complex Power(double exponent) const {
        double magnitude = std::pow(Magnitude(), exponent);
        double angle = exponent * Angle();
        return PolarForm(magnitude, angle);
    }

    // Root function
    Complex Root(int n) const {
        double magnitude = std::pow(Magnitude(), 1.0 / n);
        double angle = Angle() / n;
        return PolarForm(magnitude, angle);
    }

    // Magnitude function
    double Magnitude() const {
        return std::sqrt(real * real + imaginary * imaginary);
    }

    // Angle function
    double Angle() const {
        return std::atan2(imaginary, real);
    }

    // Overloaded << operator for easy output
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex) {
        os << complex.real << " + " << complex.imaginary << "i";
        return os;
    }

private:
    // Helper function to convert to Cartesian form
    Complex PolarForm(double magnitude, double angle) const {
        double real_part = magnitude * std::cos(angle);
        double imaginary_part = magnitude * std::sin(angle);
        return Complex(real_part, imaginary_part);
    }
};

int main() {
    // Example usage
    Complex c1(2, 3);

    // Display the original complex number
    std::cout << "Original: " << c1 << std::endl;

    // Calculate and display the square of the complex number
    Complex powerResult = c1.Power(2);
    std::cout << "Square: " << powerResult << std::endl;

    // Calculate and display the square root of the complex number
    Complex rootResult = c1.Root(2);
    std::cout << "Square Root: " << rootResult << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>

class Vector {
private:
    double x, y, z;

public:
    Vector(double x_val, double y_val, double z_val) : x(x_val), y(y_val), z(z_val) {}

    void get_coordinates() const {
        std::cout << "Coordinates: (" << x << ", " << y << ", " << z << ")\n";
    }

    double magnitude() const {
        return sqrt(x * x + y * y + z * z);
    }
};

int main() {
    Vector v(3, 4, 5);
    v.get_coordinates();
    std::cout << "Magnitude: " << v.magnitude() << std::endl;
    return 0;
}

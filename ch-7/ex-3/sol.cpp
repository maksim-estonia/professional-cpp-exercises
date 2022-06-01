#include <iostream>
#include <memory>

class Point
{
private:
    double m_x;
    double m_y;
    double m_z;

public:
    Point(double x, double y, double z):
        m_x{x}, m_y{y}, m_z{z} {}
    
    double getX() const { return m_x; }
    double getY() const { return m_y; }
    double getZ() const { return m_z; }

};

void printPoint(const Point& point)
{
    std::cout << "X coord: " << point.getX() << std::endl;
    std::cout << "Y coord: " << point.getY() << std::endl;
    std::cout << "Z coord: " << point.getZ() << std::endl;
}

int main()
{
    auto point { std::make_unique<Point>(1.2, 2.3, 4.5) };
    printPoint(*point);
}


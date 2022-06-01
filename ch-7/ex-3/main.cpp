#include <iostream>

class Point3D
{
private:
    int m_x;
    int m_y;
    int m_z;
public:
    Point3D(int x, int y, int z);
    ~Point3D();
    int getX() const;
    int getY() const;
    int getZ() const;
};

Point3D::Point3D(int x, int y, int z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}

Point3D::~Point3D()
{
}

int Point3D::getX() const {
    return m_x;
}

int Point3D::getY() const {
    return m_y;
}

int Point3D::getZ() const {
    return m_z;
}

void print_point(Point3D& point) {
    std::cout << "X coord: " << point.getX() << std::endl;
    std::cout << "Y coord: " << point.getY() << std::endl;
    std::cout << "Z coord: " << point.getZ() << std::endl;
}

int main() 
{
    Point3D myPoint{1, 2, 3};
    Point3D ref_myPoint{myPoint};

    print_point(ref_myPoint);
}

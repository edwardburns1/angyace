#include <iostream>
#include <cmath>

class Point2d{
public:
    double m_x;
    double m_y;

public:
    Point2d(){
        m_x = 0.0;
        m_y = 0.0;
    }

    Point2d(double x, double y){
        m_x = x;
        m_y = y;
    }

    void print() const{
        std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
    }

    double distanceTo(Point2d other){
        double x1 = m_x;
        double y1 = m_y;

        double x2 = other.m_x;
        double y2 = other.m_y;

        return std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    }
};

double distanceFrom(Point2d a, Point2d b){
    double x1 = a.m_x;
    double y1 = a.m_y;

    double x2 = b.m_x;
    double y2 = b.m_y;

    return std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}

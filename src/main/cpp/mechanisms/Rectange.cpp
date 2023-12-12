#include <mechanisms/RectangleTest.h>
Rectangle::Rectangle(double width, double length): m_length(length),
                                                   m_width(width)
{

}

double Rectangle::Area()
{
    return m_width * m_length;
}

double Rectangle::Perimeter()
{
    return m_width + m_length + m_length + m_width;
}

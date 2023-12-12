class Rectangle
{
    public:
    Rectangle(double width, double length);
    Rectangle() delete;
    ~Rectangle();

    double m_width;
    double m_length;
    double Perimeter();
    double Area();

    private:
};
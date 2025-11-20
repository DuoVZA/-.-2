#include <iostream>

#include "Circle.h"

using namespace std;

void Circle::ShowArea() const
{
    cout << "Square of circle: " << 3.14159 * m_value1 * m_value2 << endl;
}

void Circle::ShowLength() const
{
    cout << "Length r: " << m_value1 << endl;
}

void Circle::Init()
{
    cout << "Enter value 1: ";
    cin >> m_value1;
}

void Circle::Print() const
{
    cout << "Square: " << 3.14159 * m_value1 * m_value2 << "\nR: " << m_value1 << endl;
}
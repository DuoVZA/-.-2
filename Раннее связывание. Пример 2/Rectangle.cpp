#include <iostream>

#include "Rectangle.h"

using namespace std;

void Rectangle::ShowArea() const
{
    cout << "Square of rectangle: " << m_value1 * m_value2 << endl;
}

void Rectangle::ShowLength() const
{
    cout << "Length a: " << m_value1 << "\nLength b: " << m_value2 << endl;
}

void Rectangle::Init()
{
    cout << "Enter value 1: ";
    cin >> m_value1;
    cout << "Enter value 2: ";
    cin >> m_value2;
}

void Rectangle::Print() const
{
    cout << "Square: " << m_value1 * m_value2 << "\nA: " << m_value1 << "\nB: " << m_value2 << endl;
}
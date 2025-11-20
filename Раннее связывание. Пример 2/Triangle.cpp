#include <iostream>

#include "Triangle.h"

using namespace std;

void Triangle::ShowArea() const
{
    cout << "Square of triangle: " << 0.5 * m_value1 * m_value2 << endl;
}

void Triangle::ShowLength() const
{
    cout << "Length a: " << m_value1 << "\nLength b: " << m_value2 << endl;
}

void Triangle::Init()
{
    cout << "Enter value 1: ";
    cin >> m_value1;
    cout << "Enter value 2: ";
    cin >> m_value2;
}

void Triangle::Print() const
{
    cout << "Square: " << 0.5 * m_value1 * m_value2 << "\nA: " << m_value1 << "\nB: " << m_value2 << endl;
}
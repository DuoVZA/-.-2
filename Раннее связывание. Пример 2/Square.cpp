#include <iostream>

#include "Square.h"

using namespace std;

void Square::ShowArea() const
{
	cout << "Square of square: " << m_value1*m_value2 << endl;
}

void Square::ShowLength() const
{
	cout << "Length a: " << m_value1 << "\nLength b: " << m_value2 << endl;
}

void Square::Init()
{
    cout << "Enter value 1: ";
    cin >> m_value1;
    cout << "Enter value 2: ";
    cin >> m_value2;
}

void Square::Print() const
{
    cout << "Square: " << m_value1 * m_value2 << "\nA: " << m_value1 << "\nB: " << m_value2 << endl;
}

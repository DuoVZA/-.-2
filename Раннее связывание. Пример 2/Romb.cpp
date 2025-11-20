#include "Romb.h"

#include <iostream>

using namespace std;

void Romb::ShowArea() const
{
	cout << "Square of romb: " << m_value1*m_value2 << endl;
}

void Romb::ShowLength() const
{
	cout << "Length a: " << m_value1 << "\nLength b: " << m_value2 << endl;
}

void Romb::Init()
{
    cout << "Enter value 1: ";
    cin >> m_value1;
    cout << "Enter value 2: ";
    cin >> m_value2;
}

void Romb::Print() const
{
    cout << "Square: " << m_value1 * m_value2 << "\nA: " << m_value1 << "\nB: " << m_value2 << endl;
}

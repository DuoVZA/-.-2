#include "Paralelogram.h"

#include <iostream>

using namespace std;

void Paralelogram::ShowArea() const
{
	cout << "Square of romb: " << m_value1 * m_value2 << endl;
}

void Paralelogram::ShowLength() const
{
	cout << "Length a: " << m_value1 << "\nLength b: " << m_value2 << endl;
}

void Paralelogram::Init()
{
    cout << "Enter value 1: ";
    cin >> m_value1;
    cout << "Enter value 2: ";
    cin >> m_value2;
}

void Paralelogram::Print() const
{
    cout << "Square: " << m_value1 * m_value2 << "\nA: " << m_value1 << "\nB: " << m_value2 << endl;
}

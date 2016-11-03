#include "Vetor.h"

	Vetor::Vetor(float x, float y) : m_x(x), m_y(y)
	{}

	Vetor::Vetor() : m_x(0.0f), m_y(0.0f)
	{}

	void Vetor::Set(float x, float y)
	{
		m_x = x;
		m_y = y;
	}

	float Vetor::GetX() const
	{
		return m_x;
	}

	float Vetor::GetY() const
	{
		return m_y;
	}

	// produto por um numero escalar
	Vetor Vetor::operator*(float n)
	{
		float novoX = GetX() * n;
		float novoY = GetY() * n;
		return Vetor(novoX, novoY);

	}

	Vetor Vetor::operator-(Vetor v)
	{
		float novoX = GetX() - v.GetX();
		float novoY = GetY() - v.GetY();
		return Vetor(novoX, novoY);
	}

	Vetor Vetor::operator+(Vetor w)
	{
		float novoX = GetX() + w.GetX();
		float novoY = GetY() + w.GetY();
		return Vetor(novoX, novoY);
	}
	

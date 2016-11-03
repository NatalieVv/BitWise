#pragma once

class Vetor
{
	private:
		float m_x, m_y;

	public:
		
		Vetor(float x, float y);
		Vetor();
		void Set(float x, float y);
		float GetX() const;
		float GetY() const;
	
		// produto por um numero escalar
		Vetor operator*(float n);
		Vetor operator-(Vetor v);	
		Vetor operator+(Vetor w);

};


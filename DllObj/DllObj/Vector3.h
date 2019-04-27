#pragma once

class Vector3
{
private:
	float m_x_;
	float m_y_;
	float m_z_;

public:
	Vector3();
	Vector3(float _fX, float _fY, float _fZ);
	Vector3(const Vector3& _refVector3);
	float GetX();
	float GetY();
	float GetZ();

	void SetX(float _fx);
	void SetY(float _fY);
	void SetZ(float _fz);


};
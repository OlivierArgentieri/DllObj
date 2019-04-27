#include "stdafx.h"
#include "Vector3.h"

Vector3::Vector3()
{
	Vector3(0, 0, 0);
}

Vector3::Vector3(float _fX, float _fY, float _fZ)
{
	this->m_x_ = _fX;
	this->m_y_ = _fY;
	this->m_z_ = _fZ;
}

Vector3::Vector3(const Vector3& _refVector3)
{
	this->m_x_ = _refVector3.m_x_;
	this->m_y_ = _refVector3.m_y_;
	this->m_z_ = _refVector3.m_z_;
}

float Vector3::GetX()
{
	if (this != nullptr)
		return this->m_x_;
	return 0;
}

float Vector3::GetY()
{
	if (this != nullptr)
		return this->m_y_;
	return 0;
}

float Vector3::GetZ()
{
	if (this != nullptr)
		return this->m_z_;
	return 0;
}

void Vector3::SetX(float _fx)
{
	this->m_x_ = _fx;
}

void Vector3::SetY(float _fY)
{
	this->m_y_ = _fY;
}

void Vector3::SetZ(float _fz)
{
	this->m_z_ = _fz;
}



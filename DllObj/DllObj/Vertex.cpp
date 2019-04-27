#include "stdafx.h"
#include "Vector3.h"
#include "Vertex.h"

Vertex::Vertex()
{
	Vertex(Vector3());
}

Vertex::Vertex(Vector3 _v3Coordinate)
{
	this->m_coordinate_ = _v3Coordinate;
	//this->m_ptr_faces_ = list<Face>();
}

Vertex::Vertex(const Vertex& _refVertex)
{
	//	this->m_ptr_faces_ = _refVertex.m_ptr_faces_;
	this->m_coordinate_ = _refVertex.m_coordinate_;
}

Vector3 Vertex::GetCoordinate()
{
	return this->m_coordinate_;
}

void Vertex::SetX(float _fX)
{
	this->m_coordinate_.SetX(_fX);
}

void Vertex::SetY(float _fY)
{
	this->m_coordinate_.SetY(_fY);
}

void Vertex::SetZ(float _fZ)
{
	this->m_coordinate_.SetZ(_fZ);
}
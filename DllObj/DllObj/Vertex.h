#pragma once
#include "Vector3.h"
#include <list>



using namespace std;

class Vertex
{
private:
	Vector3 m_coordinate_;
	//	list<Face> m_ptr_faces_;

public:
	Vertex();
	Vertex(Vector3 _v3Coordinate);
	Vertex(const Vertex& _refVertex);

	Vector3 GetCoordinate();

	void SetX(float _fX);
	void SetY(float _fY);
	void SetZ(float _fZ);
};
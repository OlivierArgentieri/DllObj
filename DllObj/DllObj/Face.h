#pragma once
#include "Vector3.h"
#include <list>
#include "Vertex.h"

class Face
{
private:
	std::list<Vertex> m_coords_;
	std::list<Vector3> m_normals_;
	std::list<Vector3> m_textures_;

public:
	Face();
	Face(const Face& _ref_face);

	void AddVertex(Vertex _vVertex);
	void AddNormals(Vector3 _v3Normals);
	void AddTextures(Vector3 _v3Textures);
};

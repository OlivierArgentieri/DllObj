#include "stdafx.h"
#include "Face.h"

Face::Face()
{
}

Face::Face(const Face& _refFace)
{
	this->m_coords_ = _refFace.m_coords_;
	this->m_normals_ = _refFace.m_normals_;
	this->m_textures_ = _refFace.m_textures_;
}

void Face::AddVertex(Vertex _vVertex)
{
	m_coords_.push_back(_vVertex);
}

void Face::AddNormals(Vector3 _v3Normals)
{
	this->m_normals_.push_back(_v3Normals);
}

void Face::AddTextures(Vector3 _v3Textures)
{
	this->m_textures_.push_back(_v3Textures);
}

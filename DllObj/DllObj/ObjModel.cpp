#include "stdafx.h"
#include "ObjModel.h"
#include "Vertex.h"
void ObjModel::AddVertex(Vertex _vVertex)
{
	this->m_vertexes_.push_back(_vVertex);
}
void ObjModel::AddNormals(Vector3 _v3Normals)
{
	m_normals_.push_back(_v3Normals);
}
void ObjModel::AddTextures(Vector3 _v3Textures)
{
	m_textures_.push_back(_v3Textures);
}

void ObjModel::AddFace(Face _fFace)
{
	m_faces_.push_back(_fFace);
}

std::list<Vertex> ObjModel::GetVertexes()
{
	return m_vertexes_;
}
std::list<Vector3> ObjModel::GetNormals()
{
	return m_normals_;
}
std::list<Vector3> ObjModel::GetTextures()
{
	return m_textures_;
}

std::list<Face> ObjModel::GetFaces()
{
	return m_faces_;
}

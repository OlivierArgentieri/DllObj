#pragma once
#include <list>
#include "Vector3.h"
#include "Face.h"

class ObjModel
{
private:
	std::list<Vertex> m_vertexes_;
	std::list<Vector3> m_normals_;
	std::list<Vector3> m_textures_;

	std::list<Face> m_faces_;

public:
	void AddVertex(Vertex _vVertex);
	void AddNormals(Vector3 _v3Normals);
	void AddTextures(Vector3 _v3Textures);
	void AddFace(Face _fFace);
	//void CreateFace()

	std::list<Vertex> GetVertexes();
	std::list<Vector3> GetNormals();
	std::list<Vector3> GetTextures();
	std::list<Face> GetFaces();

};
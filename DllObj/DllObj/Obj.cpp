#include "stdafx.h"
#include "Obj.h"
#include <fstream>
#include <regex>
using namespace  std;
std::string Obj::NextPartOfRow(std::string &_sRow, std::string _sDelimiter)
{
	int find_position = _sRow.find(_sDelimiter);
	string toReturn = _sRow.substr(0, find_position);
	_sRow.erase(0, find_position + _sDelimiter.size());

	return toReturn;
}

Obj::Obj(std::string _sFilePath)
{
	this->m_file_path_ = _sFilePath;
	std::ifstream input(_sFilePath);
	std::string str;
}

ObjModel Obj::Init()
{
	ObjModel toReturn;

	const std::string path = m_file_path_;
	std::ifstream input(path);
	std::string str;
	std::string str_temp;

	std::regex pattern{ "[a-zA-Z]+[ ]+" };
	std::string replacement{ "" };
	while (std::getline(input, str))
	{
		if (str[0] == 'v')
		{
			if (str[1] == 'n')
			{
				Vector3 v3;
				str = regex_replace(str, pattern, replacement);
				v3.SetX(atof(NextPartOfRow(str, " ").c_str()));
				v3.SetY(atof(NextPartOfRow(str, " ").c_str()));
				v3.SetZ(atof(NextPartOfRow(str, " ").c_str()));
				toReturn.AddNormals(v3);
			}

			else if (str[1] == 't')
			{
				Vector3 v3;
				str = regex_replace(str, pattern, replacement);
				v3.SetX(atof(NextPartOfRow(str, " ").c_str()));
				v3.SetY(atof(NextPartOfRow(str, " ").c_str()));
				toReturn.AddTextures(v3); 
			}

			else
			{
				Vertex v;
				str = regex_replace(str, pattern, replacement);
				v.SetX(atof(NextPartOfRow(str, " ").c_str()));
				v.SetY(atof(NextPartOfRow(str, " ").c_str()));
				v.SetZ(atof(NextPartOfRow(str, " ").c_str()));
				toReturn.AddVertex(v);
			}
		}

		if (str[0] == 'f')
		{
			Face f;
			str = regex_replace(str, pattern, replacement);
			f.AddVertex(GetElementAt(toReturn.GetVertexes(), atof(NextPartOfRow(str, "/").c_str()) - 1));
			f.AddTextures(GetElementAt(toReturn.GetTextures(), atof(NextPartOfRow(str, "/").c_str()) - 1));
			f.AddNormals(GetElementAt(toReturn.GetNormals(), atof(NextPartOfRow(str, " ").c_str()) - 1));

			f.AddVertex(GetElementAt(toReturn.GetVertexes(), atof(NextPartOfRow(str, "/").c_str()) - 1));
			f.AddTextures(GetElementAt(toReturn.GetTextures(), atof(NextPartOfRow(str, "/").c_str()) - 1));
			f.AddNormals(GetElementAt(toReturn.GetNormals(), atof(NextPartOfRow(str, " ").c_str()) - 1));

			f.AddVertex(GetElementAt(toReturn.GetVertexes(), atof(NextPartOfRow(str, "/").c_str()) - 1));
			f.AddTextures(GetElementAt(toReturn.GetTextures(), atof(NextPartOfRow(str, "/").c_str()) - 1));
			f.AddNormals(GetElementAt(toReturn.GetNormals(), atof(str.c_str()) - 1));
			toReturn.AddFace(f);
		}
	}
	return toReturn;
}


template <typename T>
T Obj::GetElementAt(std::list<T> _tList, unsigned int _iIndex)
{
	if (_tList.size() > _iIndex)
	{
		auto it = _tList.begin();
		std::advance(it, _iIndex);
		return *it;
	}
	return T();
}
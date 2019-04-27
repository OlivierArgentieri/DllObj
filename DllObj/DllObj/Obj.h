#pragma once
#include <string>
#include "ObjModel.h"

class Obj
{
private:
	std::string m_file_path_;
	ObjModel m_data_;

	std::string NextPartOfRow(std::string &_sRow, std::string _sDelimiter);
	template <typename T> T GetElementAt(std::list<T> _tList, unsigned int _iIndex);
public:
	Obj(std::string _sFilePath);
	ObjModel Init();
};
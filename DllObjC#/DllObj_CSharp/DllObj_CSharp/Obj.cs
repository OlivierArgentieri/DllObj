using System;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Text.RegularExpressions;
namespace DllObj_CSharp
{
    public class Obj
    {
        private const string _ruleRegex = "[a-zA-Z]+[ ]+";

        private string m_file_path_;
        private ObjModel m_data_;

        public Obj(string _sPath)
        {
            this.m_file_path_ = _sPath;
            this.m_data_ = new ObjModel();
            Init();
        }

        private void Init()
        {
            if (!File.Exists(this.m_file_path_))
                return;

            string[] lines = File.ReadAllLines(m_file_path_);

            foreach(string l in lines)
            {
                ToNormals(l);
                ToTexture(l);
                ToVertex(l);
            }
            
            
        }

        private void ParseRow(string _sRow)
        {
            
        }

        private void ReplaceByRegex(ref string _sRow, string _sRule, string _sRemplacement)
        {
            _sRow = Regex.Replace(_sRow, _sRule, _sRemplacement);
        }

        private void ToNormals(string _sRow)
        {
            if (_sRow[0] != 'v' && _sRow[1] != 'n')
                return;

            ReplaceByRegex(ref _sRow, _ruleRegex, string.Empty);

        }

        private void ToVertex(string _sRow)
        {
            if (_sRow[0] != 'v')
                return;

        }

        private void ToTexture(string _sRow)
        {
            if (_sRow[0] != 'v' && _sRow[1] != 't')
                return;

        }
    }
}

using System;
using System.Collections.Generic;
using System.Text;

namespace DllObj_CSharp
{
    class ObjModel
    {
        public List<Vertex> m_vertexs { get; }
        public  List<Vector3> m_normals { get; }
        public List<Vector3> m_textures { get; }
        public List<Face> m_faces { get; }

        public ObjModel()
        {
            this.m_vertexs = new List<Vertex>();
            this.m_normals = new List<Vector3>();
            this.m_textures = new List<Vector3>();
            this.m_faces = new List<Face>();
        }
    }
}

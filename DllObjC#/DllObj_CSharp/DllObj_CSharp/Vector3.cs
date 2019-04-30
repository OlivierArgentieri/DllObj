using System;
using System.Collections.Generic;
using System.Text;

namespace DllObj_CSharp
{
    public class Vector3
    {
        public float m_x_;
        public float m_y_;
        public float m_z_;

        public Vector3(float _fX, float _fY, float _fZ)
        {
            this.m_x_ = _fX;
            this.m_y_ = _fY;
            this.m_z_ = _fZ;
        }

        public Vector3() : (0,0,0)
        {

        }
    }
}

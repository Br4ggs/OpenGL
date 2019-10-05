#include "QuadPrimitive.h"

QuadPrimitive::QuadPrimitive()
{
	Model::init(vertexData, sizeof(vertexData), positionAttrib, textAttrib);
};
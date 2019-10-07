#include "CubePrimitive.h"

CubePrimitive::CubePrimitive()
{
	Model::init(vertexData, sizeof(vertexData), positionAttrib, textAttrib);
};
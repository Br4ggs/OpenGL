#include "CubePrimitive.h"
#include <iostream>

CubePrimitive::CubePrimitive()
{
	Model::init(vertexData, sizeof(vertexData), positionAttrib, textAttrib);
};
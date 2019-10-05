#ifndef QUAD_PRIM_H
#define QUAD_PRIM_H

#include "Model.h"

class QuadPrimitive : public Model
{
public:
	QuadPrimitive();
private:
	float vertexData[24] =
	{
		// positions   // texCoords
		-1.0f,  1.0f,  0.0f, 1.0f,
		-1.0f, -1.0f,  0.0f, 0.0f,
		 1.0f, -1.0f,  1.0f, 0.0f,

		-1.0f,  1.0f,  0.0f, 1.0f,
		 1.0f, -1.0f,  1.0f, 0.0f,
		 1.0f,  1.0f,  1.0f, 1.0f
	};

	int positionAttrib = 2;
	int textAttrib = 2;
};

#endif

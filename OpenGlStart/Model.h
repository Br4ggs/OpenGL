#ifndef MODEL_H
#define MODEL_H

#include <glad/glad.h>

class Model
{
public:
	void init(float* vertexData, int size, int positionAttrib, int textAttrib);
	void draw();
private:
	float* vertexData;
	int size;
	int vertexCount;
	unsigned int vertexArrayObject;
	unsigned int vertexBufferObject;
	int positionAttrib;
	int textAttrib;

	void generateVAO();
	void generateVBO(int positionAttrib, int textAttrib);
};

#endif
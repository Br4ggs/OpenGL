#ifndef MODEL_H
#define MODEL_H

#include <glad/glad.h>

class Model
{
public:
	Model(float vertexData[], int positionAttrib, int textAttrib);
	//draw?
private:
	float* vertexData;
	unsigned int vertexArrayObject;
	unsigned int vertexBufferObject;

	void generateVAO();
	void generateVBO(int positionAttrib, int textAttrib);
};

#endif
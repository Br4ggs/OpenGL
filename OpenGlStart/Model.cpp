#include "Model.h"
#include <iostream>

Model::Model(float* vertexData, int positionAttrib, int textAttrib)
{
	this->vertexData = vertexData;
	generateVAO();
	generateVBO(positionAttrib, textAttrib);
}

void Model::generateVAO()
{
	glGenVertexArrays(1, &this->vertexArrayObject);
	glBindVertexArray(this->vertexArrayObject);
}

void Model::generateVBO(int positionAttrib, int textAttrib)
{
	glGenBuffers(1, &this->vertexBufferObject);
	glBindBuffer(GL_ARRAY_BUFFER, this->vertexBufferObject);
	//should data be supplied as a pointer? should already be one
	glBufferData(GL_ARRAY_BUFFER, sizeof(this->vertexData), vertexData, GL_STATIC_DRAW);

	int stride = positionAttrib + textAttrib;

	//position attributes
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, positionAttrib, GL_FLOAT, GL_FALSE, stride * sizeof(float), (void*)0);

	//texture attributes
	glEnableVertexAttribArray(1);
	glVertexAttribPointer(1, textAttrib, GL_FLOAT, GL_FALSE, stride * sizeof(float), (void*)(positionAttrib * sizeof(float)));
	std::cout << "i was called" << std::endl;
}
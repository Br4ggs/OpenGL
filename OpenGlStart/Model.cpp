#include "Model.h"
#include <iostream>

void Model::init(float* vertexData, int size, int positionAttrib, int textAttrib)
{
	this->vertexData = vertexData;
	this->size = size;
	this->positionAttrib = positionAttrib;
	this->textAttrib = textAttrib;
	this->vertexCount = (size / sizeof(vertexData[0])) / (positionAttrib + textAttrib);
	generateVAO();
	generateVBO(positionAttrib, textAttrib);
}

void Model::draw()
{
	glBindVertexArray(vertexArrayObject);
	glDrawArrays(GL_TRIANGLES, 0, vertexCount);
}

void Model::generateVAO()
{
	glGenVertexArrays(1, &vertexArrayObject);
	glBindVertexArray(vertexArrayObject);
}

void Model::generateVBO(int positionAttrib, int textAttrib)
{
	glGenBuffers(1, &vertexBufferObject);
	glBindBuffer(GL_ARRAY_BUFFER, vertexBufferObject);
	glBufferData(GL_ARRAY_BUFFER, size, vertexData, GL_STATIC_DRAW);

	int stride = positionAttrib + textAttrib;

	//position attributes
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, positionAttrib, GL_FLOAT, GL_FALSE, stride * sizeof(float), (void*)0);

	//texture attributes
	glEnableVertexAttribArray(1);
	glVertexAttribPointer(1, textAttrib, GL_FLOAT, GL_FALSE, stride * sizeof(float), (void*)(positionAttrib * sizeof(float)));
}
#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec3 vertexPos;

void main()
{
	vec3 pos = vertexPos;
	if (pos.x < 0)
	{
		pos.x = -pos.x;
	}

    FragColor = vec4(pos, 1.0f);
}
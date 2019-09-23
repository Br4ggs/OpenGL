#version 330 core
out vec4 FragColor;

in vec2 TexCoords;

uniform sampler2D screenTexture;
uniform float time;
uniform float offset;

const float Pixels = 2000.0f;

void main()
{
    float dx = 10.0 * (1.0 / Pixels);
    float dy = 10.0 * (1.0 / Pixels);
    vec2 Coord = vec2(dx * floor(TexCoords.x / dx), dy * floor(TexCoords.y / dy));
	//apply a wave distortion effect
	Coord.y += (cos(((time/10) + TexCoords.x) * 20f) * 0.015f);
    FragColor = texture2D(screenTexture, Coord);
} 
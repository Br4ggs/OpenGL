#version 330 core
out vec4 FragColor;

in vec2 TexCoords;

uniform sampler2D screenTexture;
uniform float time;
uniform float offset;

const float pi = 3.14159;

void main()
{
    //vec3 col = texture(screenTexture, TexCoords).rgb;
    //FragColor = vec4(col, 1.0);

    float Pixels = 2000.0;
    float dx = 10.0 * (1.0 / Pixels);
    float dy = 10.0 * (1.0 / Pixels);
    vec2 Coord = vec2(dx * floor(TexCoords.x / dx), dy * floor(TexCoords.y / dy));
	Coord.x += cos(((time/15) + TexCoords.y) * 20f) * 0.05f;
    FragColor = texture2D(screenTexture, Coord);
} 
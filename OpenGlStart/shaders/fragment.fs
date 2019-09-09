#version 330 core
out vec4 FragColor;

in vec2 texCoord;

uniform sampler2D texture1;
uniform sampler2D texture2;

uniform float time;

const float A = 0.03;
const float B = 200.0;
const float C = 5.0;

const float D = 0.003;
const float E = 13.0;
const float F = 9.0;
float x;
float y;

void main()
{
    //FragColor = mix(texture(texture1, texCoord), texture(texture2, texCoord), 0.5f);
	gl_FragColor =  texture2D(texture1, texCoord);
	gl_FragColor.a = 1.0; //Best to make sure nothing seems transparent
	float x =  A * sin(B * texCoord.x) * sin(C * time);
	float y =  D * sin(E * texCoord.y) * sin(F * time);
	vec2 c = vec2(texCoord.x + x, texCoord.y +y);
	vec4 diffuse_color =  texture2D(texture1, c);
	gl_FragColor = diffuse_color;
}
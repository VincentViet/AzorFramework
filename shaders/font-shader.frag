#version 330 core
in vec2 Texcoord;
out vec4 color;

uniform sampler2D character;
uniform vec3 characterColor;

void main()
{
    vec4 sampled = vec4(1.0f, 1.0f, 1.0f, texture(character, Texcoord).r);
    color = sampled * vec4(characterColor, 1.0f);
}
#version 330 core
layout (location = 0) in vec4 vertex; // vec2 position, vec2 tex-coord

out vec2 Texcoord;
out vec4 ParticleColor;

uniform mat4 projection;
uniform vec2 position;
uniform vec4 color;
uniform float scale;

void main()
{
    Texcoord = vertex.zw;

    ParticleColor = color;
    gl_Position = projection * vec4(vertex.xy * scale + position, 0.0f, 1.0f);
}
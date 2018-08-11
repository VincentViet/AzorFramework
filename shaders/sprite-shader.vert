#version 330 core
layout (location = 0) in vec3 vertex; // <vec2 position, vec2 texCoords>
out vec2 TexCoord;

uniform vec2 TexCoord0;
uniform vec2 TexCoord1;
uniform vec2 TexCoord2;
uniform vec2 TexCoord3;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    if(vertex.z == 0)
        TexCoord = TexCoord0;
    else if(vertex.z == 1)
        TexCoord = TexCoord1;
    else if(vertex.z == 2)
        TexCoord = TexCoord2;
    else
        TexCoord = TexCoord3;

    gl_Position = projection * view * model * vec4(vertex.xy, 0.0, 1.0);
}
#version 330

in vec4 FragPos;

uniform vec3 lightPos;
uniform float farPlane;

void main()
{
    float Distance = length(FragPos.xyz - lightPos);
    Distance = Distance/farPlane;
    gl_FragDepth = Distance;
}
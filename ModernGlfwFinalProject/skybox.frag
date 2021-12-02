#version 330 core 
out vec4 fragText;

in vec3 vertexcolor;

void main()  //5 must add paranthesis
{
fragText =vec4(vertexcolor,1.0);
} 

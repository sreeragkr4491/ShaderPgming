#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 colorpos; 

out vec3 vertexcolor;

uniform mat4 projection;
uniform mat4 model;
uniform mat4 model1;
uniform mat4 view;

void main()  // 4 must add paranthesis
{ 
vertexcolor= colorpos;
gl_Position = projection*model*model1*view*vec4(position,1.0); //original
} 

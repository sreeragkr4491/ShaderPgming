#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec4 colorpos; 
out vec4 vertexcolor;
void main() 								
{ 
gl_Position = vec4(position,1.0); 
vertexcolor=colorpos;
} 


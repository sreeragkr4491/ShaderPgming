#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 Tnormal; 
out vec3 normal;
out vec3 fragPosition;


uniform mat4 model;
uniform mat4 view;
uniform mat4 view1;
uniform mat4 projection;

void main() 
{ 
fragPosition =vec3(model*vec4(position,1.0));
normal=Tnormal;
gl_Position = projection*model*view*view1*vec4(position,1.0);	

} 
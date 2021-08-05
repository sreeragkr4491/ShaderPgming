#version 330 core 
layout (location=4) in vec3 position; 
layout (location=5) in vec4 colorpos; 
out vec4 vertexcolor;
void main() 								
{ 
//gl_Position = vec4(position,1.0);  //normal position
//gl_Position = vec4(position.x, -position.y, position.z,1.0); //flipping the object
gl_Position = vec4((position.x)+0.2, -position.y, position.z,1.0); //changing the position of the object
vertexcolor=colorpos;

} 


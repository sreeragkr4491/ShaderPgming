#version 330 core 
layout (location=0) in vec3 position;  
layout (location=1) in vec4 colorpos;  
layout (location=2) in vec2 texcolor;  

out vec3 mycolor;
out vec2 mytex;


void main() 								
{ 
gl_Position = vec4(position,1.0); 
mytex=vec2(texcolor.x, texcolor.y);


} 


#version 330 core 
out vec4 color;			
in vec3 mycolor;
in vec2 mytex;
uniform sampler2D mytexture;
uniform sampler2D mytexture2;

void main()							
{ 
color = texture(mytexture,mytex); 
} 

#version 330 core 
out vec4 color;			
in vec4 mycolor;
in vec2 mytex;
uniform sampler2D mytexture;

void main()							
{ 
color = texture(mytexture,mytex)*mycolor; 
} 

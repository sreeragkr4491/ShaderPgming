#version 330 core 
out vec4 color;		

in vec3 mycolor;
in vec2 mytex;
uniform sampler2D mytexture1;
uniform sampler2D mytexture2;

void main()							
{ 
//color = texture(mytexture,mytex); 
color = mix(texture(mytexture2, mytex),texture(mytexture1, mytex),0.8);
} 

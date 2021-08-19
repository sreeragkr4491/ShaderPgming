#version 330 core 
out vec4 multiText;			

in vec3 mycolor;
in vec2 mytex;
uniform sampler2D mytexture1;
uniform sampler2D mytexture2;
uniform sampler2D mytexture3;

void main()							
{ 
//color = texture(mytexture,mytex); 
multiText = mix(texture(mytexture1, mytex),texture(mytexture2, mytex),0.3,texture(mytexture3, mytex),0.4);

} 

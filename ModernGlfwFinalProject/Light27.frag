#version 330 core 
//out vec4 color; 
out vec4 fragText;

//in vec4 mycolor;
in vec2 mytex;
//uniform sampler2D myTexture;
uniform sampler2D Texture11;
uniform sampler2D Texture22;

//uniform sampler2D Texture33;

in vec3 vertexcolor;
uniform vec3 objectCol;
uniform vec3 lightCol;

void main()  //5 must add paranthesis
{
//color = texture(myTexture, mytex);
vec3 Ambient = objectCol * lightCol;
fragText =( mix(texture(Texture11, mytex),texture(Texture22, mytex),0.4))*vec4(vertexcolor,1.0);

} 
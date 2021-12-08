#version 330 core 
layout (location=0) in vec3 position; 
layout (location=1) in vec3 Tnormal; 
layout (location=2) in vec3 texcor; 
out vec3 normal;
out vec3 fragPosition;
out vec3 vertexcolor;
out vec2 mytex;

uniform mat4 model3;
uniform mat4 view3;

void main() 
{ 
//vertexcolor= colorpos;
fragPosition =vec3(model3*vec4(position,1.0));
normal=Tnormal;
gl_Position = model3*view3*vec4(position,1.0);	
mytex=vec2(texcor.x, texcor.y);
} 
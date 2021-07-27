//simple graphics window

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 1200;  
//	GLint height = 900;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(wid, height, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	 
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//		//for background color
//		glClearColor(0.5, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}


//Shader pgming

//#include<iostream>
//#include<conio.h>
//#include<GL\glew.h>
//#include<GLFW\glfw3.h>
//using namespace std;
//const GLint width = 800, height = 600;
////vs
//const GLchar* vshader = "#version 330 core\n"
//"layout(location=0) in vec3 position;\n"
//"void main()\n"
//"{\n"
//"gl_Position=vec4(position,1.0);\n"
//"}\n";
////fs
//const GLchar* fshader = "#version 330 core\n"
//"out vec4 color;\n"
//"void main()\n"
//"{\n"
//"color=vec4(0.0,0.5,1.0,1.0);\n"
//"}\n";
//
//int main()
//{
//	glfwInit();
//	GLFWwindow* window = glfwCreateWindow(width, height, "openglwindow", nullptr, nullptr);
//	if (nullptr == window)
//	{
//		cout << "fail to open glfw window\n";
//		glfwTerminate();
//		return EXIT_FAILURE;
//	}
//	else
//		cout << "window is opening success\n";
//	glfwMakeContextCurrent(window);
//
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//		return EXIT_FAILURE;
//	}
//	else
//		cout << "glew works success\n";
//	//glViewport(0, 0, width, height);
//	//compile and attach shaders
//	GLint success;
//	GLchar infolog[512];
//
//	//vs
//	GLuint vershader = glCreateShader(GL_VERTEX_SHADER);
//	glShaderSource(vershader, 1, &vshader, NULL);
//	glCompileShader(vershader);
//	glGetShaderiv(vershader, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(vershader, 512, NULL, infolog);
//		cout << "error vertex shader compilation failed\n" << infolog << endl;
//
//	}
//
//	//fs
//	GLuint frashader = glCreateShader(GL_FRAGMENT_SHADER);
//	glShaderSource(frashader, 1, &fshader, NULL);
//	glCompileShader(frashader);
//	glGetShaderiv(frashader, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(frashader, 512, NULL, infolog);
//		cout << "error frag shader compilation failed\n" << infolog << endl;
//
//	}
//
//	//s
//	GLuint shaderprog = glCreateProgram();
//	glAttachShader(shaderprog, vershader);
//	glAttachShader(shaderprog, frashader);
//	glLinkProgram(shaderprog);
//
//	glGetProgramiv(shaderprog, GL_LINK_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(shaderprog, 512, NULL, infolog);
//		cout << "error  shader compilation and linking failed\n" << infolog << endl;
//
//	}
//
//	glDeleteShader(vershader);
//	glDeleteShader(frashader);
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,
//		0.5f, -0.5f, 0.0f,
//		0.0f, 0.5f, 0.0f
//	};
//
//	GLuint VBO, VAO;
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	while (!glfwWindowShouldClose(window))
//	{
//		glfwPollEvents();
//		glClearColor(0.2, 0.3, 0.4, 1.0);
//		glClear(GL_COLOR_BUFFER_BIT);
//
//		//implementatin
//		glUseProgram(shaderprog);
//		glBindVertexArray(VAO);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glBindVertexArray(0);
//
//		glfwSwapBuffers(window);
//
//	}
//
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//	return EXIT_SUCCESS;
//}

//lab 3 error code

//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
////vertex shader coding part
//const GLchar* vshader = "#version 330 core \n"
//"layout (location=0) in vec3 position: \n"
//"void main \n"
//"{ \n"
//"gl_Position = vec4(position,1.0); \n"
//"} \n"
//;
//
////fragment shader coding part
//const GLchar* fshader = "#version 330 core \n"
//"out vec4 color \n"
//"void main \n"
//"{ \n"
//"color = vec4(1,0,0,1); \n"
//"} \n"
//;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//
//	GLint success;
//	GLchar information[512];
//	//vertex shader 
//	GLuint verShader = glCreateShader(GL_VERTEX_SHADER);
//	glShaderSource(verShader, 1, &vshader, NULL);
//	glCompileShader(verShader);
//	glGetShaderiv(verShader, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(verShader, 512, NULL, information);
//		cout << "Error in vertex shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Vertex shader compilation success" << endl;
//
//
//	//fragment shader
//	GLuint fragShader = glCreateShader(GL_FRAGMENT_SHADER);
//	glShaderSource(fragShader, 1, &fshader, NULL);
//	glCompileShader(fragShader);
//	glGetShaderiv(fragShader, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(fragShader, 512, NULL, information);
//		cout << "Error in fragment shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Fragment shader compilation success" << endl;
//
//
//
//
//
//	//Shader linking of vertex and fragment shader
//	GLuint ShaderLink = glCreateProgram();
//	glAttachShader(ShaderLink, verShader);
//	glAttachShader(ShaderLink, fragShader);
//	glLinkProgram(ShaderLink);
//	glGetShaderiv(ShaderLink, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(ShaderLink, 512, NULL, information);
//		cout << "Error in linking the shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Shader Linking compilation success" << endl;
//
//	glDeleteShader(verShader);
//	glDeleteShader(fragShader);
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,
//		0.5f, -0.5f, 0.0f,
//		0.0f, 0.5f, 0.0f
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		glUseProgram(ShaderLink);
//		glBindVertexArray(0);
//
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//lab 4 fixed error

//
//#include<GL/glew.h> //1.must add this library
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
////vertex shader coding part
//const GLchar* vshader = "#version 330 core \n"
//"layout (location=0) in vec3 position; \n"     //3.must write the semicolon
//"void main() \n"								//4.must add () in main
//"{ \n"
//"gl_Position = vec4(position,1.0); \n"
//"} \n"
//;
//
////fragment shader coding part
//const GLchar* fshader = "#version 330 core \n"
//"out vec4 color; \n"						//5.must write the semicolon
//"void main() \n"							//6.must add () in main
//"{ \n"
//"color = vec4(1,0,0,1); \n"
//"} \n"
//;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	
//	if (!glfwInit())
//	{
//		cout << "glfw library error" << endl;
//	}
//	else
//	{
//		cout << "Success og glfw" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	GLint success;
//	GLchar information[512];
//	//vertex shader 
//	GLuint verShader = glCreateShader(GL_VERTEX_SHADER);
//	glShaderSource(verShader, 1, &vshader, NULL);
//	glCompileShader(verShader);
//	glGetShaderiv(verShader, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(verShader, 512, NULL, information);
//		cout << "Error in vertex shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Vertex shader compilation success" << endl;
//
//
//	//fragment shader
//	GLuint fragShader = glCreateShader(GL_FRAGMENT_SHADER);
//	glShaderSource(fragShader, 1, &fshader, NULL);
//	glCompileShader(fragShader);
//	glGetShaderiv(fragShader, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(fragShader, 512, NULL, information);
//		cout << "Error in fragment shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Fragment shader compilation success" << endl;
//
//
//
//
//
//	//Shader linking of vertex and fragment shader
//	GLuint ShaderLink = glCreateProgram();
//	glAttachShader(ShaderLink, verShader);
//	glAttachShader(ShaderLink, fragShader);
//	glLinkProgram(ShaderLink);
//	glGetShaderiv(ShaderLink, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(ShaderLink, 512, NULL, information);
//		cout << "Error in linking the shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Shader Linking compilation success" << endl;
//
//	glDeleteShader(verShader);
//	glDeleteShader(fragShader);
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,
//		0.5f, -0.5f, 0.0f,
//		0.0f, 0.5f, 0.0f
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		glUseProgram(ShaderLink);
//		glBindVertexArray(VAO);				//7.add parameter as VAO then it will come to know with buffer we are drawing
//
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//lab 5 how to apply the triangle color on any polygon using shader


//
//#include<GL/glew.h> //1.must add this library
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
////vertex shader coding part
//const GLchar* vshader = "#version 330 core \n"
//"layout (location=0) in vec3 position; \n"     //3.must write the semicolon
//"void main() \n"								//4.must add () in main
//"{ \n"
//"gl_Position = vec4(position,1.0); \n"
//"} \n"
//;
//
////fragment shader coding part
//const GLchar* fshader = "#version 330 core \n"
//"out vec4 color; \n"						//5.must write the semicolon
//"void main() \n"							//6.must add () in main
//"{ \n"
//"color = vec4(1,0,0,1); \n"
//"} \n"
//;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw library error" << endl;
//	}
//	else
//	{
//		cout << "Success og glfw" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	// 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	// till here glew stuff
//
//
//	GLint success;
//	GLchar information[512];
//	//vertex shader 
//	GLuint verShader = glCreateShader(GL_VERTEX_SHADER);
//	glShaderSource(verShader, 1, &vshader, NULL);
//	glCompileShader(verShader);
//	glGetShaderiv(verShader, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(verShader, 512, NULL, information);
//		cout << "Error in vertex shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Vertex shader compilation success" << endl;
//
//
//	//fragment shader
//	GLuint fragShader = glCreateShader(GL_FRAGMENT_SHADER);
//	glShaderSource(fragShader, 1, &fshader, NULL);
//	glCompileShader(fragShader);
//	glGetShaderiv(fragShader, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(fragShader, 512, NULL, information);
//		cout << "Error in fragment shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Fragment shader compilation success" << endl;
//
//
//
//
//
//	//Shader linking of vertex and fragment shader
//	GLuint ShaderLink = glCreateProgram();
//	glAttachShader(ShaderLink, verShader);
//	glAttachShader(ShaderLink, fragShader);
//	glLinkProgram(ShaderLink);
//	glGetShaderiv(ShaderLink, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(ShaderLink, 512, NULL, information);
//		cout << "Error in linking the shader compilation is== " << information << endl;
//	}
//	else
//		cout << "Shader Linking compilation success" << endl;
//
//	glDeleteShader(verShader);
//	glDeleteShader(fragShader);
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,
//		0.5f, -0.5f, 0.0f,
//		0.0f, 0.5f, 0.0f
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		glUseProgram(ShaderLink);
//		glBindVertexArray(VAO);				//7.add parameter as VAO then it will come to know with buffer we are drawing
//
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//


//lab 6 cube using shader


#include<GL/glew.h> //1.must add this library
#include<GLFW/glfw3.h>
#include<iostream>

using namespace std;

//vertex shader coding part
const GLchar* vshader = "#version 330 core \n"
"layout (location=0) in vec3 position; \n"     //3.must write the semicolon
"void main() \n"								//4.must add () in main
"{ \n"
"gl_Position = vec4(position,1.0); \n"
"} \n"
;

//fragment shader coding part
const GLchar* fshader = "#version 330 core \n"
"out vec4 color; \n"						//5.must write the semicolon
"void main() \n"							//6.must add () in main
"{ \n"
"color = vec4(1,0,0,1); \n"
"} \n"
;

void main()
{
	GLint wid = 1200; //*window variable
	GLint height = 800; //*window variable
	GLFWwindow* window; //pointer var as window that will hold address only 
	glfwInit();

	if (!glfwInit())
	{
		cout << "glfw library error" << endl;
	}
	else
	{
		cout << "Success og glfw" << endl;
	}
	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 

	// make the window context current
	glfwMakeContextCurrent(window);

	// 2.   **************** here must add glew function use*********
	if (glewInit() != GLEW_OK)
	{
		cout << "fail to open glew\n";

	}
	else
		cout << "glew works success\n";
	// till here glew stuff


	GLint success;
	GLchar information[512];
	//vertex shader 
	GLuint verShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(verShader, 1, &vshader, NULL);
	glCompileShader(verShader);
	glGetShaderiv(verShader, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(verShader, 512, NULL, information);
		cout << "Error in vertex shader compilation is== " << information << endl;
	}
	else
		cout << "Vertex shader compilation success" << endl;


	//fragment shader
	GLuint fragShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragShader, 1, &fshader, NULL);
	glCompileShader(fragShader);
	glGetShaderiv(fragShader, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(fragShader, 512, NULL, information);
		cout << "Error in fragment shader compilation is== " << information << endl;
	}
	else
		cout << "Fragment shader compilation success" << endl;





	//Shader linking of vertex and fragment shader
	GLuint ShaderLink = glCreateProgram();
	glAttachShader(ShaderLink, verShader);
	glAttachShader(ShaderLink, fragShader);
	glLinkProgram(ShaderLink);
	glGetShaderiv(ShaderLink, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(ShaderLink, 512, NULL, information);
		cout << "Error in linking the shader compilation is== " << information << endl;
	}
	else
		cout << "Shader Linking compilation success" << endl;

	glDeleteShader(verShader);
	glDeleteShader(fragShader);

	GLfloat vertices[] =
	{
		-0.5f, -0.5f, 0.0f,
		0.0f, -0.5f, 0.0f,
		0.0f, 0.5f, 0.0f,
		-0.5f, 0.5f, 0.0f
	};

	GLuint VBO, VAO;//vertex buffer obj//vert array obj
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);

	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);




	//gameloop
	while (!glfwWindowShouldClose(window))
	{
		//for the bg color
		glClearColor(0.5, 1, 1, 0); //for rgb color change
		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer

		//linking the shader / calling the shader
		glUseProgram(ShaderLink);
		glBindVertexArray(VAO);				//7.add parameter as VAO then it will come to know with buffer we are drawing

		//drawing
		glDrawArrays(GL_QUADS, 0, 4);
		//glBindVertexArray();

		glfwSwapBuffers(window);//to swap the new color for window
		glfwPollEvents();
	}
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glfwTerminate();
}



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
//	GLint wid = 1200; //*window variable
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
//		0.0f, -0.5f, 0.0f,
//		0.0f, 0.5f, 0.0f,
//		-0.5f, 0.5f, 0.0f
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
//		glDrawArrays(GL_QUADS, 0, 4);
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
//

//lab 7 split the shader files

//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
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
//	
//	//2.Code have been shifted to vertex file
//
//	//fragment shader
//	
//	//3.Code have been shifted to frag file
//
//
//
//	//Shader linking of vertex and fragment shader
//	
//
//	//attach shader files
//	Shader Myshader("Test1.vs", "Test1.frag");     //4.Create the reference of the class
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,
//		0.0f, -0.5f, 0.0f,
//		0.0f, 0.5f, 0.0f,
//		-0.5f, 0.5f, 0.0f
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
//		Myshader.Use();           //5.use the shader file
//		glBindVertexArray(VAO);				
//
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
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
//
//


//lab 8 how to apply colors with shader

//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
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
//
//	//2.Code have been shifted to vertex file
//
//	//fragment shader
//
//	//3.Code have been shifted to frag file
//
//
//
//	//Shader linking of vertex and fragment shader
//
//
//	//attach shader files
//	Shader Myshader("Test2.vs", "Test2.frag");     //4.Create the reference of the class
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,1,0,0,
//		0.0f, -0.5f, 0.0f,0,1,0,
//		0.0f, 0.5f, 0.0f,0,0,1,
//		-0.5f, 0.5f, 0.0f,1,1,0
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*) (3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
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
//		Myshader.Use();           //5.use the shader file
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//lab 9 rectangle

//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
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
//
//	//2.Code have been shifted to vertex file
//
//	//fragment shader
//
//	//3.Code have been shifted to frag file
//
//
//
//	//Shader linking of vertex and fragment shader
//
//
//	//attach shader files
//	Shader Myshader("Test3.vs", "Test3.frag");     //4.Create the reference of the class
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,1,0,0,
//		0.0f, -0.5f, 0.0f,0,1,0,
//		0.0f, 0.5f, 0.0f,0,0,1,
//		-0.5f, 0.5f, 0.0f,1,1,0
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//
//	//color
//	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);
//
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
//		Myshader.Use();           //5.use the shader file
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
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


//lab 10 draw maultiple objects with the help of buffers like VAO,VBO

//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 1200; //*window variable
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
//
//	//2.Code have been shifted to vertex file
//
//	//fragment shader
//
//	//3.Code have been shifted to frag file
//
//
//
//	//Shader linking of vertex and fragment shader
//
//
//	//attach shader files
//	Shader Myshader("Test3.vs", "Test3.frag");     //4.Create the reference of the class
//
//	//step 1 indices
//	GLfloat vertices[] =
//	{
//		//first triangle
//	   0.5f, 0.5f, 0.0f, 1, 0, 0,  // top right
//	   0.5f, -0.5f, 0.0f, 0, 1, 0,  // bottom right
//	   0.0f, 0.0f, 0.0f, 0, 0, 1
//	};
//	GLfloat vertices1[] =
//	{
//		// second triangle
//		-0.5f, -0.5f, 0.0f,0,1,0,  // bottom right
//		-0.5f, 0.5f, 0.0f,1,0,0,  // bottom left
//		0.25f, 0.0f, 0.0f,0,0,1   // top left
//	};
//
//	////step 2 make buffer as an array
//	GLuint VBO[2], VAO[2];//vertex buffer obj//vert array obj
//	glGenVertexArrays(2, VAO);
//	glGenBuffers(2, VBO);
//
//	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters
//	//for first buffer
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);
//
//
//
//	//for second buffer
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);
//
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
//		Myshader.Use();           //5.use the shader file
//
//		////step 4 must use the array variable
//		//for first drawing call
//		glBindVertexArray(VAO[0]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		//glBindVertexArray();
//
//
//		//for second drawing call
//		glBindVertexArray(VAO[1]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//
//	////step 5 must use the proper variable and position of first and second parameter
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}


//lab 11 Assignment draw 4 triangles by the above buufer methods

//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 1200; //*window variable
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
//
//	//attach shader files
//	Shader Myshader("Test3.vs", "Test3.frag");     //4.Create the reference of the class
//
//	//step 1 indices
//	GLfloat vertices[] =
//	{
//		//first triangle
//	   0.5f, 0.5f, 0.0f, 1, 0, 0,  // top right
//	   0.5f, -0.5f, 0.0f, 0, 1, 0,  // bottom right
//	   0.0f, 0.0f, 0.0f, 0, 0, 1    //center
//	};
//	GLfloat vertices1[] =
//	{
//		// second triangle
//		-0.5f, -0.5f, 0.0f,0,1,0,  // bottom right
//		-0.5f, 0.5f, 0.0f,1,0,0,  // bottom left
//		0.0f, 0.0f, 0.0f,0,0,1   // top left
//	};
//	GLfloat vertices2[] =
//	{
//		// 3rd triangle
//		0.4f, -0.7f, 0.0f,0,1,0,  // bottom right
//		-0.4f, -0.7f, 0.0f,1,0,0,  // bottom left
//		0.0f, 0.0f, 0.0f,0,0,1   // top left
//	};
//	GLfloat vertices3[] =
//	{
//		// 4th triangle
//		-0.4f, 0.7f, 0.0f,0,1,0,  // bottom right
//		0.4f, 0.7f, 0.0f,1,0,0,  // bottom left
//		0.0f, 0.0f, 0.0f,0,0,1   // top left
//	};
//
//	////step 2 make buffer as an array
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters
//	//for first buffer
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);
//
//
//
//	//for second buffer
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//for 3rd buffer
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//for 4th buffer
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		Myshader.Use();           //5.use the shader file
//
//		////step 4 must use the array variable
//		//for first drawing call
//		glBindVertexArray(VAO[0]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		//glBindVertexArray();
//
//
//		//for second drawing call
//		glBindVertexArray(VAO[1]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//
//		//for 3rd drawing call
//		glBindVertexArray(VAO[2]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//
//		//for 4th drawing call
//		glBindVertexArray(VAO[3]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//
//	////step 5 must use the proper variable and position of first and second parameter
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}


//lab 12

// Create two shader programs where the second program 
//uses a different fragment shader that outputs the color 
//yellow; draw both triangles again where one outputs the 
//color orange:

// for this proj i m using two frag(test,test1) shaders, ** mind it
// and i am using modified shader1.h file, bcs in shader file also some changes are there
// make sure change the shader1.h



//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//
//using namespace std;
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height = 1000; //*window variable
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
//
//	//attach shader files
//	Shader Myshader("Test3.vs", "Test3.frag");     //4.Create the reference of the class
//	Shader Myshader1("Test3.vs", "Test4.frag");
//	Shader Myshader2("Test3.vs", "Test5.frag");
//	Shader Myshader3("Test3.vs", "Test6.frag");
//
//
//	//step 1 indices
//	GLfloat vertices[] =    //right
//	{
//		//first triangle
//	   0.5f, 0.5f, 0.0f,  // top right
//	   0.5f, -0.5f, 0.0f,  // bottom right
//	   0.0f, 0.0f, 0.0f,   //center
//	};
//	GLfloat vertices1[] =     //left
//	{
//		// second triangle
//		-0.5f, -0.5f, 0.0f, // bottom right
//		-0.5f, 0.5f, 0.0f, // bottom left
//		0.0f, 0.0f, 0.0f  // top left
//	};
//	GLfloat vertices2[] =      //top
//	{
//		// 3rd triangle
//		0.4f, -0.7f, 0.0f,  // bottom right
//		-0.4f, -0.7f, 0.0f, // bottom left
//		0.0f, 0.0f, 0.0f,   // top left
//	};
//	GLfloat vertices3[] =   //bottom
//	{
//		// 4th triangle
//		-0.4f, 0.7f, 0.0f,0,1,0,  // bottom right
//		0.4f, 0.7f, 0.0f,1,0,0,  // bottom left
//		0.0f, 0.0f, 0.0f,0,0,1   // top left
//	};
//
//	////step 2 make buffer as an array
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters
//	//for first buffer
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//
//
//	//for second buffer
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//for 3rd buffer
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//for 4th buffer
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//
//		//linking the shader / calling the shader
//		Myshader1.Use();           //5.use the shader file
//
//		////step 4 must use the array variable
//		//for first drawing call
//		glBindVertexArray(VAO[0]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		//glBindVertexArray();
//
//
//		Myshader2.Use();
//		//for 3rd drawing call
//		glBindVertexArray(VAO[2]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//
//		
//		Myshader3.Use();
//		//for second drawing call
//		glBindVertexArray(VAO[1]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//
//		
//		
//		Myshader.Use();
//		//for 4th drawing call
//		glBindVertexArray(VAO[3]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	////step 5 must use the proper variable and position of first and second parameter
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}




//lab 13 Texturing on triangle


//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 800; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
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
//	
//	//2.Code have been shifted to vertex file
//
//	//fragment shader
//	
//	//3.Code have been shifted to frag file
//
//
//
//	//Shader linking of vertex and fragment shader
//	
//
//	//attach shader files
//	Shader Myshader("TestText.vs", "TestText.frag");     //4.Create the reference of the class
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,0.0,0.0,
//		0.5f, -0.5f, 0.0f,1.0,0.0,
//		0.0f, 0.5f, 0.0f,0.5,1.0
//		
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3* sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		Myshader.Use();           //5.use the shader file
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO);				
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


//lab 14 Texturing on rectangle

//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 800; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
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
//
//	//2.Code have been shifted to vertex file
//
//	//fragment shader
//
//	//3.Code have been shifted to frag file
//
//
//
//	//Shader linking of vertex and fragment shader
//
//
//	//attach shader files
//	Shader Myshader("TestText.vs", "TestText.frag");     //4.Create the reference of the class
//
//	GLfloat vertices[] =
//	{
//		/*-0.5f, -0.5f, 0.0f,   0.0,0.0,
//		0.0f, -0.5f, 0.0f,    0.0,1.0,
//		0.0f, 0.5f, 0.0f,     1.0,1.0,
//		-0.5f, 0.5f, 0.0f,    1.0,0.0*/
//
//		-1.0f, -1.0f, 0.0f,   0.0,1.0,
//		1.0f, -1.0f, 0.0f,    0.0,0.0,
//		1.0f, 1.0f, 0.0f,     1.0,0.0,
//		-1.0f, 1.0f, 0.0f,    1.0,1.0
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		Myshader.Use();           //5.use the shader file
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//Lab 15 4 Triangles with texture in one of those.

//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 1000; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
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
//
//	//attach shader files
//	Shader Myshader("Test3.vs", "Test3.frag");     //4.Create the reference of the class
//	Shader Myshader1("Test3.vs", "Test4.frag");
//	Shader Myshader2("TestText1.vs", "TestText1.frag");
//	Shader Myshader3("Test3.vs", "Test6.frag");
//
//
//	//step 1 indices
//	GLfloat vertices[] =    //right
//	{
//		//first triangle
//	   0.5f, 0.5f, 0.0f,  // top right
//	   0.5f, -0.5f, 0.0f,  // bottom right
//	   0.0f, 0.0f, 0.0f,   //center
//	};
//	GLfloat vertices1[] =     //left
//	{
//		// second triangle
//		-0.5f, -0.5f, 0.0f, // bottom right
//		-0.5f, 0.5f, 0.0f, // bottom left
//		0.0f, 0.0f, 0.0f  // top left
//	};
//	
//	GLfloat vertices2[] =   //top
//	{
//		// 3rd triangle
//		-0.4f, 0.7f, 0.0f,0.0,0.0,  // bottom right    //texture cordinates
//		0.4f, 0.7f, 0.0f,1.0,0.0,  // bottom left
//		0.0f, 0.0f, 0.0f,0.5,1.0 // top left
//	};
//	GLfloat vertices3[] =      //bottom
//	{
//		// 4th triangle
//		-0.4f, 0.7f, 0.0f,0,1,0,    // bottom right   
//		0.4f, 0.7f,0.0f,1,0,0,  // bottom left							
//		0.0f, 0.0f, 0.0f,0,0,1     // top left				
//
//	};
//
//	////step 2 make buffer as an array
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters
//	
//	//for first buffer
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//
//
//	//for second buffer
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//for 3rd buffer
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	
//
//		unsigned int texture;
//		glGenTextures(1, &texture);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		//texturing
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//	
//		int width, height, nrChannels;
//		unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//		glGenerateMipmap(GL_TEXTURE_2D);
//		SOIL_free_image_data(image);
//		glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//for 4th buffer
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//
//		//linking the shader / calling the shader
//		Myshader1.Use();           //5.use the shader file
//
//		////step 4 must use the array variable
//		//for first drawing call
//		glBindVertexArray(VAO[0]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//
//		Myshader3.Use();
//		//for second drawing call
//		glBindVertexArray(VAO[1]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader2.Use();
//		//for 3rd drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[2]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader.Use();
//		//for 4th drawing call
//		glBindVertexArray(VAO[3]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	////step 5 must use the proper variable and position of first and second parameter
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}


//lab 16 4 Triangles with texture in two of those.


//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 1000; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
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
//
//	//attach shader files
//	Shader Myshader("Test3.vs", "Test3.frag");     //4.Create the reference of the class
//	Shader Myshader1("TestText2.vs", "TestText2.frag");
//	Shader Myshader2("TestText1.vs", "TestText1.frag");
//	Shader Myshader3("TestText3.vs", "TestText3.frag");
//
//
//	//step 1 indices
//	GLfloat vertices[] =    //right
//	{
//		//first triangle
//	   0.5f, 0.5f, 0.0f,0.0,0.0,  // top right
//	   0.5f, -0.5f, 0.0f,1.0,0.0,  // bottom right
//	   0.0f, 0.0f, 0.0f,0.5,1.0    //center
//	};
//	GLfloat vertices1[] =     //left
//	{
//		// second triangle
//		-0.5f, -0.5f, 0.0f,0.0,0.0, // bottom right
//		-0.5f, 0.5f, 0.0f,1.0,0.0, // bottom left
//		0.0f, 0.0f, 0.0f,0.5,1.0 // top left
//	};
//	
//	GLfloat vertices2[] =   //top
//	{
//		// 3rd triangle
//		-0.4f, 0.7f, 0.0f,0.0,0.0,  // bottom right    //texture cordinates
//		0.4f, 0.7f, 0.0f,1.0,0.0,  // bottom left
//		0.0f, 0.0f, 0.0f,0.5,1.0 // top left
//	};
//	GLfloat vertices3[] =      //bottom
//	{
//		// 4th triangle
//		-0.4f, 0.7f, 0.0f,0,1,0,    // bottom right   
//		0.4f, 0.7f,0.0f,1,0,0,  // bottom left							
//		0.0f, 0.0f, 0.0f,0,0,1     // top left				
//
//	};
//
//	////step 2 make buffer as an array
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters
//	
//	//for first buffer
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//for second buffer
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width3, height3, nrChannels3;
//	unsigned char* image3 = SOIL_load_image("IMG_5389.jpg", &width3, &height3, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width3, height3, 0, GL_RGBA, GL_UNSIGNED_BYTE, image3);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image3);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	
//
//
//	//for 3rd buffer
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	
//
//		unsigned int texture1;
//		glGenTextures(1, &texture1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		//texturing
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//	
//		int width2, height2, nrChannels1;
//		unsigned char* image1 = SOIL_load_image("IMG_5389.jpg", &width2, &height2, 0, SOIL_LOAD_RGBA);
//		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//		glGenerateMipmap(GL_TEXTURE_2D);
//		SOIL_free_image_data(image1);
//		glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//for 4th buffer
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(4);
//	//color
//	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//
//		//linking the shader / calling the shader
//		Myshader1.Use();           //5.use the shader file
//
//		////step 4 must use the array variable
//		//for first drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[0]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//
//		Myshader3.Use();
//		//for second drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader2.Use();
//		//for 3rd drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[2]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader.Use();
//		//for 4th drawing call
//		glBindVertexArray(VAO[3]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	////step 5 must use the proper variable and position of first and second parameter
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}



//lab 17 4 Triangles with color and texture in one of those


//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 1000; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
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
//
//	//attach shader files
//	Shader Myshader("TestText4.vs", "TestText4.frag");              //4.Create the reference of the class
//	Shader Myshader1("TestText2.vs", "TestText2.frag");
//	Shader Myshader2("TestText1.vs", "TestText1.frag");
//	Shader Myshader3("TestText3.vs", "TestText3.frag");
//
//
//	//step 1 indices
//	GLfloat vertices[] =    //right
//	{
//		//first triangle
//	   0.5f, 0.5f, 0.0f,0.0,0.0,  // top right
//	   0.5f, -0.5f, 0.0f,1.0,0.0,  // bottom right
//	   0.0f, 0.0f, 0.0f,0.5,1.0    //center
//	};
//	GLfloat vertices1[] =     //left
//	{
//		// second triangle
//		-0.5f, -0.5f, 0.0f,0.0,0.0, // bottom right
//		-0.5f, 0.5f, 0.0f,1.0,0.0, // bottom left
//		0.0f, 0.0f, 0.0f,0.5,1.0 // top left
//	};
//
//	GLfloat vertices2[] =   //top
//	{
//		// 3rd triangle
//		-0.4f, 0.7f, 0.0f,0.0,0.0,  // bottom right    //texture cordinates
//		0.4f, 0.7f, 0.0f,1.0,0.0,  // bottom left
//		0.0f, 0.0f, 0.0f,0.5,1.0 // top left
//	};
//	GLfloat vertices3[] =      //bottom
//	{
//		// 4th triangle
//		0.4f, -0.7f, 0.0f,  0,1,0,   0.0,0.0,    // bottom right   
//		-0.4f, -0.7f,0.0f,  1,0,0,   1.0,0.0,  // bottom left							
//		0.0f, 0.0f, 0.0f,   0,0,1,   0.5,1.0     // top left				
//
//	};
//
//	////step 2 make buffer as an array
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters
//
//	//for first buffer
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//for second buffer
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width3, height3, nrChannels3;
//	unsigned char* image3 = SOIL_load_image("IMG_5389.jpg", &width3, &height3, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width3, height3, 0, GL_RGBA, GL_UNSIGNED_BYTE, image3);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image3);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//
//	//for 3rd buffer
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width2, height2, nrChannels1;
//	unsigned char* image1 = SOIL_load_image("IMG_5389.jpg", &width2, &height2, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//for 4th buffer
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture4;
//	glGenTextures(1, &texture4);
//	glBindTexture(GL_TEXTURE_2D, texture4);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width4, height4, nrChannels4;
//	unsigned char* image4 = SOIL_load_image("IMG_5389.jpg", &width4, &height4, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image4);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image4);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//
//		//linking the shader / calling the shader
//		Myshader1.Use();           //5.use the shader file
//
//		////step 4 must use the array variable
//		//for first drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[0]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//
//		Myshader3.Use();
//		//for second drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader2.Use();
//		//for 3rd drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[2]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader.Use();
//		//for 4th drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[3]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	////step 5 must use the proper variable and position of first and second parameter
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}



//lab 18 4 Triangles with color and texture in two of those



//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 1000; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
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
//
//	//attach shader files
//	Shader Myshader("TestText4.vs", "TestText4.frag");              //4.Create the reference of the class
//	Shader Myshader1("TestText2.vs", "TestText2.frag");
//	Shader Myshader2("TestText6.vs", "TestText6.frag");
//	Shader Myshader3("TestText3.vs", "TestText3.frag");
//
//
//	//step 1 indices
//	GLfloat right[] =    //right
//	{
//		//first triangle
//	   0.5f, 0.5f, 0.0f,0.0,0.0,  // top right
//	   0.5f, -0.5f, 0.0f,1.0,0.0,  // bottom right
//	   0.0f, 0.0f, 0.0f,0.5,1.0    //center
//	};
//	GLfloat left[] =     //left
//	{
//		// second triangle
//		-0.5f, -0.5f, 0.0f,0.0,0.0, // bottom right
//		-0.5f, 0.5f, 0.0f,1.0,0.0, // bottom left
//		0.0f, 0.0f, 0.0f,0.5,1.0 // top left
//	};
//
//	GLfloat top[] =   //top
//	{
//		// 3rd triangle
//		-0.4f, 0.7f, 0.0f,   0,1,0,    0.0,0.0,  // bottom right    //texture cordinates
//		0.4f, 0.7f, 0.0f,    1,0,0,    1.0,0.0,  // bottom left
//		0.0f, 0.0f, 0.0f,    0,0,1,    0.5,1.0 // top left
//	};
//	GLfloat bottom[] =      //bottom
//	{
//		// 4th triangle
//		0.4f, -0.7f, 0.0f,  0,1,0,   0.0,0.0,    // bottom right   
//		-0.4f, -0.7f,0.0f,  1,0,0,   1.0,0.0,  // bottom left							
//		0.0f, 0.0f, 0.0f,   0,0,1,   0.5,1.0     // top left				
//
//	};
//
//	////step 2 make buffer as an array
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters
//
//	//for first buffer
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//for second buffer
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width3, height3, nrChannels3;
//	unsigned char* image3 = SOIL_load_image("IMG_5389.jpg", &width3, &height3, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width3, height3, 0, GL_RGBA, GL_UNSIGNED_BYTE, image3);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image3);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//
//	//for 3rd buffer
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width2, height2, nrChannels1;
//	unsigned char* image1 = SOIL_load_image("IMG_5389.jpg", &width2, &height2, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//for 4th buffer
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture4;
//	glGenTextures(1, &texture4);
//	glBindTexture(GL_TEXTURE_2D, texture4);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width4, height4, nrChannels4;
//	unsigned char* image4 = SOIL_load_image("IMG_5389.jpg", &width4, &height4, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image4);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image4);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//
//		//linking the shader / calling the shader
//		Myshader1.Use();           //5.use the shader file
//
//		////step 4 must use the array variable
//		//for first drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[0]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//
//		Myshader3.Use();
//		//for second drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader2.Use();
//		//for 3rd drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[2]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader.Use();
//		//for 4th drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[3]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	////step 5 must use the proper variable and position of first and second parameter
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}



//lab 19 multiple textures on single 



//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"
//using namespace std;
//
//vertex shader coding part
//
//
//fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 800; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	 make the window context current
//	glfwMakeContextCurrent(window);
//
//	 2.   **************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//	 till here glew stuff
//
//
//	GLint success;
//	GLchar information[512];
//	vertex shader 
//	
//	2.Code have been shifted to vertex file
//
//	fragment shader
//	
//	3.Code have been shifted to frag file
//
//
//
//	Shader linking of vertex and fragment shader
//	
//
//	attach shader files
//	Shader Myshader("TestText7.vs", "TestText7.frag");     //4.Create the reference of the class
//
//	GLfloat vertices[] =
//	{
//		-1.0f, -1.0f, 0.0f,   0.0,1.0,
//		1.0f, -1.0f, 0.0f,    0.0,0.0,
//		1.0f, 1.0f, 0.0f,     1.0,0.0,
//		-1.0f, 1.0f, 0.0f,    1.0,1.0
//		
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3* sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	
//
//	texture1
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	texture2
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width2, height2, nrChannels2;
//	unsigned char* image2 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image2);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		linking the shader / calling the shader
//		Myshader.Use();           //5.use the shader file
//		glUniform1i(glGetUniformLocation(Myshader.Program, "mytexture1"), 0);
//
//		glUniform1i(glGetUniformLocation(Myshader.Program, "mytexture2"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture2);
//		glBindVertexArray(VAO);				
//
//		drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//lab 19 3 textures on single *****NOT POSSIBLE WITH THIS FUNCTION*****

//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 800; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
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
//
//	//2.Code have been shifted to vertex file
//
//	//fragment shader
//
//	//3.Code have been shifted to frag file
//
//
//
//	//Shader linking of vertex and fragment shader
//
//
//	//attach shader files
//	Shader Myshader("MultiText.vs", "MultiText.frag");     //4.Create the reference of the class
//
//	GLfloat vertices[] =
//	{
//		-1.0f, -1.0f, 0.0f,   0.0,1.0,
//		1.0f, -1.0f, 0.0f,    0.0,0.0,
//		1.0f, 1.0f, 0.0f,     1.0,0.0,
//		-1.0f, 1.0f, 0.0f,    1.0,1.0
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//
//
//	//texture1
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//texture2
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width2, height2, nrChannels2;
//	unsigned char* image2 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image2);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture3
//	unsigned int texture3;
//	glGenTextures(1, &texture3);
//	glBindTexture(GL_TEXTURE_2D, texture3);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width2, height2, nrChannels2;
//	unsigned char* image3 = SOIL_load_image("pubg-mobile-2.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image3);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image3);
//	glBindTexture(GL_TEXTURE_2D, 0);
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
//		Myshader.Use();           //5.use the shader file
//		glUniform1i(glGetUniformLocation(Myshader.Program, "mytexture1"), 0);
//
//		glUniform1i(glGetUniformLocation(Myshader.Program, "mytexture2"), 1);
//
//		glUniform1i(glGetUniformLocation(Myshader.Program, "mytexture3"), 2);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture2);
//		glActiveTexture(GL_TEXTURE2);
//		glBindTexture(GL_TEXTURE_2D, texture3);
//		glBindVertexArray(VAO);
//
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}


//lab 20 4 triangle with multitexture in two of those
		


//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"
//
//using namespace std;
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 1000; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
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
//
//	//attach shader files
//	Shader Myshader("TestText4.vs", "TestText4.frag");              //4.Create the reference of the class
//	Shader Myshader1("MultiText2.vs", "MultiText2.frag");
//	Shader Myshader2("TestText6.vs", "TestText6.frag");
//	Shader Myshader3("MultiText3.vs", "MultiText3.vs");
//
//
//	//step 1 indices
//	GLfloat right[] =    //right
//	{
//		//first triangle
//	   0.5f, 0.5f, 0.0f,0.0,0.0,  // top right
//	   0.5f, -0.5f, 0.0f,1.0,0.0,  // bottom right
//	   0.0f, 0.0f, 0.0f,0.5,1.0    //center
//	};
//	GLfloat left[] =     //left
//	{
//		// second triangle
//		-0.5f, -0.5f, 0.0f,0.0,0.0, // bottom right
//		-0.5f, 0.5f, 0.0f,1.0,0.0, // bottom left
//		0.0f, 0.0f, 0.0f,0.5,1.0 // top left
//	};
//
//	GLfloat top[] =   //top
//	{
//		// 3rd triangle
//		-0.4f, 0.7f, 0.0f,   0,1,0,    0.0,0.0,  // bottom right    //texture cordinates
//		0.4f, 0.7f, 0.0f,    1,0,0,    1.0,0.0,  // bottom left
//		0.0f, 0.0f, 0.0f,    0,0,1,    0.5,1.0 // top left
//	};
//	GLfloat bottom[] =      //bottom
//	{
//		// 4th triangle
//		0.4f, -0.7f, 0.0f,  0,1,0,   0.0,0.0,    // bottom right   
//		-0.4f, -0.7f,0.0f,  1,0,0,   1.0,0.0,  // bottom left							
//		0.0f, 0.0f, 0.0f,   0,0,1,   0.5,1.0     // top left				
//
//	};
//
//	////step 2 make buffer as an array
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters
//
//	//for first buffer
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture2
//			unsigned int texture5;
//			glGenTextures(1, &texture5);
//			glBindTexture(GL_TEXTURE_2D, texture5);
//			//texturing
//			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//		
//			//int width2, height2, nrChannels2;
//			unsigned char* image2 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//			glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//			glGenerateMipmap(GL_TEXTURE_2D);
//			SOIL_free_image_data(image2);
//			glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//for second buffer
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width3, height3, nrChannels3;
//	unsigned char* image3 = SOIL_load_image("IMG_5389.jpg", &width3, &height3, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width3, height3, 0, GL_RGBA, GL_UNSIGNED_BYTE, image3);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image3);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//texture2
//	unsigned int texture6;
//	glGenTextures(1, &texture6);
//	glBindTexture(GL_TEXTURE_2D, texture6);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width2, height2, nrChannels2;
//	unsigned char* image6 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image6);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image6);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//for 3rd buffer
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width2, height2, nrChannels1;
//	unsigned char* image1 = SOIL_load_image("IMG_5389.jpg", &width2, &height2, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//for 4th buffer
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture4;
//	glGenTextures(1, &texture4);
//	glBindTexture(GL_TEXTURE_2D, texture4);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width4, height4, nrChannels4;
//	unsigned char* image4 = SOIL_load_image("IMG_5389.jpg", &width4, &height4, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image4);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image4);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//
//		//linking the shader / calling the shader
//		Myshader1.Use();           //5.use the shader file
//		glUniform1i(glGetUniformLocation(Myshader1.Program, "mytexture1"), 0);
//		
//		glUniform1i(glGetUniformLocation(Myshader1.Program, "mytexture2"), 1);
//		////step 4 must use the array variable
//		//for first drawing call
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture5);
//		glBindVertexArray(VAO[0]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//
//		Myshader3.Use();
//		glUniform1i(glGetUniformLocation(Myshader3.Program, "mytexture1"), 0);
//
//		glUniform1i(glGetUniformLocation(Myshader3.Program, "mytexture2"), 1);
//		//for second drawing call
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture5);
//		glBindVertexArray(VAO[1]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader2.Use();
//		//for 3rd drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[2]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader.Use();
//		//for 4th drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[3]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	////step 5 must use the proper variable and position of first and second parameter
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}




//lab 21 Transformation on textured object

//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     
//#include"SOIL2/SOIL2.h"
////step 1 add glm(Graphical lib for mathematics)
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 800; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	 //make the window context current
//	glfwMakeContextCurrent(window);
//
//	
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
//	
//
//	//attach shader files
//	Shader Myshader("MultiText4.vs", "MultiText4.frag");     
//
//	GLfloat vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,   0.0,1.0,
//		0.5f, -0.5f, 0.0f,    0.0,0.0,
//		0.5f, 0.5f, 0.0f,     1.0,0.0,
//		-0.5f, 0.5f, 0.0f,    1.0,1.0
//		
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3* sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture1
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//texture2
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	
//	unsigned char* image2 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image2);
//	glBindTexture(GL_TEXTURE_2D, 0);
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
//		Myshader.Use();           
//		glUniform1i(glGetUniformLocation(Myshader.Program, "mytexture1"), 0);
//
//		glUniform1i(glGetUniformLocation(Myshader.Program, "mytexture2"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture2);
//
//		//step 2 Transformation stuff
//		glm::mat4 transforme=glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.5, 0.5, 0));
//		transforme = glm::scale(transforme, glm::vec3(0.25, 0.25, 0));
//		transforme = glm::rotate(transforme, tan((float)glfwGetTime()*2),glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces=glGetUniformLocation(Myshader.Program,"transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//
//		glBindVertexArray(VAO);				
//		//drawing
//		glDrawArrays(GL_QUADS, 0, 4);
//		
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//lab 22 transformation in 4 triangles 


//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"
//
////step 1 add glm(Graphical lib for mathematics)
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//using namespace std;
//
//
//void main()
//{
//	GLint wid = 1200; //*window variable
//	GLint height1 = 1000; //*window variable
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
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
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
//
//	//attach shader files
//	Shader Myshader("TestText4.vs", "TestText4.frag");              //4.Create the reference of the class
//	Shader Myshader1("MultiText2.vs", "MultiText2.frag");
//	Shader Myshader2("TestText6.vs", "TestText6.frag");
//	Shader Myshader3("MultiText5.vs", "MultiText5.frag");
//
//
//	//step 1 indices
//	GLfloat right[] =    //right
//	{
//		//first triangle
//	   0.5f, 0.5f, 0.0f,0.0,0.0,  // top right
//	   0.5f, -0.5f, 0.0f,1.0,0.0,  // bottom right
//	   0.0f, 0.0f, 0.0f,0.5,1.0    //center
//	};
//	GLfloat left[] =     //left
//	{
//		// second triangle
//		-0.5f, -0.5f, 0.0f,0.0,0.0, // bottom right
//		-0.5f, 0.5f, 0.0f,1.0,0.0, // bottom left
//		0.0f, 0.0f, 0.0f,0.5,1.0 // top left
//	};
//
//	GLfloat top[] =   //top
//	{
//		// 3rd triangle
//		-0.4f, 0.7f, 0.0f,   0,1,0,    0.0,0.0,  // bottom right    //texture cordinates
//		0.4f, 0.7f, 0.0f,    1,0,0,    1.0,0.0,  // bottom left
//		0.0f, 0.0f, 0.0f,    0,0,1,    0.5,1.0 // top left
//	};
//	GLfloat bottom[] =      //bottom
//	{
//		// 4th triangle
//		0.4f, -0.7f, 0.0f,  0,1,0,   0.0,0.0,    // bottom right   
//		-0.4f, -0.7f,0.0f,  1,0,0,   1.0,0.0,  // bottom left							
//		0.0f, 0.0f, 0.0f,   0,0,1,   0.5,1.0     // top left				
//
//	};
//
//	////step 2 make buffer as an array
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters
//
//	//for first buffer
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width, height, nrChannels;
//	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture2
//			unsigned int texture5;
//			glGenTextures(1, &texture5);
//			glBindTexture(GL_TEXTURE_2D, texture5);
//			//texturing
//			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//		
//			//int width2, height2, nrChannels2;
//			unsigned char* image2 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//			glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//			glGenerateMipmap(GL_TEXTURE_2D);
//			SOIL_free_image_data(image2);
//			glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//for second buffer
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(5);*/
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width3, height3, nrChannels3;
//	unsigned char* image3 = SOIL_load_image("IMG_5389.jpg", &width3, &height3, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width3, height3, 0, GL_RGBA, GL_UNSIGNED_BYTE, image3);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image3);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//texture2
//	unsigned int texture6;
//	glGenTextures(1, &texture6);
//	glBindTexture(GL_TEXTURE_2D, texture6);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width2, height2, nrChannels2;
//	unsigned char* image6 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image6);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image6);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//for 3rd buffer
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width2, height2, nrChannels1;
//	unsigned char* image1 = SOIL_load_image("IMG_5389.jpg", &width2, &height2, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//for 4th buffer
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	unsigned int texture4;
//	glGenTextures(1, &texture4);
//	glBindTexture(GL_TEXTURE_2D, texture4);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	int width4, height4, nrChannels4;
//	unsigned char* image4 = SOIL_load_image("IMG_5389.jpg", &width4, &height4, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image4);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image4);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//
//		//linking the shader / calling the shader
//		Myshader1.Use();           //5.use the shader file
//		glUniform1i(glGetUniformLocation(Myshader1.Program, "mytexture1"), 0);
//		
//		glUniform1i(glGetUniformLocation(Myshader1.Program, "mytexture2"), 1);
//		////step 4 must use the array variable
//		//for first drawing call
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture5);
//		glBindVertexArray(VAO[0]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		//glBindVertexArray();
//
//
//		Myshader3.Use();
//		glUniform1i(glGetUniformLocation(Myshader3.Program, "mytexture1"), 0);
//
//		glUniform1i(glGetUniformLocation(Myshader3.Program, "mytexture2"), 1);
//		//for second drawing call
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture5);
//
//
//		//step 2 Transformation stuff
//		glm::mat4 transforme=glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.0, 0.0, 0));
//		transforme = glm::scale(transforme, glm::vec3(0.25, 0.25, 0));
//		transforme = glm::rotate(transforme, tan((float)glfwGetTime()*2),glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces=glGetUniformLocation(Myshader3.Program,"transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//
//		glBindVertexArray(VAO[1]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader2.Use();
//		//for 3rd drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[2]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		Myshader.Use();
//		//for 4th drawing call
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[3]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	////step 5 must use the proper variable and position of first and second parameter
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}




//lab 23 transformation in 4 triangles with keys


#include<GL/glew.h> 
#include<GLFW/glfw3.h>
#include<iostream>
#include"Shader.h"     //1.Attach the shader file
#include"SOIL2/SOIL2.h"

//step 1 add glm(Graphical lib for mathematics)
#include <glm/glm.hpp>//Graphics Lib for mathematics.
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
using namespace std;


void main()
{
	GLint wid = 1200; //*window variable
	GLint height1 = 1000; //*window variable
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
	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 

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

	//attach shader files
	Shader Myshader("TestText4.vs", "TestText4.frag");              //4.Create the reference of the class
	Shader Myshader1("MultiText2.vs", "MultiText2.frag");
	Shader Myshader2("TestText6.vs", "TestText6.frag");
	Shader Myshader3("MultiText5.vs", "MultiText5.frag");


	//step 1 indices
	GLfloat right[] =    //right
	{
		//first triangle
	   0.5f, 0.5f, 0.0f,0.0,0.0,  // top right
	   0.5f, -0.5f, 0.0f,1.0,0.0,  // bottom right
	   0.0f, 0.0f, 0.0f,0.5,1.0    //center
	};
	GLfloat left[] =     //left
	{
		// second triangle
		-0.5f, -0.5f, 0.0f,0.0,0.0, // bottom right
		-0.5f, 0.5f, 0.0f,1.0,0.0, // bottom left
		0.0f, 0.0f, 0.0f,0.5,1.0 // top left
	};

	GLfloat top[] =   //top
	{
		// 3rd triangle
		-0.4f, 0.7f, 0.0f,   0,1,0,    0.0,0.0,  // bottom right    //texture cordinates
		0.4f, 0.7f, 0.0f,    1,0,0,    1.0,0.0,  // bottom left
		0.0f, 0.0f, 0.0f,    0,0,1,    0.5,1.0 // top left
	};
	GLfloat bottom[] =      //bottom
	{
		// 4th triangle
		0.4f, -0.7f, 0.0f,  0,1,0,   0.0,0.0,    // bottom right   
		-0.4f, -0.7f,0.0f,  1,0,0,   1.0,0.0,  // bottom left							
		0.0f, 0.0f, 0.0f,   0,0,1,   0.5,1.0     // top left				

	};

	////step 2 make buffer as an array
	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
	glGenVertexArrays(4, VAO);
	glGenBuffers(4, VBO);

	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters

	//for first buffer
	glBindVertexArray(VAO[0]);
	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
	//vertex
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	//color
	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(5);*/

	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);

	unsigned int texture;
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	//texturing
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	int width, height, nrChannels;
	unsigned char* image = SOIL_load_image("IMG_5389.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	glGenerateMipmap(GL_TEXTURE_2D);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);


	//texture2
	unsigned int texture5;
	glGenTextures(1, &texture5);
	glBindTexture(GL_TEXTURE_2D, texture5);
	//texturing
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	//int width2, height2, nrChannels2;
	unsigned char* image2 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
	glGenerateMipmap(GL_TEXTURE_2D);
	SOIL_free_image_data(image2);
	glBindTexture(GL_TEXTURE_2D, 0);


	//for second buffer
	glBindVertexArray(VAO[1]);
	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
	//vertex
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	//color
	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(5);*/

	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);

	unsigned int texture2;
	glGenTextures(1, &texture2);
	glBindTexture(GL_TEXTURE_2D, texture2);
	//texturing
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	int width3, height3, nrChannels3;
	unsigned char* image3 = SOIL_load_image("IMG_5389.jpg", &width3, &height3, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width3, height3, 0, GL_RGBA, GL_UNSIGNED_BYTE, image3);
	glGenerateMipmap(GL_TEXTURE_2D);
	SOIL_free_image_data(image3);
	glBindTexture(GL_TEXTURE_2D, 0);

	//texture2
	unsigned int texture6;
	glGenTextures(1, &texture6);
	glBindTexture(GL_TEXTURE_2D, texture6);
	//texturing
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	//int width2, height2, nrChannels2;
	unsigned char* image6 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image6);
	glGenerateMipmap(GL_TEXTURE_2D);
	SOIL_free_image_data(image6);
	glBindTexture(GL_TEXTURE_2D, 0);


	//for 3rd buffer
	glBindVertexArray(VAO[2]);
	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
	//vertex
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	//color
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);



	unsigned int texture1;
	glGenTextures(1, &texture1);
	glBindTexture(GL_TEXTURE_2D, texture1);
	//texturing
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	int width2, height2, nrChannels1;
	unsigned char* image1 = SOIL_load_image("IMG_5389.jpg", &width2, &height2, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
	glGenerateMipmap(GL_TEXTURE_2D);
	SOIL_free_image_data(image1);
	glBindTexture(GL_TEXTURE_2D, 0);


	//for 4th buffer
	glBindVertexArray(VAO[3]);
	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
	//vertex
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	//color
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);
	//texture
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);


	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);

	unsigned int texture4;
	glGenTextures(1, &texture4);
	glBindTexture(GL_TEXTURE_2D, texture4);
	//texturing
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	int width4, height4, nrChannels4;
	unsigned char* image4 = SOIL_load_image("IMG_5389.jpg", &width4, &height4, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width2, height2, 0, GL_RGBA, GL_UNSIGNED_BYTE, image4);
	glGenerateMipmap(GL_TEXTURE_2D);
	SOIL_free_image_data(image4);
	glBindTexture(GL_TEXTURE_2D, 0);

	//gameloop
	while (!glfwWindowShouldClose(window))
	{
		//for the bg color
		glClearColor(0.5, 1, 1, 0); //for rgb color change
		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer


		//linking the shader / calling the shader
		Myshader1.Use();           //5.use the shader file
		glUniform1i(glGetUniformLocation(Myshader1.Program, "mytexture1"), 0);

		glUniform1i(glGetUniformLocation(Myshader1.Program, "mytexture2"), 1);
		////step 4 must use the array variable
		//for first drawing call
		glActiveTexture(GL_TEXTURE0);
		glBindTexture(GL_TEXTURE_2D, texture);
		glActiveTexture(GL_TEXTURE1);
		glBindTexture(GL_TEXTURE_2D, texture5);
		glBindVertexArray(VAO[0]);
		//drawing
		glDrawArrays(GL_TRIANGLES, 0, 3);
		//glBindVertexArray();


		Myshader3.Use();
		glUniform1i(glGetUniformLocation(Myshader3.Program, "mytexture1"), 0);

		glUniform1i(glGetUniformLocation(Myshader3.Program, "mytexture2"), 1);
		//for second drawing call
		glActiveTexture(GL_TEXTURE0);
		glBindTexture(GL_TEXTURE_2D, texture);
		glActiveTexture(GL_TEXTURE1);
		glBindTexture(GL_TEXTURE_2D, texture5);


		//step 2 Transformation stuff
		glm::mat4 transforme = glm::mat4(1.0f);
		transforme = glm::translate(transforme, glm::vec3(0.0, 0.0, 0));
		transforme = glm::scale(transforme, glm::vec3(0.25, 0.25, 0));
		transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 2), glm::vec3(-1.0, 0, -1.0));

		//step 3 get the uniform data from the vs shader file
		unsigned int transformacces = glGetUniformLocation(Myshader3.Program, "transform");
		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));


		glBindVertexArray(VAO[1]);
		//drawing
		glDrawArrays(GL_TRIANGLES, 0, 3);


		Myshader2.Use();
		//for 3rd drawing call
		glBindTexture(GL_TEXTURE_2D, texture);
		glBindVertexArray(VAO[2]);
		//drawing
		glDrawArrays(GL_TRIANGLES, 0, 3);


		Myshader.Use();
		//for 4th drawing call
		glBindTexture(GL_TEXTURE_2D, texture);
		glBindVertexArray(VAO[3]);
		//drawing
		glDrawArrays(GL_TRIANGLES, 0, 3);

		glfwSwapBuffers(window);//to swap the new color for window
		glfwPollEvents();
	}
	////step 5 must use the proper variable and position of first and second parameter
	glDeleteVertexArrays(1, VAO);
	glDeleteBuffers(2, VBO);
	glfwTerminate();
}

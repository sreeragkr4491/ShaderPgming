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

#include<GL/glew.h> 
#include<GLFW/glfw3.h>
#include<iostream>
#include"Shader.h"     //1.Attach the shader file

using namespace std;

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

	//attach shader files
	Shader Myshader("Test3.vs", "Test3.frag");     //4.Create the reference of the class
	Shader Myshader1("Test3.vs", "Test4.frag");

	//step 1 indices
	GLfloat vertices[] =
	{
		//first triangle
	   0.5f, 0.5f, 0.0f, 1, 0, 0,  // top right
	   0.5f, -0.5f, 0.0f, 0, 1, 0,  // bottom right
	   0.0f, 0.0f, 0.0f, 0, 0, 1    //center
	};
	GLfloat vertices1[] =
	{
		// second triangle
		-0.5f, -0.5f, 0.0f, // bottom right
		-0.5f, 0.5f, 0.0f, // bottom left
		0.0f, 0.0f, 0.0f  // top left
	};
	GLfloat vertices2[] =
	{
		// 3rd triangle
		0.4f, -0.7f, 0.0f,0,1,0,  // bottom right
		-0.4f, -0.7f, 0.0f,1,0,0,  // bottom left
		0.0f, 0.0f, 0.0f,0,0,1   // top left
	};
	GLfloat vertices3[] =
	{
		// 4th triangle
		-0.4f, 0.7f, 0.0f,0,1,0,  // bottom right
		0.4f, 0.7f, 0.0f,1,0,0,  // bottom left
		0.0f, 0.0f, 0.0f,0,0,1   // top left
	};

	////step 2 make buffer as an array
	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
	glGenVertexArrays(4, VAO);
	glGenBuffers(4, VBO);

	////step 3 make sure all variables should be treated as array variable use the proper variable n parameters
	//for first buffer
	glBindVertexArray(VAO[0]);
	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	//vertex
	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(4);
	//color
	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(5);



	//for second buffer
	glBindVertexArray(VAO[1]);
	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
	//vertex
	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(4);
	//color
	/*glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(5);*/

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);


	//for 3rd buffer
	glBindVertexArray(VAO[2]);
	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
	//vertex
	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(4);
	//color
	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(5);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);


	//for 4th buffer
	glBindVertexArray(VAO[3]);
	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
	//vertex
	glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(4);
	//color
	glVertexAttribPointer(5, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(5);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);

	//gameloop
	while (!glfwWindowShouldClose(window))
	{
		//for the bg color
		glClearColor(0.5, 1, 1, 0); //for rgb color change
		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer

		//linking the shader / calling the shader
		Myshader.Use();           //5.use the shader file

		////step 4 must use the array variable
		//for first drawing call
		glBindVertexArray(VAO[0]);
		//drawing
		glDrawArrays(GL_TRIANGLES, 0, 6);
		//glBindVertexArray();



		//for 3rd drawing call
		glBindVertexArray(VAO[2]);
		//drawing
		glDrawArrays(GL_TRIANGLES, 0, 6);

		//for 4th drawing call
		glBindVertexArray(VAO[3]);
		//drawing
		glDrawArrays(GL_TRIANGLES, 0, 6);

		Myshader1.Use();
		//for second drawing call
		glBindVertexArray(VAO[1]);
		//drawing
		glDrawArrays(GL_TRIANGLES, 0, 6);

		glfwSwapBuffers(window);//to swap the new color for window
		glfwPollEvents();
	}

	////step 5 must use the proper variable and position of first and second parameter
	glDeleteVertexArrays(1, VAO);
	glDeleteBuffers(2, VBO);
	glfwTerminate();
}
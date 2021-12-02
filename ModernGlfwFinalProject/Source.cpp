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


//
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




//lab 23 transformation in 1 of 4 triangles with keys


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
//GLfloat transx = 0.0f;
//GLfloat transy = 0.0f;
//
//GLfloat scale = 0.1f;
//GLboolean scaleup = false;
//
//GLfloat rotatex = 0.0f;
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
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
//	glfwSetKeyCallback(window, keyCallback);
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
//	unsigned int texture5;
//	glGenTextures(1, &texture5);
//	glBindTexture(GL_TEXTURE_2D, texture5);
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
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0));
//		transforme = glm::scale(transforme, glm::vec3(0.25+scale, 0.25+scale, 0));
//		transforme = glm::rotate(transforme, tan((float)glfwGetTime() * rotatex), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(Myshader3.Program, "transform");
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
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//	
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			transy += 0.1;
//			break;
//		case GLFW_KEY_DOWN:
//			transy -= 0.1;
//			break;
//		case GLFW_KEY_RIGHT:
//			transx += 0.1;
//			break;
//		case GLFW_KEY_LEFT:
//			transx -= 0.1;   
//			break;
//
//		case GLFW_KEY_KP_ADD:
//			if (scale <= 2.5)
//			{
//				scale += 0.1;
//			}
//			else
//				//scaleup = false;
//			scale -= 0.1;
//			break;
//		case GLFW_KEY_KP_SUBTRACT:
//			if (scale >= 0.5)
//			{
//				scale -= 0.1;
//			}
//			else
//				scaleup = true;
//			break;
//		
//		case GLFW_KEY_6:
//			rotatex += 0.1;
//			break;
//		case GLFW_KEY_4:
//			rotatex -= 0.1;
//			break;
//		}
//	}
//	
//}




//lab 24 transformation in 2 triangles in 4 with keys

//
//#include<GL/glew.h> 
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include"Shader.h"     //1.Attach the shader file
//#include"SOIL2/SOIL2.h"   //for texturing
//
////step 1 add glm(Graphical lib for mathematics)
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//using namespace std;
//
//GLfloat transx = 0.0f;
//GLfloat transy = 0.0f;
//
//GLfloat scale = 0.1f;
//GLboolean scaleup = false;
//
//GLfloat rotatex = 0.0f;
//
//GLfloat transx1 = 0.0f;
//GLfloat transy1 = 0.0f;
//
//GLfloat scale1 = 0.1f;
//GLboolean scaleup1 = false;
//
//GLfloat rotatex1 = 0.0f;
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
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
//	glfwSetKeyCallback(window, keyCallback);
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
//	Shader Myshader1("MultiText6.vs", "MultiText6.frag");
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
//	unsigned int texture5;
//	glGenTextures(1, &texture5);
//	glBindTexture(GL_TEXTURE_2D, texture5);
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
//
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
//
//		//step 2 Transformation stuff
//		glm::mat4 transforme1 = glm::mat4(1.0f);
//		transforme1 = glm::translate(transforme1, glm::vec3(0.0 + transx1, 0.0 + transy1, 0));
//		transforme1 = glm::scale(transforme1, glm::vec3(0.25 + scale1, 0.25 + scale1, 0));
//		transforme1 = glm::rotate(transforme1, tan((float)glfwGetTime() * rotatex1), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces1 = glGetUniformLocation(Myshader1.Program, "transform");
//		glUniformMatrix4fv(transformacces1, 1, GL_FALSE, glm::value_ptr(transforme1));
//
//
//
//		glBindVertexArray(VAO[0]);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		
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
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//		transforme = glm::scale(transforme, glm::vec3(0.25 + scale, 0.25 + scale, 0));
//		transforme = glm::rotate(transforme, tan((float)glfwGetTime() * rotatex), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(Myshader3.Program, "transform");
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
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			transy += 0.1;
//			break;
//		case GLFW_KEY_DOWN:
//			transy -= 0.1;
//			break;
//		case GLFW_KEY_RIGHT:
//			transx += 0.1;
//			break;
//		case GLFW_KEY_LEFT:
//			transx -= 0.1;
//			break;
//
//		case GLFW_KEY_KP_ADD:
//			if (scale <= 2.5)
//			{
//				scale += 0.1;
//			}
//			else
//				//scaleup = false;
//				scale -= 0.1;
//			break;
//		case GLFW_KEY_KP_SUBTRACT:
//			if (scale >= 0.5)
//			{
//				scale -= 0.1;
//			}
//			else
//				scaleup = true;
//			break;
//
//		case GLFW_KEY_6:
//			rotatex += 0.1;
//			break;
//		case GLFW_KEY_4:
//			rotatex -= 0.1;
//			break;
//
//
//
//		case GLFW_KEY_W:
//			transy1 += 0.1;
//			break;
//		case GLFW_KEY_S:
//			transy1 -= 0.1;
//			break;
//		case GLFW_KEY_D:
//			transx1 += 0.1;
//			break;
//		case GLFW_KEY_A:
//			transx1 -= 0.1;
//			break;
//
//		case GLFW_KEY_Z:
//			if (scale1 <= 2.5)
//			{
//				scale1 += 0.1;
//			}
//			else
//				//scaleup = false;
//				scale1 -= 0.1;
//			break;
//		case GLFW_KEY_X:
//			if (scale1 >= 0.5)
//			{
//				scale1 -= 0.1;
//			}
//			else
//				scaleup1 = true;
//			break;
//
//		case GLFW_KEY_P:
//			rotatex1 += 0.1;
//			break;
//		case GLFW_KEY_L:
//			rotatex1 -= 0.1;
//			break;
//		}
//	}
//
//}




//28 4.a 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
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
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform.vs", "transform.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, //top left
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//step 2 Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::scale(transforme, glm::vec3(0.25, 0.25, 0));
//		transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//		transforme = glm::translate(transforme, glm::vec3(0.8, 0.5, 0));
//
//		//transforme = glm::translate(transforme, glm::vec3(0.8, 0.5, 0));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
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


//28 4.b

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//
////Step 1 for tsr: Graphics Lib for mathematics.
//#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
////fragment shader coding part
//
//void main()
//{
//	GLint wid = 1200; //window variable
//	GLint height1 = 1000; //window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //assigned window variable 
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
//	//vertex shader / fragment shader / shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("fourBstr.vs", "fourBstr.frag");
//	Shader shaders1("triangletsr.vs", "triangletsr.frag");
//	Shader shaders2("Test2.vs", "left.frag");
//	Shader shaders3("MultiText.vs", "MultiText.frag");
//
//	GLfloat bottom[] =
//	{
//		-0.4f, -0.4f, 0.0f, 1,0,0, //left
//		 0.4f, -0.4f, 0.0f,	0,1,0, //right
//		 0.0f,  0.0f, 0.0f,	0,0,1 //top 
//	};
//
//	GLfloat top[] =
//	{
//		-0.5f, 0.5f, 0.0f, 0.0,0.0, //left
//		 0.5f, 0.5f, 0.0f,	1.0,1.0, //right
//		 0.0f,  0.0f, 0.0f, 0.0,1.0 //bottom
//
//	};
//
//	GLfloat left[] =
//	{
//		-0.4f, -0.4f, 0.0f, //left
//		-0.4f, 0.4f, 0.0f,	 //right
//		 0.0f,  0.0f, 0.0f //top
//	};
//
//	GLfloat right[] =
//	{
//		 0.4f, -0.4f, 0.0f,  0.0,0.0,//left
//		 0.4f,  0.4f, 0.0f,	 1.0,1.0,//right
//		 0.0f,  0.0f, 0.0f,  0.0,1.0 //bottom
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//------------------------------
//
//	//BOTTOM TRIANGLE
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(bottom), bottom, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); 
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat))); 
//	glEnableVertexAttribArray(1); 
//
//	//------------------------------
//
//	//TOP TRIANGLE
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(top), top, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	//------------------------------
//
//	//LEFT TRIANGLE
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(left), left, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); 
//
//	//------------------------------
//
//	//RIGHT TRIANGLE
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(right), right, GL_STATIC_DRAW);
//	
//	//vertex
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0); 
//	glEnableVertexAttribArray(0); //vertex
//	
//	//color
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture 1: file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//------------------------------
//
//	//texture 2: file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//------------------------------
//
//	//texture file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture2;
//	glGenTextures(1, &texture2);
//	glBindTexture(GL_TEXTURE_2D, texture2);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image2 = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image2);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image2);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//						
//		//6 must pass parameter vao to see visibility of drawing 
//
//		//BOTTOM
//		shaders.Use();	//linking the shader / calling the shader
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		//Step 2 for tsr: Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.0, -0.5, 0));
//		//transforme = glm::scale(transforme, glm::vec3(0.5, 0.5, 0));
//		float scaleAmount = sin(glfwGetTime());
//		transforme = glm::scale(transforme, glm::vec3(scaleAmount, scaleAmount, scaleAmount));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//Step 3 for tsr: get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform1");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//		//------------------------------
//
//		//TOP
//		shaders1.Use();	
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); 
//
//		//Step 2 for tsr: Transformation stuff
//		glm::mat4 transforme1 = glm::mat4(1.0f);
//		transforme1 = glm::translate(transforme1, glm::vec3(0.0, 0.5, 0));
//		transforme1 = glm::scale(transforme1, glm::vec3(0.5, 0.5, 0));
//		transforme1 = glm::rotate(transforme1, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//Step 3 for tsr: get the uniform data from the vs shader file
//		unsigned int transformacces2 = glGetUniformLocation(shaders1.Program, "transform");
//		glUniformMatrix4fv(transformacces2, 1, GL_FALSE, glm::value_ptr(transforme1));
//
//		//------------------------------
//
//		//LEFT
//		shaders2.Use();	
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); 
//
//		//------------------------------
//
//		//RIGHT
//		shaders3.Use();	
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture2);
//
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 6); //drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}



//******* Start 3d Implementation

//29 How to implement 3d technique on 2d object using model, view, projection (MVP) that will behvae like 2.5D

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
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
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform1.vs", "transform1.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, //top left
//
//		// positions          // colors           // texture coords
//		/*0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f,  // top right
//		0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,   // bottom right
//		-0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f,    // bottom left
//		-0.5f, 0.5f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f */   // top left 
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//step 2 Transformation stuff
//
//		////model
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::rotate(model, glm::radians(-55.0f), glm::vec3(1.0, 0.0, 0.0));
//
//		////view
//		//glm::mat4 view = glm::mat4(1.0f);
//		//view = glm::translate(view, glm::vec3(0.5, 0.5, 0));
//
//		////projection
//		//glm::mat4 projection;
//		////projection = glm::scale(projection, glm::vec3(0.25, 0.25, 0));
//		//projection=glm::perspective(glm::radians(45.0f), (float)width / (float)height, 0.5f, 100.0f);
//
//	
//		////Model
//		// int modelAccess = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(modelAccess, 1, GL_FALSE, glm::value_ptr(model));
//
//		////View
//		// int viewAccess = glGetUniformLocation(shaders.Program, "view");
//		//glUniformMatrix4fv(viewAccess, 1, GL_FALSE,(&view[0][0]));
//
//		////Projection
//		// int projectionAccess = glGetUniformLocation(shaders.Program, "projection");
//		//glUniformMatrix4fv(projectionAccess, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//step 2 Transformation stuff
//		glm::mat4 transforme = glm::mat4(1.0f);
//		transforme = glm::translate(transforme, glm::vec3(0.5, 0.5, 0));
//		transforme = glm::scale(transforme, glm::vec3(0.5, 0.5, 0));
//		transforme = glm::rotate(transforme, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transforme));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
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



//30 How to implement 3d technique on 2d object using model, view, projection (MVP) that will behvae like 2.5D

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
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
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform2.vs", "transform2.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, //bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, //bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, //top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, //top left
//
//		// positions          // colors           // texture coords
//		/*0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f,  // top right
//		0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,   // bottom right
//		-0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f,    // bottom left
//		-0.5f, 0.5f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f */   // top left 
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"),0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"),1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.25, 0.25, 0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0));
//
//		//scale
//		glm::mat4 scale = glm::mat4(1.0f);
//		scale = glm::scale(scale, glm::vec3(0.5, 0.5, 0));
//		
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "scale");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(scale));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
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


//31** My first 3d object using shaders and buffers

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
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
//	GLint wid = 800; //*window variable
//	GLint height1 = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//Attaching shader Files 
//	Shader shaders("transform3.vs", "transform3.frag");
//
//	GLfloat vertices[] =
//	{
//		-1.0, -0.5f, 0.0f, 0.0,1.0, 1,0,0,//bottom left
//		1.0f, -0.5f, 0.0f,1.0,1.0, 0,1,0,//bottom right
//		1.0f, 0.5f, 0.0f, 1.0,0.0, 0,0,1,//top right
//		-1.0f, 0.5f, 0.0f, 0.0,0.0, 1,0,0//top left
//
//		// positions          // colors           // texture coords
//		/*0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f,  // top right
//		0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,   // bottom right
//		-0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f,    // bottom left
//		-0.5f, 0.5f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f */   // top left 
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.25, 0.25, 0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0));
//
//		//scale
//		glm::mat4 scale = glm::mat4(1.0f);
//		scale = glm::scale(scale, glm::vec3(0.5, 0.5, 0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "scale");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(scale));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
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



//32** 3d Object Projection by perspective, we are drawing 3d object using MVP(Model, View, Projection)

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
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
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//	
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1); 
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.0, -0.3, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(45.0f),(float)wid/(float)height1,0.1f,100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}




//33 Translate in a different way


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
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
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1,&VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}




//34 Hw: 


//- [1]  The present last last output of cube make it interactive, first by keys it should scale,second by key make rotation, third by keys make translation, fourth combine all with different keys
//-[2]  Draw at least 4 3d objects at different - different positions having equal their sizes
//- [3]  Question number 2nd make it interactive as question number 1st

//[1] [A] Translate

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f,  0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f,  0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f,  0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		 0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.0+transx, 0.0+transy, 0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
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
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//}

//[1] [B] Scale

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f,  0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f,  0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f,  0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		 0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::scale(projection, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//step 3 get the uniform data from the vs shader file
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
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
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//
//
//		switch (key)
//		{
//		case GLFW_KEY_W:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_S:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//
//	}
//}

//[1] [C] Rotation 

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//GLfloat rotationy = 0.0f; //step 2: for rotating in y axis
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f,  0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f,  0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f,  0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		 0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		 0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//with sin/tan angle
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, glm::radians(-55.0f), glm::vec3(rotationx, rotationy, 0.0f));
//
//		//step 3 get the uniform data from the vs shader file
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
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
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 100;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationy -= rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//}




//35 4 Cubes in 3D

//AUTOMATIC WITHOUT KEYS
//************************Uncomment original line MODEL VIEW PROJECTION in vs



//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
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
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files
//
//	Shader shaders("transform8.vs", "transform8.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices2[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	//vertices2
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-3.0, -2.0, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(140.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(3.0, -2.0, -3.0));
//
//		//view
//		glm::mat4 view1 = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection1;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces1 = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces1 = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//
//		//3rd
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model2 = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(3.0, 2.0, -3.0));
//
//		//view
//		glm::mat4 view2 = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection2;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces2 = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces2 = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces2 = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//
//		//4th
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-3.0, 2.0, -3.0));
//
//		//view
//		glm::mat4 view3 = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//scale
//		glm::mat4 projection3;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces3 = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces3 = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//		//drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//with keys


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//	Shader shaders1("transform5.vs", "transform5.frag");
//
//	Shader shaders2("transform6.vs", "transform6.frag");
//
//	Shader shaders3("transform7.vs", "transform7.frag");
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices2[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	//vertices2
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//-----------------------------------
//		//TRANS, SCALE, ROTATION
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.5 + transx, 0.0 + transy, 0.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 2 Transformation stuff
//		glm::mat4 transform = glm::mat4(1.0f);
//		//transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		transform = glm::scale(transform, glm::vec3(scalefactor1, scalefactor1, scalefactor1));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transform));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); //drawing
//
//		//-----------------------------------
//		//TRANS
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//
//		////-----------------------------------
//		//TRANS, ROTATION
//
//		//3rd
//		//linking the shader / calling the shader
//		shaders2.Use();
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model2 = glm::mat4(1.0f);
//		model2 = glm::translate(model2, glm::vec3(0.5 + transx2, -0.5 + transy2, 0.0));
//
//		//view
//		glm::mat4 view2 = glm::mat4(1.0f);
//		view2 = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces2 = glGetUniformLocation(shaders2.Program, "model2");
//		glUniformMatrix4fv(translationacces2, 1, GL_FALSE, glm::value_ptr(model2));
//
//		//view data fetch from shaders
//		unsigned int viewacces2 = glGetUniformLocation(shaders2.Program, "view2");
//		glUniformMatrix4fv(viewacces2, 1, GL_FALSE, glm::value_ptr(view2));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//		//4th
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(-0.5 + transx3, -0.5 + transy3, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_F:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_V:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_C:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_B:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_T:
//			transy2 += trans;
//			break;
//
//		case GLFW_KEY_G:
//			transy2 -= trans;
//			break;
//
//		case GLFW_KEY_F:
//			transx2 -= trans;
//			break;
//
//		case GLFW_KEY_H:
//			transx2 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}
		




//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//	Shader shaders1("transform5.vs", "transform5.frag");
//
//	Shader shaders2("transform6.vs", "transform6.frag");
//
//	Shader shaders3("transform7.vs", "transform7.frag");
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices2[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	//vertices2
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//-----------------------------------
//		//TRANS, SCALE, ROTATION
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.5 + transx, 0.0 + transy, 0.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 2 Transformation stuff
//		glm::mat4 transform = glm::mat4(1.0f);
//		//transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		transform = glm::scale(transform, glm::vec3(scalefactor1, scalefactor1, scalefactor1));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transform));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); //drawing
//
//		//-----------------------------------
//		//TRANS
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//
//		////-----------------------------------
//		//TRANS, ROTATION
//
//		//3rd
//		//linking the shader / calling the shader
//		shaders2.Use();
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model2 = glm::mat4(1.0f);
//		model2 = glm::translate(model2, glm::vec3(0.5 + transx2, -0.5 + transy2, 0.0));
//
//		//view
//		glm::mat4 view2 = glm::mat4(1.0f);
//		view2 = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces2 = glGetUniformLocation(shaders2.Program, "model2");
//		glUniformMatrix4fv(translationacces2, 1, GL_FALSE, glm::value_ptr(model2));
//
//		//view data fetch from shaders
//		unsigned int viewacces2 = glGetUniformLocation(shaders2.Program, "view2");
//		glUniformMatrix4fv(viewacces2, 1, GL_FALSE, glm::value_ptr(view2));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//		//4th
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(-0.5 + transx3, -0.5 + transy3, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_F:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_V:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_C:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_B:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_T:
//			transy2 += trans;
//			break;
//
//		case GLFW_KEY_G:
//			transy2 -= trans;
//			break;
//
//		case GLFW_KEY_F:
//			transx2 -= trans;
//			break;
//
//		case GLFW_KEY_H:
//			transx2 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}


//HW2

//Set of 2 applies all key properties together in each set as we did in the very last output.



//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//	Shader shaders1("transform5.vs", "transform5.frag");
//
//	Shader shaders2("transform6.vs", "transform6.frag");
//
//	Shader shaders3("transform7.vs", "transform7.frag");
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices2[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	//vertices2
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//-----------------------------------
//		//TRANS, SCALE, ROTATION
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.5 + transx, 0.0 + transy, 0.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 2 Transformation stuff
//		glm::mat4 transform = glm::mat4(1.0f);
//		//transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		transform = glm::scale(transform, glm::vec3(scalefactor1, scalefactor1, scalefactor1));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transform));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); //drawing
//
//		//-----------------------------------
//		//TRANS
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//
//		////-----------------------------------
//		//TRANS, ROTATION
//
//		//3rd
//		//linking the shader / calling the shader
//		shaders2.Use();
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model2 = glm::mat4(1.0f);
//		model2 = glm::translate(model2, glm::vec3(0.5 + transx, -0.5 + transy, 0.0));
//
//		//view
//		glm::mat4 view2 = glm::mat4(1.0f);
//		view2 = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces2 = glGetUniformLocation(shaders2.Program, "model2");
//		glUniformMatrix4fv(translationacces2, 1, GL_FALSE, glm::value_ptr(model2));
//
//		//view data fetch from shaders
//		unsigned int viewacces2 = glGetUniformLocation(shaders2.Program, "view2");
//		glUniformMatrix4fv(viewacces2, 1, GL_FALSE, glm::value_ptr(view2));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//		//4th
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(-0.5 + transx1, -0.5 + transy1, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_F:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_V:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_C:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_B:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}


//Consider all 4 objects as one set and apply all key properties together in each set as we did in the very last output.


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//	Shader shaders1("transform5.vs", "transform5.frag");
//
//	Shader shaders2("transform6.vs", "transform6.frag");
//
//	Shader shaders3("transform7.vs", "transform7.frag");
//
//
//	GLfloat vertices[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices2[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	//vertices2
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//-----------------------------------
//		//TRANS, SCALE, ROTATION
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.5 + transx, 0.0 + transy, 0.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 2 Transformation stuff
//		glm::mat4 transform = glm::mat4(1.0f);
//		//transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		transform = glm::scale(transform, glm::vec3(scalefactor1, scalefactor1, scalefactor1));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transform));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); //drawing
//
//		//-----------------------------------
//		//TRANS
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx, 0.0 + transy, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//
//		////-----------------------------------
//		//TRANS, ROTATION
//
//		//3rd
//		//linking the shader / calling the shader
//		shaders2.Use();
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model2 = glm::mat4(1.0f);
//		model2 = glm::translate(model2, glm::vec3(0.5 + transx, -0.5 + transy, 0.0));
//
//		//view
//		glm::mat4 view2 = glm::mat4(1.0f);
//		view2 = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces2 = glGetUniformLocation(shaders2.Program, "model2");
//		glUniformMatrix4fv(translationacces2, 1, GL_FALSE, glm::value_ptr(model2));
//
//		//view data fetch from shaders
//		unsigned int viewacces2 = glGetUniformLocation(shaders2.Program, "view2");
//		glUniformMatrix4fv(viewacces2, 1, GL_FALSE, glm::value_ptr(view2));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//		//4th
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(-0.5 + transx, -0.5 + transy, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//	
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}


//In the very last outcome we applied all properties on the cube, just  replacing the cube by a triangle.



//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform4.vs", "transform4.frag");
//
//	Shader shaders1("transform5.vs", "transform5.frag");
//
//	Shader shaders2("transform6.vs", "transform6.frag");
//
//	Shader shaders3("transform7.vs", "transform7.frag");
//
//
//	GLfloat vertices[] =
//	{
//		//rectangle
//
//		-0.1,-0.1,-0.1,1.0, 0.0, 0.0, 0.0f, 0.0f,  //a
//		-0.1,-0.1,0.1, 1.0, 0.0, 0.0, 0.0f, 0.0f,   //b   
//		0.1,-0.1,0.1,  1.0, 0.0, 0.0, 0.0f, 0.0f,   //c
//		
//		0.1,-0.1,0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f,    //c
//		0.1,-0.1,-0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f,  //d
//		-0.1,-0.1,-0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f, //a
//
//		//triangles
//		-0.1,-0.1,0.1, 0.0, 0.0, 1.0, 1.0f, 0.0f,   //b   
//		0.1,-0.1,0.1,  0.0, 0.0, 1.0, 1.0f, 0.0f,   //c    //front
//		0.05,0.1,-0.05, 0.0, 0.0, 1.0, 1.0f, 0.0f, //e
//
//		0.1,-0.1,0.1,  0.0, 1.0, 1.0, 1.0f, 0.0f,   //c
//		0.1,-0.1,-0.1, 0.0, 1.0, 1.0, 1.0f, 0.0f,  //d     //right
//		0.05,0.1,-0.05, 0.0, 1.0, 1.0, 1.0f, 0.0f,//e
//
//		0.1,-0.1,-0.1,  1.0, 0.0, 1.0, 0.0f, 1.0f, //d
//		-0.1,-0.1,-0.1, 1.0, 0.0, 1.0, 0.0f, 1.0f, //a     //back
//		0.05,0.1,-0.05, 1.0, 0.0, 1.0, 0.0f, 1.0f,//e
//
//		-0.1,-0.1,-0.1, 1.0, 1.0, 0.0, 0.0f, 1.0f, //a
//		-0.1,-0.1,0.1,  1.0, 1.0, 0.0, 0.0f, 1.0f,  //b     //left
//		0.05,0.1,-0.05, 1.0, 1.0, 0.0, 0.0f, 1.0f,//e
//
//	};
//	GLfloat vertices1[] =
//	{
//		//rectangle
//
//		-0.1,-0.1,-0.1,1.0, 0.0, 0.0, 0.0f, 0.0f,  //a
//		-0.1,-0.1,0.1, 1.0, 0.0, 0.0, 0.0f, 0.0f,   //b   
//		0.1,-0.1,0.1,  1.0, 0.0, 0.0, 0.0f, 0.0f,   //c
//
//		0.1,-0.1,0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f,    //c
//		0.1,-0.1,-0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f,  //d
//		-0.1,-0.1,-0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f, //a
//
//		//triangles
//		-0.1,-0.1,0.1, 0.0, 0.0, 1.0, 1.0f, 0.0f,   //b   
//		0.1,-0.1,0.1,  0.0, 0.0, 1.0, 1.0f, 0.0f,   //c    //front
//		0.05,0.1,-0.05, 0.0, 0.0, 1.0, 1.0f, 0.0f, //e
//
//		0.1,-0.1,0.1,  0.0, 1.0, 1.0, 1.0f, 0.0f,   //c
//		0.1,-0.1,-0.1, 0.0, 1.0, 1.0, 1.0f, 0.0f,  //d     //right
//		0.05,0.1,-0.05, 0.0, 1.0, 1.0, 1.0f, 0.0f,//e
//
//		0.1,-0.1,-0.1,  1.0, 0.0, 1.0, 0.0f, 1.0f, //d
//		-0.1,-0.1,-0.1, 1.0, 0.0, 1.0, 0.0f, 1.0f, //a     //back
//		0.05,0.1,-0.05, 1.0, 0.0, 1.0, 0.0f, 1.0f,//e
//
//		-0.1,-0.1,-0.1, 1.0, 1.0, 0.0, 0.0f, 1.0f, //a
//		-0.1,-0.1,0.1,  1.0, 1.0, 0.0, 0.0f, 1.0f,  //b     //left
//		0.05,0.1,-0.05, 1.0, 1.0, 0.0, 0.0f, 1.0f,//e
//
//	};
//	GLfloat vertices2[] =
//	{
//		//rectangle
//
//		-0.1,-0.1,-0.1,1.0, 0.0, 0.0, 0.0f, 0.0f,  //a
//		-0.1,-0.1,0.1, 1.0, 0.0, 0.0, 0.0f, 0.0f,   //b   
//		0.1,-0.1,0.1,  1.0, 0.0, 0.0, 0.0f, 0.0f,   //c
//
//		0.1,-0.1,0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f,    //c
//		0.1,-0.1,-0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f,  //d
//		-0.1,-0.1,-0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f, //a
//
//		//triangles
//		-0.1,-0.1,0.1, 0.0, 0.0, 1.0, 1.0f, 0.0f,   //b   
//		0.1,-0.1,0.1,  0.0, 0.0, 1.0, 1.0f, 0.0f,   //c    //front
//		0.05,0.1,-0.05, 0.0, 0.0, 1.0, 1.0f, 0.0f, //e
//
//		0.1,-0.1,0.1,  0.0, 1.0, 1.0, 1.0f, 0.0f,   //c
//		0.1,-0.1,-0.1, 0.0, 1.0, 1.0, 1.0f, 0.0f,  //d     //right
//		0.05,0.1,-0.05, 0.0, 1.0, 1.0, 1.0f, 0.0f,//e
//
//		0.1,-0.1,-0.1,  1.0, 0.0, 1.0, 0.0f, 1.0f, //d
//		-0.1,-0.1,-0.1, 1.0, 0.0, 1.0, 0.0f, 1.0f, //a     //back
//		0.05,0.1,-0.05, 1.0, 0.0, 1.0, 0.0f, 1.0f,//e
//
//		-0.1,-0.1,-0.1, 1.0, 1.0, 0.0, 0.0f, 1.0f, //a
//		-0.1,-0.1,0.1,  1.0, 1.0, 0.0, 0.0f, 1.0f,  //b     //left
//		0.05,0.1,-0.05, 1.0, 1.0, 0.0, 0.0f, 1.0f,//e
//
//	};
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//	//vertices2
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//-----------------------------------
//		//TRANS, SCALE, ROTATION
//		//1st  triangle
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(-0.5 + transx, 0.0 + transy, 0.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 2 Transformation stuff
//		glm::mat4 transform = glm::mat4(1.0f);
//		//transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		transform = glm::scale(transform, glm::vec3(scalefactor1, scalefactor1, scalefactor1));
//		//transforme = glm::rotate(transforme, tan((float)glfwGetTime() * 4), glm::vec3(-1.0, 0, -1.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//step 3 get the uniform data from the vs shader file
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transform));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); //drawing
//
//		//-----------------------------------
//		//TRANS
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx, 0.0 + transy, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//
//		////-----------------------------------
//		//TRANS, ROTATION
//
//		//3rd
//		//linking the shader / calling the shader
//		shaders2.Use();
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders2.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model2 = glm::mat4(1.0f);
//		model2 = glm::translate(model2, glm::vec3(0.5 + transx, -0.5 + transy, 0.0));
//
//		//view
//		glm::mat4 view2 = glm::mat4(1.0f);
//		view2 = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces2 = glGetUniformLocation(shaders2.Program, "model2");
//		glUniformMatrix4fv(translationacces2, 1, GL_FALSE, glm::value_ptr(model2));
//
//		//view data fetch from shaders
//		unsigned int viewacces2 = glGetUniformLocation(shaders2.Program, "view2");
//		glUniformMatrix4fv(viewacces2, 1, GL_FALSE, glm::value_ptr(view2));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[2]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//		//4th
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(-0.5 + transx, -0.5 + transy, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//	
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}




//Multiple Cubes


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
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
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform9.vs", "transform9.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0, 0.0, -7.0));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, -1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
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



//HW3


//Rotate by keys clockwiseand anti clockwise in z - axis only

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//
//GLfloat transz = 0; //  step 2: for translation in x axis
//GLfloat transy = 0;
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
// glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform10.vs", "transform10.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0, 0.0, -7.0));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f,  transz));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
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
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//
//	const GLfloat trans = 0.1;
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{
//			switch (key)
//			{
//			case GLFW_KEY_A:
//				transz -= trans;
//				break;
//	
//			case GLFW_KEY_D:
//				transz += trans;
//				break;
//	
//			default:
//				break;
//			}
//		}
//}



//Move by the keys LRTB


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform10.vs", "transform10.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0 + transx, 0.0 + transy, -7.0));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 0.1f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
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
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//		const GLfloat trans = 0.1;
//			if (action == GLFW_PRESS || action == GLFW_REPEAT)
//			{
//				switch (key)
//				{
//		
//				case GLFW_KEY_W:
//					transy += trans;
//					break;
//		
//				case GLFW_KEY_S:
//					transy -= trans;
//					break;
//		
//				case GLFW_KEY_A:
//					transx -= trans;
//					break;
//		
//				case GLFW_KEY_D:
//					transx += trans;
//					break;
//		
//				default:
//					break;
//				}
//			}
//}



//Zoom in & Zoom out



//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//
////vertex shader coding part
//
//
////fragment shader coding part
//
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform10.vs", "transform10.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		//view = glm::translate(view, glm::vec3(0.0 + transx, 0.0 + transy, -7.0));
//		view = glm::scale(view, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(170.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		glm::mat4 transform = glm::mat4(1.0f);
//		//transforme = glm::translate(transforme, glm::vec3(0.0+transx, 0.0+transy, 0)); // step 5: implemented translation using transx and transy wrt transaltion
//		//transform = glm::scale(transform, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		unsigned int transformacces = glGetUniformLocation(shaders.Program, "transform");
//		glUniformMatrix4fv(transformacces, 1, GL_FALSE, glm::value_ptr(transform));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//
//			//rotate		
//			
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 0.1f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
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
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//	}
//}
//




//All translation in multiple cubes




//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform10.vs", "transform10.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//		//		- 1,-1,-1,  //a
//		//-1,-1,1,    //b   //bottom
//		//1,-1,1,     //c
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a
//
//		////triangles
//		//-1,-1,1,    //b   
//		//1,-1,1,     //c    //front
//		//0.5,1,-0.5,  //e
//
//		//1,-1,1,     //c
//		//1,-1,-1,   //d     //right
//		//0.5,1,-0.5, //e
//
//		//1,-1,-1,   //d
//		//-1,-1,-1,  //a     //back
//		//0.5,1,-0.5, //e
//
//		//-1,-1,-1,  //a
//		//-1,-1,1,    //b     //left
//		//0.5,1,-0.5, //e
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0, 0.0, -7.0));
//
//		//scale
//		glm::mat4 view1 = glm::mat4(1.0f);
//		view1 = glm::scale(view1, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//		unsigned int viewacces1 = glGetUniformLocation(shaders.Program, "view1");
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(view1));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f , 0.0f, -1.0f));
//			//view = glm::rotate(view, glm::radians(-55.0f), glm::vec3(rotationx, rotationy, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
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
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_L:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_R:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{
//			switch (key)
//			{
//	
//			case GLFW_KEY_W:
//				transy += trans;
//				break;
//	
//			case GLFW_KEY_S:
//				transy -= trans;
//				break;
//	
//			case GLFW_KEY_A:
//				transx -= trans;
//				break;
//	
//			case GLFW_KEY_D:
//				transx += trans;
//				break;
//	
//			default:
//				break;
//			}
//		}
//
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{		
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//			switch (key)
//			{
//				case GLFW_KEY_Z:
//				{
//			
//					if (scalefactor <= 2.0)
//					{
//						scalefactor += 0.01;
//					}
//					else
//						scaleUp = false;
//						break;
//				}
//				case GLFW_KEY_X:
//				{
//			
//				if (scalefactor >= 0.5)
//					{
//						scalefactor -= 0.01;
//			
//					}
//					else
//						scaleUp = true;
//					break;
//				}
//			
//			}
//		}
//}





//Must check the 3d triangle data in the same outcome




//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
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
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform9.vs", "transform9.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//rectangle
//
//		-0.1,-0.1,-0.1,1.0, 0.0, 0.0, 0.0f, 0.0f,  //a
//		-0.1,-0.1,0.1, 1.0, 0.0, 0.0, 0.0f, 0.0f,   //b   
//		0.1,-0.1,0.1,  1.0, 0.0, 0.0, 0.0f, 0.0f,   //c
//		
//		0.1,-0.1,0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f,    //c
//		0.1,-0.1,-0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f,  //d
//		-0.1,-0.1,-0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f, //a
//
//		//triangles
//		-0.1,-0.1,0.1, 0.0, 0.0, 1.0, 1.0f, 0.0f,   //b   
//		0.1,-0.1,0.1,  0.0, 0.0, 1.0, 1.0f, 0.0f,   //c    //front
//		0.05,0.1,-0.05, 0.0, 0.0, 1.0, 1.0f, 0.0f, //e
//
//		0.1,-0.1,0.1,  0.0, 1.0, 1.0, 1.0f, 0.0f,   //c
//		0.1,-0.1,-0.1, 0.0, 1.0, 1.0, 1.0f, 0.0f,  //d     //right
//		0.05,0.1,-0.05, 0.0, 1.0, 1.0, 1.0f, 0.0f,//e
//
//		0.1,-0.1,-0.1,  1.0, 0.0, 1.0, 0.0f, 1.0f, //d
//		-0.1,-0.1,-0.1, 1.0, 0.0, 1.0, 0.0f, 1.0f, //a     //back
//		0.05,0.1,-0.05, 1.0, 0.0, 1.0, 0.0f, 1.0f,//e
//
//		-0.1,-0.1,-0.1, 1.0, 1.0, 0.0, 0.0f, 1.0f, //a
//		-0.1,-0.1,0.1,  1.0, 1.0, 0.0, 0.0f, 1.0f,  //b     //left
//		0.05,0.1,-0.05, 1.0, 1.0, 0.0, 0.0f, 1.0f,//e
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//without sin/tan angle
//		//view = glm::rotate(view, glm::radians(-75.0f), glm::vec3(1.0, 0, 0.0)); 
//
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0, 0.0, -7.0));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(70.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, -1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}



//All translation in multiple 3D triangle



//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform10.vs", "transform10.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//rectangle
//
//		-0.1,-0.1,-0.1,1.0, 0.0, 0.0, 0.0f, 0.0f,  //a
//		-0.1,-0.1,0.1, 1.0, 0.0, 0.0, 0.0f, 0.0f,   //b   
//		0.1,-0.1,0.1,  1.0, 0.0, 0.0, 0.0f, 0.0f,   //c
//		
//		0.1,-0.1,0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f,    //c
//		0.1,-0.1,-0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f,  //d
//		-0.1,-0.1,-0.1, 0.0, 1.0, 0.0, 0.0f, 0.0f, //a
//
//		//triangles
//		-0.1,-0.1,0.1, 0.0, 0.0, 1.0, 1.0f, 0.0f,   //b   
//		0.1,-0.1,0.1,  0.0, 0.0, 1.0, 1.0f, 0.0f,   //c    //front
//		0.05,0.1,-0.05, 0.0, 0.0, 1.0, 1.0f, 0.0f, //e
//
//		0.1,-0.1,0.1,  0.0, 1.0, 1.0, 1.0f, 0.0f,   //c
//		0.1,-0.1,-0.1, 0.0, 1.0, 1.0, 1.0f, 0.0f,  //d     //right
//		0.05,0.1,-0.05, 0.0, 1.0, 1.0, 1.0f, 0.0f,//e
//
//		0.1,-0.1,-0.1,  1.0, 0.0, 1.0, 0.0f, 1.0f, //d
//		-0.1,-0.1,-0.1, 1.0, 0.0, 1.0, 0.0f, 1.0f, //a     //back
//		0.05,0.1,-0.05, 1.0, 0.0, 1.0, 0.0f, 1.0f,//e
//
//		-0.1,-0.1,-0.1, 1.0, 1.0, 0.0, 0.0f, 1.0f, //a
//		-0.1,-0.1,0.1,  1.0, 1.0, 0.0, 0.0f, 1.0f,  //b     //left
//		0.05,0.1,-0.05, 1.0, 1.0, 0.0, 0.0f, 1.0f,//e
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(1.0f, 1.0f, -2.0f),
//		glm::vec3(-1.5f, -1.0f, -2.5f),
//		glm::vec3(-1.0f, -2.0f, -2.3f),
//		glm::vec3(2.0f, -0.4f, -2.0f),
//		glm::vec3(-1.7f, 0.0f, -2.0f),
//		glm::vec3(1.3f, -2.0f, -2.0f),
//		glm::vec3(1.5f, 1.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0, 0.0, -7.0));
//
//		//scale
//		glm::mat4 view1 = glm::mat4(1.0f);
//		view1 = glm::scale(view1, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(40.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		//get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		//unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		//glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//		unsigned int viewacces1 = glGetUniformLocation(shaders.Program, "view1");
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(view1));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f, 0.0f, -1.0f));
//			//view = glm::rotate(view, glm::radians(-55.0f), glm::vec3(rotationx, rotationy, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, -0.1f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.1f, 0.0f, 0.0f));
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(-0.1f, 0.0f, 0.0f));
//
//
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
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
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_L:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_R:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//	}
//}



//***************Lets start the camera************************
//Apply the very basic lookat function for the camera at the place of view 


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
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
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform9.vs", "transform9.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		
//		const float camradius = 10.0f;
//		float cameraX = sin(glfwGetTime()) * camradius;
//		float cameraZ = cos(glfwGetTime()) * camradius;
//
//		//view
//		glm::mat4 view;
//		//with sin/tan angle
//		view = glm::lookAt(glm::vec3(cameraX, 0.0, cameraZ), glm::vec3(2.0, 0.0, 0.0), glm::vec3(0.0, 2.0, 0.0));
//
//		//scale
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			//model = glm::rotate(model, (float)glfwGetTime() * glm::radians(angle), glm::vec3(0.0f, 0.0f, -1.0f));
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
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



//Camera with mouse and keys (scaling,rotating,translating)


//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//// s-2 mouse decl part
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset);
//void MouseCallback(GLFWwindow* window, double xPos, double yPos);
//
//GLint wid = 2000; //*window variable
//GLint height1 = 1500; //*window variable
//GLFWwindow* window; //pointer var as window that will hold address only 
//
//
// //camera
//glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
//glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
//glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);
//
// //timing
//float deltaTime = 0.0f;	// time between current frame and last frame
//float lastFrame = 0.0f;
//// s-1 mouse var def
//GLfloat yaw = -90.0f;
//GLfloat pitch = 0.0f;
//GLfloat fov = 45.0f;
//GLfloat lastX = wid / 2.0;
//GLfloat lastY = height1 / 2.0;
////bool keys[1024];
//bool firstMouse = true;
//
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//	glfwSetCursorPosCallback(window, MouseCallback);
//	glfwSetScrollCallback(window, ScrollCallback);
//	glfwSetInputMode(window, GLFW_CURSOR,GLFW_CURSOR_DISABLED);
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform10.vs", "transform10.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//with sin/tan angle
//		view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
//		shaders.setMat4("view", view);
//
//		//scale
//		glm::mat4 view1 = glm::mat4(1.0f);
//		view1 = glm::scale(view1, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		unsigned int viewacces1 = glGetUniformLocation(shaders.Program, "view1");
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(view1));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f , 0.0f, -1.0f));
//			
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_L:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_R:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{
//			switch (key)
//			{
//	
//			case GLFW_KEY_W:
//				transy += trans;
//				break;
//	
//			case GLFW_KEY_S:
//				transy -= trans;
//				break;
//	
//			case GLFW_KEY_A:
//				transx -= trans;
//				break;
//	
//			case GLFW_KEY_D:
//				transx += trans;
//				break;
//	
//			default:
//				break;
//			}
//		}
//
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{		
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//			switch (key)
//			{
//				case GLFW_KEY_Z:
//				{
//			
//					if (scalefactor <= 2.0)
//					{
//						scalefactor += 0.01;
//					}
//					else
//						scaleUp = false;
//						break;
//				}
//				case GLFW_KEY_X:
//				{
//			
//				if (scalefactor >= 0.5)
//					{
//						scalefactor -= 0.01;
//			
//					}
//					else
//						scaleUp = true;
//					break;
//				}
//			
//			}
//		}
//}
//
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset)
//{
//	if (fov >= 1.0f && fov <= 45.0f)
//		fov -= yOffset;
//	if (fov <= 1.0f)
//		fov = 1.0f;
//	if (fov >= 45.0f)
//		fov = 45.0f;
//
//}
//
//void MouseCallback(GLFWwindow* window, double xPos, double yPos)
//{
//	if (firstMouse)
//	{
//		lastX = xPos;
//		lastY = yPos;
//		firstMouse = false;
//	}
//
//	GLfloat xOffset = xPos - lastX;
//	GLfloat yOffset = lastY - yPos;  // Reversed since y-coordinates go from bottom to left
//
//	lastX = xPos;
//	lastY = yPos;
//
//	float sensitivity = 0.05;
//	xOffset *= sensitivity;
//	yOffset *= sensitivity;
//
//	yaw += xOffset;
//	pitch += yOffset;
//
//	if (pitch > 89.0f)
//		pitch = 89.0f;
//	if (pitch < -89.0f)
//		pitch = -89.0f;
//
//	glm::vec3 front;
//	front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
//	front.y = sin(glm::radians(pitch));
//	front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
//	cameraFront = glm::normalize(front);
//
//}




//from the above output implementing zoom in zoom out by mouse scroll



//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//// s-2 mouse decl part
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset);
//void MouseCallback(GLFWwindow* window, double xPos, double yPos);
//
//GLint wid = 2000; //*window variable
//GLint height1 = 1500; //*window variable
//GLFWwindow* window; //pointer var as window that will hold address only 
//
//
// //camera
//glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
//glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
//glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);
//
////timing
//float deltaTime = 0.0f;	// time between current frame and last frame
//float lastFrame = 0.0f;
//// s-1 mouse var def
//GLfloat yaw = -90.0f;
//GLfloat pitch = 0.0f;
//GLfloat fov = 45.0f;
//GLfloat lastX = wid / 2.0;
//GLfloat lastY = height1 / 2.0;
////bool keys[1024];
//bool firstMouse = true;
//
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//	glfwSetCursorPosCallback(window, MouseCallback);
//	glfwSetScrollCallback(window, ScrollCallback);
//	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform10.vs", "transform10.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//with sin/tan angle
//		view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
//		shaders.setMat4("view", view);
//
//		//scale
//		glm::mat4 view1 = glm::mat4(1.0f);
//		view1 = glm::scale(view1, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		unsigned int viewacces1 = glGetUniformLocation(shaders.Program, "view1");
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(view1));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f, 0.0f, -1.0f));
//
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_L:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_R:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//			break;
//		}
//
//		}
//	}
//	
//}
//
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset)
//{
//
//	if (fov >= 1.0f && fov <= 45.0f)
//		fov -= yOffset;
//	if (fov <= 1.0f)
//		fov = 1.0f;
//	if (fov >= 45.0f)
//		fov = 45.0f;
//
//}
//
//void MouseCallback(GLFWwindow* window, double xPos, double yPos)
//{
//	if (firstMouse)
//	{
//		lastX = xPos;
//		lastY = yPos;
//		firstMouse = false;
//	}
//
//	GLfloat xOffset = xPos - lastX;
//	GLfloat yOffset = lastY - yPos;  // Reversed since y-coordinates go from bottom to left
//
//	lastX = xPos;
//	lastY = yPos;
//
//	float sensitivity = 0.05;
//	xOffset *= sensitivity;
//	yOffset *= sensitivity;
//
//	yaw += xOffset;
//	pitch += yOffset;
//
//	if (pitch > 89.0f)
//		pitch = 89.0f;
//	if (pitch < -89.0f)
//		pitch = -89.0f;
//
//	glm::vec3 front;
//	front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
//	front.y = sin(glm::radians(pitch));
//	front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
//	cameraFront = glm::normalize(front);
//
//}





//Simple camera AND light template******************


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	
//
//	Shader shaders1("Light1.vs", "Light1.frag");
//
//	
//	Shader shaders3("Light2.vs", "Light2.frag");
//
//
//	//UPPER
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f,1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f,1.0, 1.0, 1.0,1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f,1.0, 1.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 1.0, 0.0f, 1.0f
//		//end
//
//	};
//	
//	//LOWER
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f,1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f,1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f,1.0, 0.0, 0.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f,1.0, 0.0, 0.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f,1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
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
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		
//		//-----------------------------------
//		//UPPER
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing		
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//		//MIDDLE
//		//linking the shader / calling the shader
//		shaders3.Use();
//		
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}



////ambient light test1 - with 2 different objects

//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	
//
//	Shader shaders1("Light1.vs", "Light1.frag");
//
//	
//	Shader shaders3("Light21.vs", "Light21.frag");
//
//
//	//UPPER
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f,1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f,1.0, 1.0, 1.0,1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f,1.0, 1.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 1.0, 0.0f, 1.0f
//		//end
//
//	};
//	
//	//LOWER
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f,1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f,1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f,1.0, 0.0, 0.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f,1.0, 0.0, 0.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f,1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
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
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		
//		//-----------------------------------
//		//UPPER
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing		
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//		//MIDDLE
//		//linking the shader / calling the shader
//		shaders3.Use();
//		
//		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.2f, 0.0f, 0.2f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}



//ambient light test 2 - with only one object*******************Template


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	
//
//	Shader shaders1("Light1.vs", "Light1.frag");
//
//	
//	Shader shaders3("Light22.vs", "Light22.frag");
//
//
//	//UPPER
//	//GLfloat vertices1[] =
//	//{
//	//	// step-1 change vertices as cube and add color too
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	 0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	-0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//
//	//	-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//
//	//	-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//
//	//	0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	0.1f, -0.1f, -0.1f,1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//
//	//	-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	0.1f, 0.1f, -0.1f,1.0, 1.0, 1.0,1.0f, 1.0f,
//	//	0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	0.1f, 0.1f, 0.1f,1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	-0.1f, 0.1f, -0.5f, 1.0, 1.0, 1.0, 0.0f, 1.0f
//	//	//end
//
//	//};
//	
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f,1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f,1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f,1.0, 0.0, 0.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f,1.0, 0.0, 0.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f,1.0, 0.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	//unsigned int texture;
//	//glGenTextures(1, &texture);
//	//glBindTexture(GL_TEXTURE_2D, texture);
//	////texturing
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	//unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	//glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	//glGenerateMipmap(GL_TEXTURE_2D);
//	//SOIL_free_image_data(image);
//	//glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	//unsigned int texture1;
//	//glGenTextures(1, &texture1);
//	//glBindTexture(GL_TEXTURE_2D, texture1);
//	////texturing
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		/*glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);*/
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		glm::mat4 view3 = glm::mat4(1.0f);
//
//		glm::vec3 lightposition(glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//		model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, lightposition);
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int viewacces1 = glGetUniformLocation(shaders1.Program, "view");
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(view3));
//
//		/*unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "projection");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model3));*/
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.2f, 0.0f, 0.2f);
//
//		//translation
//		
//		model3 = glm::translate(model3, glm::vec3(-0.5 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
//
//			
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//		
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}



//ambient with texture


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//
//
//	Shader shaders1("AmbLight3.vs", "AmbLight3.frag");
//
//
//	Shader shaders3("AmbLight4.vs", "AmbLight4.frag");
//
//
//	//UPPER
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f,1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f,1.0, 1.0, 1.0,1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f,1.0, 1.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 1.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	//LOWER OBJ
//	GLfloat vertices3[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.1f, 0.1f, -0.1f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.1f, 0.1f, -0.1f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.1f, 0.1f, 0.1f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.1f, 0.1f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
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
//	////-----------------------------------
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//translation
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing		
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//		//MIDDLE
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//
//		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.3f, 0.0f, 0.3f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}




//diffuse light with one object


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//
//
//	Shader shaders1("Light1.vs", "Light1.frag");
//
//
//	Shader shaders3("Light23.vs", "Light23.frag");
//
//
//	//UPPER
//	//GLfloat vertices1[] =
//	//{
//	//	// step-1 change vertices as cube and add color too
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	 0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	 0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	-0.1f,  0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//
//	//	-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//
//	//	-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//
//	//	0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	0.1f, -0.1f, -0.1f,1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 1.0f, 1.0f,
//	//	0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	-0.1f, -0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	-0.1f, -0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//
//	//	-0.1f, 0.1f, -0.1f, 1.0, 1.0, 1.0, 0.0f, 1.0f,
//	//	0.1f, 0.1f, -0.1f,1.0, 1.0, 1.0,1.0f, 1.0f,
//	//	0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	0.1f, 0.1f, 0.1f,1.0, 1.0, 1.0, 1.0f, 0.0f,
//	//	-0.1f, 0.1f, 0.1f, 1.0, 1.0, 1.0, 0.0f, 0.0f,
//	//	-0.1f, 0.1f, -0.5f, 1.0, 1.0, 1.0, 0.0f, 1.0f
//	//	//end
//
//	//};
//
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//		
//			// step-1 change vertices as cube and add color too
//
//			//top				
//			//coordinates			color				normal
//			-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//			 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//			 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//			 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//			-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//			-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//
//			//back
//			-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//			 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//			 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//			 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//			-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//			-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//
//			//front
//			-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//			 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//			 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//			 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//			-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//			-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//
//			//left
//			-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//			-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//			-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//			-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//			-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//			-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//
//			//right
//			0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//			0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//			0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//			0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//			0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//			0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//
//			//bottom
//			-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//			 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//			 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//			 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//			-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//			-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f
//
//			//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	//unsigned int texture;
//	//glGenTextures(1, &texture);
//	//glBindTexture(GL_TEXTURE_2D, texture);
//	////texturing
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	//unsigned char* image = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	//glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	//glGenerateMipmap(GL_TEXTURE_2D);
//	//SOIL_free_image_data(image);
//	//glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	//unsigned int texture1;
//	//glGenTextures(1, &texture1);
//	//glBindTexture(GL_TEXTURE_2D, texture1);
//	////texturing
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//		/*glUniform1i(glGetUniformLocation(shaders1.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders1.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);*/
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		glm::mat4 view3 = glm::mat4(1.0f);
//
//		glm::vec3 lightposition(glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//		model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, lightposition);
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int viewacces1 = glGetUniformLocation(shaders1.Program, "view");
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(view3));
//
//		/*unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "projection");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model3));*/
//
//		shaders1.setVec3("lightposition", lightposition);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.2f, 0.0f, 0.2f);
//
//		//translation
//
//		model3 = glm::translate(model3, glm::vec3(-0.5 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
//
//
//
//		////-----------------------------------
//		//TRANS, SCALE
//
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}




//Diff light with two object perfect template*********



//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//
//
//	Shader shaders1("Light11.vs", "Light11.frag");
//
//	Shader shaders3("Light24.vs", "Light24.frag");
//
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//		 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0, 
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0, 
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0, 
//		0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//		//end
//
//	};
//
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//
//		// step-1 change vertices as cube and add color too
//
//		//top				
//		//coordinates			color				normal
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f
//
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//		
//		glm::mat4 model1= glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		
//		/*unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "projection");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model3));*/
//
//		shaders1.setVec3("lightposition", lightposition);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.2f, 0.0f, 0.2f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}



//perfect specular light implementation ******************



//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
////GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//GLfloat transz3 = 0;
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//
//
//	Shader shaders1("Light13.vs", "Light13.frag");
//
//	Shader shaders3("Light28.vs", "Light28.frag");
//
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//		 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0, 
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0, 
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0, 
//		0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//		//end
//
//	};
//
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//
//		// step-1 change vertices as cube and add color too
//
//		//top				
//		//coordinates			color				normal
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f
//
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//		glm::mat4 model1= glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//
//		//camera position or view position or eye**********************
//		glm::vec3 viewPos(glm::vec3(0.3 - transx1, 0.0 + transy1, 0.0));//*************
//		glm::mat4 model4 = glm::mat4(1.0f);
//		model4 = glm::translate(model4, viewPos);
//		unsigned int viewacces1 = glGetUniformLocation(shaders1.Program, "viewPosition");//************
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(model4));
//
//
//		
//		/*unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "projection");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model3));*/
//
//		shaders1.setVec3("lightposition", lightposition);
//		
//		//viewposition*********************
//		shaders1.setVec3("viewPosition", viewPos);
//
//
//
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.2f, 0.0f, 0.2f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}




//Phong light (Ambient +diffuse + specular) will do tommorow************




//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
////GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//GLfloat transz3 = 0;
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//
//
//	Shader shaders1("Light13.vs", "Light13.frag");
//
//	Shader shaders3("Light29.vs", "Light29.frag");
//
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//		//end
//
//	};
//
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//
//		// step-1 change vertices as cube and add color too
//
//		//top				
//		//coordinates			color				normal
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f
//
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//
//		//camera position or view position or eye**********************
//		glm::vec3 viewPos(glm::vec3(0.3 - transx1, 0.0 + transy1, 0.0));//*************
//		glm::mat4 model4 = glm::mat4(1.0f);
//		model4 = glm::translate(model4, viewPos);
//		unsigned int viewacces1 = glGetUniformLocation(shaders1.Program, "viewPosition");//************
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(model4));
//
//
//
//		/*unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "projection");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model3));*/
//
//		shaders1.setVec3("lightposition", lightposition);
//
//		//viewposition*********************
//		shaders1.setVec3("viewPosition", viewPos);
//
//
//
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.2f, 0.0f, 0.2f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}




//Light caster starting*********************



//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
////GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//GLfloat transz3 = 0;
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//
//
//	Shader shaders1("Light13.vs", "Light13.frag");
//
//	Shader shaders3("Light31.vs", "Light31.frag");
//
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//		//end
//
//	};
//
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//
//		// step-1 change vertices as cube and add color too
//
//		//top				
//		//coordinates			color				normal
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f
//
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//
//		
//
//
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		unsigned int rotateacces2 = glGetUniformLocation(shaders3.Program, "view2");
//		glUniformMatrix4fv(rotateacces2, 1, GL_FALSE, glm::value_ptr(view2));
//
//
//		//camera position or view position or eye**********************
//		glm::vec3 viewPos(glm::vec3(0.3 - transx1, 0.0 + transy1, 0.0));//*************
//		glm::mat4 model4 = glm::mat4(1.0f);
//		model4 = glm::translate(model4, viewPos);
//		unsigned int viewacces1 = glGetUniformLocation(shaders1.Program, "viewPosition");//************
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(model4));
//
//
//		shaders1.setVec3("lightposition", lightposition);
//
//		//viewposition*********************
//		shaders1.setVec3("viewPosition", viewPos);
//
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.2f, 0.0f, 0.2f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}




//Material effect  no changes in shader file only object and light variables we have played on object



//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
////GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//GLfloat transz3 = 0;
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//
//
//	Shader shaders1("Light13.vs", "Light13.frag");
//
//	Shader shaders3("Light32.vs", "Light32.frag");
//
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//		 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0, 
//
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0, 
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0, 
//		0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0, 
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0, 
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0, 
//		0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0, 
//		-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//		//end
//
//	};
//
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//
//		// step-1 change vertices as cube and add color too
//
//		//top				
//		//coordinates			color				normal
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f
//
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//		glm::mat4 model1= glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//
//		//camera position or view position or eye**********************
//		glm::vec3 viewPos(glm::vec3(0.3 - transx1, 0.0 + transy1, 0.0));//*************
//		glm::mat4 model4 = glm::mat4(1.0f);
//		model4 = glm::translate(model4, viewPos);
//		unsigned int viewacces1 = glGetUniformLocation(shaders1.Program, "viewPosition");//************
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(model4));
//
//
//		
//		/*unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "projection");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model3));*/
//
//		shaders1.setVec3("lightposition", lightposition);
//		
//		//viewposition*********************
//		shaders1.setVec3("viewPosition", viewPos);
//
//
//
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		//for color flunctation
//		glm::vec3 lightcolorfl;
//		lightcolorfl.r = sin(glfwGetTime() * 0.6f);
//		lightcolorfl.g = sin(glfwGetTime() * 0.2f);
//		lightcolorfl.b = sin(glfwGetTime() * 3.0f);
//
//		GLint objcolorloc = glGetUniformLocation(shaders3.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders3.Program, "lgtcolor");
//		glUniform3f(objcolorloc, (1.0f*(sin(glfwGetTime() * 0.2f))), 0.0f, (1.0f * (sin(glfwGetTime() * 0.2f))));
//		glUniform3f(lgtcolorloc, (lightcolorfl.r) * 0.4f, 0.0f, (lightcolorfl.b)*0.4f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}




//light and object color fluctation professional way




//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
////GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//GLfloat transz3 = 0;
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//
//
//	Shader shaders1("Light13.vs", "Light13.frag");
//
//	Shader shaders3("Light32.vs", "Light32.frag");
//
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//		//end
//
//	};
//
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//
//		// step-1 change vertices as cube and add color too
//
//		//top				
//		//coordinates			color				normal
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f
//
//		//end
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//
//		//camera position or view position or eye**********************
//		glm::vec3 viewPos(glm::vec3(0.3 - transx1, 0.0 + transy1, 0.0));//*************
//		glm::mat4 model4 = glm::mat4(1.0f);
//		model4 = glm::translate(model4, viewPos);
//		unsigned int viewacces1 = glGetUniformLocation(shaders1.Program, "viewPosition");//************
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(model4));
//
//		shaders1.setVec3("lightposition", lightposition);
//
//		//viewposition*********************
//		shaders1.setVec3("viewPosition", viewPos);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		//for color flunctation
//		glm::vec3 lightcolorfl;
//		lightcolorfl.r = sin(glfwGetTime() * 0.6f);
//		lightcolorfl.g = sin(glfwGetTime() * 0.2f);
//		lightcolorfl.b = sin(glfwGetTime() * 3.0f);
//
//		glm::vec3 diffusecolor = lightcolorfl * glm::vec3(0.5);
//		glm::vec3 ambientcolor = diffusecolor * glm::vec3(0.2);
//
//		//for the light properties
//		glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.ambient"), ambientcolor.r, ambientcolor.g, ambientcolor.b);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.diffuse"), diffusecolor.r, diffusecolor.g, diffusecolor.b);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.specular"), 0.5f,0.5f,0.5f);
//
//		//for the material properties
//		glUniform3f(glGetUniformLocation((shaders3.Program), "mat.ambient"),1.0,0.0,0.3);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "mat.diffuse"),1.0, 0.0, 0.3);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "mat.specular"),1.0,1.0,1.0);
//
//		//for the shininess properties
//		glUniform1f(glGetUniformLocation((shaders3.Program), "mat.shininess"),16.0f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}



//textured material effect or light mapping perfect diffuse light


//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
////GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//GLfloat transz3 = 0;
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//
//
//	Shader shaders1("Light13.vs", "Light13.frag");
//
//	Shader shaders3("Light33.vs", "Light33.frag");
//
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//		//end
//
//	};
//
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//
//		// step-1 change vertices as cube and add color too
//
//		//top				
//		//coordinates			color				normal				texture
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	0.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	1.0f, 1.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 1.0f, 1.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 0.0f, 1.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 0.0f, 0.0f,
//
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 0.0f, 0.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 1.0f, 0.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	1.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 0.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 1.0f, 0.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	1.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	 0.0f, 1.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	1.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 0.0f, 1.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 1.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 1.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 0.0f, 1.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	0.0f, 1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	1.0f, 1.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	 1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	 0.0f, 1.0f
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(9 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int diffusemap1,specularmap1;
//	glGenTextures(1, &diffusemap1);
//	glBindTexture(GL_TEXTURE_2D, diffusemap1);
//	if (!diffusemap1)
//	{
//		cout << "error" << endl;
//	}
//	else
//		cout << "diffusemap1 succed";
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
//	glUniform1i(glGetUniformLocation(shaders3.Program, "diffusemapping"), 0);
//	int diffusemaplocation = glGetUniformLocation(shaders3.Program, "mat.diffuse");
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//
//		//camera position or view position or eye**********************
//		glm::vec3 viewPos(glm::vec3(0.3 - transx1, 0.0 + transy1, 0.0));//*************
//		glm::mat4 model4 = glm::mat4(1.0f);
//		model4 = glm::translate(model4, viewPos);
//		unsigned int viewacces1 = glGetUniformLocation(shaders1.Program, "viewPosition");//************
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(model4));
//
//		shaders1.setVec3("lightposition", lightposition);
//
//		//viewposition*********************
//		shaders1.setVec3("viewPosition", viewPos);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, diffusemap1);
//
//		//for color flunctation
//		glm::vec3 lightcolorfl;
//		lightcolorfl.r = sin(glfwGetTime() * 0.6f);
//		lightcolorfl.g = sin(glfwGetTime() * 0.2f);
//		lightcolorfl.b = sin(glfwGetTime() * 3.0f);
//
//		glm::vec3 diffusecolor = lightcolorfl * glm::vec3(0.5);
//		glm::vec3 ambientcolor = diffusecolor * glm::vec3(0.2);
//
//		//for the light properties
//		glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.ambient"), ambientcolor.r, ambientcolor.g, ambientcolor.b);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.diffuse"), diffusecolor.r, diffusecolor.g, diffusecolor.b);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.specular"), 0.5f, 0.5f, 0.5f);
//
//		//for the material properties
//		/*glUniform3f(glGetUniformLocation((shaders3.Program), "mat.ambient"), 1.0, 0.0, 0.3);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "mat.diffuse"), 1.0, 0.0, 0.3);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "mat.specular"), 1.0, 1.0, 1.0);*/
//
//		//for the shininess properties
//		glUniform1f(glGetUniformLocation((shaders3.Program), "mat.shininess"), 32.0f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}




//textured material effect or light mapping perfect specular light




//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part //fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
////GLfloat transx2 = 0; //  step 2: for translation in x axis
//GLfloat transy2 = 0; //  step2: for translation in y axis
//
//GLfloat transx3 = 0; //  step 2: for translation in x axis
//GLfloat transy3 = 0; //  step2: for translation in y axis
//GLfloat transz3 = 0;
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
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
//	//vertex shader 
//	//fragment shader
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//
//
//	Shader shaders1("Light13.vs", "Light13.frag");
//
//	Shader shaders3("Light34.vs", "Light34.frag");
//
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//		//end
//
//	};
//
//	//OBJECT
//	GLfloat vertices3[] =
//	{
//
//		// step-1 change vertices as cube and add color too
//
//		//top				
//		//coordinates			color				normal				texture
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	0.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	1.0f, 1.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 1.0f, 1.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 0.0f, 1.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 0.0f, 0.0f,
//
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 0.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 1.0f, 0.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	1.0f, 1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 1.0f, 1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 0.0f, 0.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 1.0f, 0.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	1.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 0.0f, 0.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 1.0f, 0.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	1.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	 1.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	0.0f, 1.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	 0.0f, 1.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	1.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 0.0f, 1.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 1.0f, 1.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 1.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 1.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 0.0f, 1.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	0.0f, 1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	1.0f, 1.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	 1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	 0.0f, 1.0f
//
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[3]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[3]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices3), vertices3, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(9 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	////color
//	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(1);
//
//
//	//-----------------------------------
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int diffusemap1, specularmap1;
//	//diffuse mapping on texture
//	glGenTextures(1, &diffusemap1);
//	glBindTexture(GL_TEXTURE_2D, diffusemap1);
//	if (!diffusemap1)
//	{
//		cout << "error" << endl;
//	}
//	else
//		cout << "diffusemap1 succed" << endl;
//	//specular map on texture
//	/*glGenTextures(1, &specularmap1);
//	glBindTexture(GL_TEXTURE_2D, specularmap1);
//	if (!specularmap1)
//	{
//		cout << "error" << endl;
//	}
//	else
//		cout << "specularmap1 succed";*/
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
//	glUniform1i(glGetUniformLocation(shaders3.Program, "diffusemapping"), 0);
//	//glUniform1i(glGetUniformLocation(shaders3.Program, "mat.specular"), 1);
//	int diffusemaplocation = glGetUniformLocation(shaders3.Program, "mat.diffuse");
//	//int specularmaplocation = glGetUniformLocation(shaders3.Program, "specularmapping");
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//
//		//camera position or view position or eye**********************
//		glm::vec3 viewPos(glm::vec3(0.3 - transx1, 0.0 + transy1, 0.0));//*************
//		glm::mat4 model4 = glm::mat4(1.0f);
//		model4 = glm::translate(model4, viewPos);
//		unsigned int viewacces1 = glGetUniformLocation(shaders1.Program, "viewPosition");//************
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(model4));
//
//		shaders1.setVec3("lightposition", lightposition);
//
//		//viewposition*********************
//		shaders1.setVec3("viewPosition", viewPos);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//
//
//		//MIDDLE OBJECT
//		//linking the shader / calling the shader
//		shaders3.Use();
//
//		//glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, diffusemap1);
//
//		//for color flunctation
//		glm::vec3 lightcolorfl;
//		lightcolorfl.r = sin(glfwGetTime() * 0.6f);
//		lightcolorfl.g = sin(glfwGetTime() * 0.2f);
//		lightcolorfl.b = sin(glfwGetTime() * 3.0f);
//
//		glm::vec3 diffusecolor = lightcolorfl * glm::vec3(0.5);
//		glm::vec3 ambientcolor = diffusecolor * glm::vec3(0.2);
//
//		//for the light properties
//		glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.ambient"), ambientcolor.r, ambientcolor.g, ambientcolor.b);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.diffuse"), diffusecolor.r, diffusecolor.g, diffusecolor.b);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.specular"), 0.5f, 0.5f, 0.5f);
//
//		//for the material properties
//		/*glUniform3f(glGetUniformLocation((shaders3.Program), "mat.ambient"), 1.0, 0.0, 0.3);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "mat.diffuse"), 1.0, 0.0, 0.3);
//		glUniform3f(glGetUniformLocation((shaders3.Program), "mat.specular"), 1.0, 1.0, 1.0);*/
//
//		//for the shininess properties
//		glUniform1f(glGetUniformLocation((shaders3.Program), "mat.shininess"), 32.0f);
//
//		//translation
//		glm::mat4 model3 = glm::mat4(1.0f);
//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//translation
//		glm::mat4 view3 = glm::mat4(1.0f);
//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//
//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[3]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//
//		glBindVertexArray(0);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy3 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy3 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx3 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx3 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_Z:
//		{
//
//			if (scalefactor1 <= 2.0)
//			{
//				scalefactor1 += 0.01;
//			}
//			else
//				scaleUp1 = false;
//			break;
//		}
//		case GLFW_KEY_X:
//		{
//
//			if (scalefactor1 >= 0.5)
//			{
//				scalefactor1 -= 0.01;
//
//			}
//			else
//				scaleUp1 = true;
//			break;
//		}
//
//		}
//
//	}
//}



//HW

//one object with camera in mouse



//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//// s-2 mouse decl part
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset);
//void MouseCallback(GLFWwindow* window, double xPos, double yPos);
//
//GLint wid = 2000; //*window variable
//GLint height1 = 1500; //*window variable
//GLFWwindow* window; //pointer var as window that will hold address only 
//
//
// //camera
//glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
//glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
//glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);
//
////timing
//float deltaTime = 0.0f;	// time between current frame and last frame
//float lastFrame = 0.0f;
//// s-1 mouse var def
//GLfloat yaw = -90.0f;
//GLfloat pitch = 0.0f;
//GLfloat fov = 45.0f;
//GLfloat lastX = wid / 2.0;
//GLfloat lastY = height1 / 2.0;
////bool keys[1024];
//bool firstMouse = true;
//
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//	glfwSetCursorPosCallback(window, MouseCallback);
//	glfwSetScrollCallback(window, ScrollCallback);
//	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform10.vs", "transform10.frag");
//
//	//OBJECT
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//
//	};
//
//
//
//
//	GLuint VBO[2], VAO[2];//vertex buffer obj//vert array obj
//	glGenVertexArrays(2, VAO);
//	glGenBuffers(2, VBO);
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//
//	//OBJECT
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//with sin/tan angle
//		view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
//		shaders.setMat4("view", view);
//
//		//scale
//		glm::mat4 view1 = glm::mat4(1.0f);
//		view1 = glm::rotate(view1, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
// 
// 
// 
//
//		unsigned int viewacces1 = glGetUniformLocation(shaders.Program, "view1");
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(view1));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
// 
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//
//
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//
//
//	const GLfloat trans = 0.1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_W:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_S:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_A:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_D:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//}
//
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset)
//{
//	if (fov >= 1.0f && fov <= 45.0f)
//		fov -= yOffset;
//	if (fov <= 1.0f)
//		fov = 1.0f;
//	if (fov >= 45.0f)
//		fov = 45.0f;
//
//}
//
//void MouseCallback(GLFWwindow* window, double xPos, double yPos)
//{
//	if (firstMouse)
//	{
//		lastX = xPos;
//		lastY = yPos;
//		firstMouse = false;
//	}
//
//	GLfloat xOffset = xPos - lastX;
//	GLfloat yOffset = lastY - yPos;  // Reversed since y-coordinates go from bottom to left
//
//	lastX = xPos;
//	lastY = yPos;
//
//	float sensitivity = 0.05;
//	xOffset *= sensitivity;
//	yOffset *= sensitivity;
//
//	yaw += xOffset;
//	pitch += yOffset;
//
//	if (pitch > 89.0f)
//		pitch = 89.0f;
//	if (pitch < -89.0f)
//		pitch = -89.0f;
//
//	glm::vec3 front;
//	front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
//	front.y = sin(glm::radians(pitch));
//	front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
//	cameraFront = glm::normalize(front);
//
//}



//implement the camera and mouse




//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//// s-2 mouse decl part
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset);
//void MouseCallback(GLFWwindow* window, double xPos, double yPos);
//
//GLint wid = 2000; //*window variable
//GLint height1 = 1500; //*window variable
//GLFWwindow* window; //pointer var as window that will hold address only 
//
//
// //camera
//glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
//glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
//glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);
//
// //timing
//float deltaTime = 0.0f;	// time between current frame and last frame
//float lastFrame = 0.0f;
//// s-1 mouse var def
//GLfloat yaw = -90.0f;
//GLfloat pitch = 0.0f;
//GLfloat fov = 45.0f;
//GLfloat lastX = wid / 2.0;
//GLfloat lastY = height1 / 2.0;
////bool keys[1024];
//bool firstMouse = true;
//
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//	glfwSetCursorPosCallback(window, MouseCallback);
//	glfwSetInputMode(window, GLFW_CURSOR,GLFW_CURSOR_DISABLED);
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("Light30.vs", "Light30.frag");     //OBJECT
//
//	Shader shaders1("Light14.vs", "Light14.frag");		//LIGHT
//
//	//OBJECT
//	GLfloat vertices[] =
//	{
//		//top				
//		//coordinates			color				normal
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,
//
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f
//
//		//end
//
//	};
//	
//	
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//		//end
//
//	};
//
//	
//	GLuint VBO[2], VAO[2];
//	glGenVertexArrays(2, VAO);
//	glGenBuffers(2, VBO);
//
//
//	//OBJECT
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 9 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.3 + transx1, 0.0 + transy1, 0.0));
//
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//
//		shaders.setVec3("lightposition", lightposition);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//		glBindVertexArray(0);
//
//
//		//OBJECT
//		//linking the shader / calling the shader
//		shaders.Use();
//
//		GLint objcolorloc = glGetUniformLocation(shaders.Program, "objcolor");
//		GLint lgtcolorloc = glGetUniformLocation(shaders.Program, "lgtcolor");
//		glUniform3f(objcolorloc, 0.0f, 0.0f, 1.0f);
//		glUniform3f(lgtcolorloc, 0.0f, 0.0f, 0.2f);
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//with sin/tan angle
//		view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
//		shaders.setMat4("view", view);
//
//		//scale
//		glm::mat4 view1 = glm::mat4(1.0f);
//		view1 = glm::rotate(view1, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//
//
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(50.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		unsigned int viewacces1 = glGetUniformLocation(shaders.Program, "view1");
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(view1));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int projectionacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(projectionacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		glBindVertexArray(0);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	/*glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);*/
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat trans = 0.1;
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{
//			switch (key)
//			{
//	
//			case GLFW_KEY_W:
//				transy += trans;
//				break;
//	
//			case GLFW_KEY_S:
//				transy -= trans;
//				break;
//	
//			case GLFW_KEY_A:
//				transx -= trans;
//				break;
//	
//			case GLFW_KEY_D:
//				transx += trans;
//				break;
//	
//			default:
//				break;
//			}
//		}
//
//}
//
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset)
//{
//	if (fov >= 1.0f && fov <= 45.0f)
//		fov -= yOffset;
//	if (fov <= 1.0f)
//		fov = 1.0f;
//	if (fov >= 45.0f)
//		fov = 45.0f;
//}
//
//void MouseCallback(GLFWwindow* window, double xPos, double yPos)
//{
//	if (firstMouse)
//	{
//		lastX = xPos;
//		lastY = yPos;
//		firstMouse = false;
//	}
//
//	GLfloat xOffset = xPos - lastX;
//	GLfloat yOffset = lastY - yPos;  // Reversed since y-coordinates go from bottom to left
//
//	lastX = xPos;
//	lastY = yPos;
//
//	float sensitivity = 0.05;
//	xOffset *= sensitivity;
//	yOffset *= sensitivity;
//
//	yaw += xOffset;
//	pitch += yOffset;
//
//	if (pitch > 89.0f)
//		pitch = 89.0f;
//	if (pitch < -89.0f)
//		pitch = -89.0f;
//
//	glm::vec3 front;
//	front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
//	front.y = sin(glm::radians(pitch));
//	front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
//	cameraFront = glm::normalize(front);
//}




//make the multicolor object




//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//
//using namespace std;
//
//GLint wid = 2000; //*window variable
//GLint height1 = 1500; //*window variable
//GLFWwindow* window; //pointer var as window that will hold address only 
//
////vertex shader coding part
////fragment shader coding part
//
//
////declaration part of keys
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//GLfloat rotationy = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders1("Light11.vs", "Light11.frag");
//	Shader shaders("Light35.vs", "Light35.frag");
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,    1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,    1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,    1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, 0.1f,     1.0, 1.0, 1.0,
//		 0.1f, -0.1f, 0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, 0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, 0.1f,     1.0, 1.0, 1.0,
//		-0.1f,  0.1f, 0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,     1.0, 1.0, 1.0,
//
//		-0.1f,  0.1f,  0.1f,    1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		-0.1f,  0.1f,  0.1f,	1.0, 1.0, 1.0,
//
//		 0.1f,  0.1f,  0.1f,	1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		 0.1f,  0.1f,  0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 1.0,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0
//		//end
//
//	};
//
//	//object
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		//ccordinates			color				texture			normal
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	0.0, 1.0, 0.0,		1.0f, 0.0f,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		1.0f, 1.0f,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		1.0f, 1.0f,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 1.0, 0.0,		0.0f, 1.0f,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		0.0f, 0.0f,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		1.0, 0.0, 0.0,		0.0f, 0.0f,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		1.0f, 0.0f,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 0.0, 1.0,		1.0f, 1.0f,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		1.0, 0.0, 0.0,		1.0f, 1.0f,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 1.0f,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 0.0, 1.0,		0.0f, 0.0f,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	1.0, 0.0, 0.0,		1.0f, 0.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 1.0, 0.0,		1.0f, 1.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		0.0f, 1.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 1.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 1.0, 0.0,		0.0f, 0.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		1.0f, 0.0f,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		1.0, 0.0, 0.0,		1.0f, 0.0f,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 0.0,		1.0f, 1.0f,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 0.0, 1.0,		0.0f, 1.0f,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		1.0, 0.0, 0.0,		0.0f, 1.0f,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 0.0, 1.0,		1.0f, 0.0f,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 1.0f,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	0.0, 1.0, 0.0,		1.0f, 1.0f,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		1.0f, 0.0f,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 0.0,		1.0f, 0.0f,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 1.0, 0.0,		0.0f, 0.0f,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		0.0f, 1.0f,		0.0f, -1.0f, 0.0f,
//
//		//front
//		-0.1f, 0.1f, -0.1f,		1.0, 0.0, 0.0,		0.0f, 1.0f,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		0.0, 1.0, 0.0,		1.0f, 1.0f,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		0.0, 0.0, 1.0,		1.0f, 0.0f,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 0.0, 0.0,		1.0f, 0.0f,		0.0f, 1.0f, 0.0f,		
//		-0.1f, 0.1f,  0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		0.0, 0.0, 1.0,		0.0f, 1.0f,		0.0f, 1.0f, 0.0f
//		//end
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	////-----------------------------------OBJECT
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//
//	//vertices //8 or 11
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//normal
//	glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(8 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(3);
//
//	//done till here
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("pubg-mobile-2.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//				//-----------------------------------
//		//UPPER LIGHT
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition1(glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition1);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		shaders1.setVec3("lightposition", lightposition1);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);		//********************************both required for each drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//		glBindVertexArray(0);				//********************************both required for each drawing
//
//		//-----------------------------------
//		//object
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//*************************Ambient Light Implementation
//		GLint objcolorloc = glGetUniformLocation(shaders.Program, "objectCol");
//		GLint lgtcolorloc = glGetUniformLocation(shaders.Program, "lightCol");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 0.0f);
//		glUniform3f(lgtcolorloc, 0.5f, 0.0f, 0.0f);
//
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.0 + transx, -0.2 + transy, 0));
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//
//
//		glm::mat4 rotate;
//		rotate = glm::rotate(rotate, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//		//scale data fetch from shaders
//		unsigned int rotateaccess = glGetUniformLocation(shaders.Program, "rotate");
//		glUniformMatrix4fv(rotateaccess, 1, GL_FALSE, glm::value_ptr(rotate));
//
//		//must pass parameter vao to see visibility of drawing 
//
//		glBindVertexArray(VAO[2]);		//********************************both required for each drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		glBindVertexArray(0);		//********************************both required for each drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 100;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationy -= rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationx -= rotationSpeed;
//			break;
//
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_F:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_V:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_C:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_B:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	const GLfloat trans1 = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_W:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_S:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//		}
//		}
//	}
//}





//make the textured object




//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//
//using namespace std;
//
//GLint wid = 2000; //*window variable
//GLint height1 = 1500; //*window variable
//GLFWwindow* window; //pointer var as window that will hold address only 
//
////vertex shader coding part
////fragment shader coding part
//
//
////declaration part of keys
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//GLfloat rotationy = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders1("Light11.vs", "Light11.frag");
//	Shader shaders("Light36.vs", "Light36.frag");
//
//	//UPPER LIGHT
//	GLfloat vertices1[] =
//	{
//		// step-1 change vertices as cube and add color too
//		-0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,    1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,    1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,    1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, 0.1f,     1.0, 1.0, 1.0,
//		 0.1f, -0.1f, 0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, 0.1f,     1.0, 1.0, 1.0,
//		 0.1f,  0.1f, 0.1f,     1.0, 1.0, 1.0,
//		-0.1f,  0.1f, 0.1f,     1.0, 1.0, 1.0,
//		-0.1f, -0.1f, 0.1f,     1.0, 1.0, 1.0,
//
//		-0.1f,  0.1f,  0.1f,    1.0, 1.0, 1.0,
//		-0.1f,  0.1f, -0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,    1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		-0.1f,  0.1f,  0.1f,	1.0, 1.0, 1.0,
//
//		 0.1f,  0.1f,  0.1f,	1.0, 1.0, 1.0,
//		 0.1f,  0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		 0.1f,  0.1f,  0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		 0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f,  0.1f,	1.0, 1.0, 1.0,
//		-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		 0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 1.0,
//		 0.1f, 0.1f,  0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f,  0.1f,		1.0, 1.0, 1.0,
//		-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0
//		//end
//
//	};
//
//	//object
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		//ccordinates			color				texture			normal
//		//back
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f,		0.0f, 0.0f, -1.0f,
//		 0.1f, -0.1f, -0.1f,	0.0, 1.0, 0.0,		1.0f, 0.0f,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		1.0f, 1.0f,		0.0f, 0.0f, -1.0f,
//		 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		1.0f, 1.0f,		0.0f, 0.0f, -1.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 1.0, 0.0,		0.0f, 1.0f,		0.0f, 0.0f, -1.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		0.0f, 0.0f,		0.0f, 0.0f, -1.0f,
//
//		//front
//		-0.1f, -0.1f, 0.1f,		1.0, 0.0, 0.0,		0.0f, 0.0f,		0.0f, 0.0f, 1.0f,
//		 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		1.0f, 0.0f,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		0.0, 0.0, 1.0,		1.0f, 1.0f,		0.0f, 0.0f, 1.0f,
//		 0.1f,  0.1f, 0.1f,		1.0, 0.0, 0.0,		1.0f, 1.0f,		0.0f, 0.0f, 1.0f,
//		-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 1.0f,		0.0f, 0.0f, 1.0f,
//		-0.1f, -0.1f, 0.1f,		0.0, 0.0, 1.0,		0.0f, 0.0f,		0.0f, 0.0f, 1.0f,
//
//		//left
//		-0.1f,  0.1f,  0.1f,	1.0, 0.0, 0.0,		1.0f, 0.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f, -0.1f,	0.0, 1.0, 0.0,		1.0f, 1.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		0.0f, 1.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 1.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 1.0, 0.0,		0.0f, 0.0f,		-1.0f, 0.0f, 0.0f,
//		-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		1.0f, 0.0f,		-1.0f, 0.0f, 0.0f,
//
//		//right
//		0.1f,  0.1f,  0.1f,		1.0, 0.0, 0.0,		1.0f, 0.0f,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f, -0.1f,		0.0, 1.0, 0.0,		1.0f, 1.0f,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		0.0, 0.0, 1.0,		0.0f, 1.0f,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f, -0.1f,		1.0, 0.0, 0.0,		0.0f, 1.0f,		1.0f, 0.0f, 0.0f,
//		0.1f, -0.1f,  0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f,		1.0f, 0.0f, 0.0f,
//		0.1f,  0.1f,  0.1f,		0.0, 0.0, 1.0,		1.0f, 0.0f,		1.0f, 0.0f, 0.0f,
//
//		//bottom
//		-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 1.0f,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f, -0.1f,	0.0, 1.0, 0.0,		1.0f, 1.0f,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		1.0f, 0.0f,		0.0f, -1.0f, 0.0f,
//		 0.1f, -0.1f,  0.1f,	1.0, 0.0, 0.0,		1.0f, 0.0f,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f,  0.1f,	0.0, 1.0, 0.0,		0.0f, 0.0f,		0.0f, -1.0f, 0.0f,
//		-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		0.0f, 1.0f,		0.0f, -1.0f, 0.0f,
//
//		//front
//		-0.1f, 0.1f, -0.1f,		1.0, 0.0, 0.0,		0.0f, 1.0f,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f, -0.1f,		0.0, 1.0, 0.0,		1.0f, 1.0f,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		0.0, 0.0, 1.0,		1.0f, 0.0f,		0.0f, 1.0f, 0.0f,
//		 0.1f, 0.1f,  0.1f,		1.0, 0.0, 0.0,		1.0f, 0.0f,		0.0f, 1.0f, 0.0f,		
//		-0.1f, 0.1f,  0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f,		0.0f, 1.0f, 0.0f,
//		-0.1f, 0.1f, -0.1f,		0.0, 0.0, 1.0,		0.0f, 1.0f,		0.0f, 1.0f, 0.0f
//		//end
//	};
//
//	GLuint VBO[4], VAO[4];//vertex buffer obj//vert array obj
//	glGenVertexArrays(4, VAO);
//	glGenBuffers(4, VBO);
//
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//
//	////-----------------------------------OBJECT
//	glBindVertexArray(VAO[2]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[2]);
//
//	//vertices //8 or 11
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	//normal
//	glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(8 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(3);
//
//	//done till here
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("pubg-mobile-2.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("IMG_5389.JPG", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//				//-----------------------------------
//		//UPPER LIGHT
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition1(glm::vec3(0.5 + transx1, 0.0 + transy1, 0.0));
//
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition1);
//
//		//step 3 get the uniform data from the vs shader file
//		//translation data fetch from shaders
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		shaders1.setVec3("lightposition", lightposition1);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);		//********************************both required for each drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing
//		glBindVertexArray(0);				//********************************both required for each drawing
//
//		//-----------------------------------
//		//object
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//*************************Ambient Light Implementation
//		GLint objcolorloc = glGetUniformLocation(shaders.Program, "objectCol");
//		GLint lgtcolorloc = glGetUniformLocation(shaders.Program, "lightCol");
//		glUniform3f(objcolorloc, 1.0f, 0.0f, 0.0f);
//		glUniform3f(lgtcolorloc, 0.5f, 0.0f, 0.0f);
//
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.0 + transx, -0.2 + transy, 0));
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//
//
//		glm::mat4 rotate;
//		rotate = glm::rotate(rotate, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//		//scale data fetch from shaders
//		unsigned int rotateaccess = glGetUniformLocation(shaders.Program, "rotate");
//		glUniformMatrix4fv(rotateaccess, 1, GL_FALSE, glm::value_ptr(rotate));
//
//		//must pass parameter vao to see visibility of drawing 
//
//		glBindVertexArray(VAO[2]);		//********************************both required for each drawing
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		glBindVertexArray(0);		//********************************both required for each drawing
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(4, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 100;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationy -= rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationx -= rotationSpeed;
//			break;
//
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_I:
//			transy1 += trans;
//			break;
//
//		case GLFW_KEY_K:
//			transy1 -= trans;
//			break;
//
//		case GLFW_KEY_J:
//			transx1 -= trans;
//			break;
//
//		case GLFW_KEY_L:
//			transx1 += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//
//		case GLFW_KEY_F:
//			transy += trans;
//			break;
//
//		case GLFW_KEY_V:
//			transy -= trans;
//			break;
//
//		case GLFW_KEY_C:
//			transx -= trans;
//			break;
//
//		case GLFW_KEY_B:
//			transx += trans;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	const GLfloat trans1 = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//		switch (key)
//		{
//		case GLFW_KEY_W:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.01;
//			}
//			else
//				scaleUp = false;
//			break;
//		}
//		case GLFW_KEY_S:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.01;
//
//			}
//			else
//				scaleUp = true;
//		}
//		}
//	}
//}





//textured material effect or light mapping perfect specular light 10 objects




//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
////vertex shader coding part
////fragment shader coding part
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat transx1 = 0; //  step 2: for translation in x axis
//GLfloat transy1 = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//GLfloat scalefactor1 = 1.0f; //step 2: for scaling
//GLboolean scaleUp1 = false;
//
//void main()
//{
//	GLint wid = 2000; //*window variable
//	GLint height1 = 1500; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//
//	//**************** here must add glew function use*********
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
//	//vertex shader 
//
//
//	//fragment shader
//
//
//	//Shader linking of vertex and fragment shader
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders1("Light13.vs", "Light13.frag");
//
//	Shader shaders3("Light37.vs", "Light37.frag");
//
//	//UPPER LIGHT
//	GLfloat vertices[] =
//	{
//			// step-1 change vertices as cube and add color too
//			-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//			 0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//			 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//			 0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//			-0.1f,  0.1f, -0.1f,     1.0, 1.0, 1.0,
//			-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//	
//			-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//			 0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//			 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//			 0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//			-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//			-0.1f, -0.1f, 0.1f,      1.0, 1.0, 1.0,
//	
//			-0.1f, 0.1f, 0.1f,       1.0, 1.0, 1.0,
//			-0.1f, 0.1f, -0.1f,      1.0, 1.0, 1.0,
//			-0.1f, -0.1f, -0.1f,     1.0, 1.0, 1.0,
//			-0.1f, -0.1f, -0.1f,	 1.0, 1.0, 1.0,
//			-0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//			-0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//	
//			0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//			0.1f, 0.1f, -0.1f,		 1.0, 1.0, 1.0,
//			0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//			0.1f, -0.1f, -0.1f,		 1.0, 1.0, 1.0,
//			0.1f, -0.1f, 0.1f,		 1.0, 1.0, 1.0,
//			0.1f, 0.1f, 0.1f,		 1.0, 1.0, 1.0,
//	
//			-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//			0.1f, -0.1f, -0.1f,		1.0, 1.0, 1.0,
//			0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//			0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//			-0.1f, -0.1f, 0.1f,		1.0, 1.0, 1.0,
//			-0.1f, -0.1f, -0.1f,	1.0, 1.0, 1.0,
//	
//			-0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//			0.1f, 0.1f, -0.1f,		1.0, 1.0, 1.0,
//			0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//			0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//			-0.1f, 0.1f, 0.1f,		1.0, 1.0, 1.0,
//			-0.1f, 0.1f, -0.5f,		1.0, 1.0, 1.0,
//			//end
//	
//	};
//	
//	//OBJECT
//	GLfloat vertices1[] =
//	{
//	
//			// step-1 change vertices as cube and add color too
//	
//			//top				
//			//coordinates			color				normal				texture
//			-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	0.0f, 0.0f,
//			 0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 1.0f, 0.0f,
//			 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	1.0f, 1.0f,
//			 0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 1.0f, 1.0f,
//			-0.1f, 0.1f,  0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 0.0f, 1.0f,
//			-0.1f, 0.1f, -0.1f,		1.0, 1.0, 0.0,		0.0f, 1.0f, 0.0f,	 0.0f, 0.0f,
//	
//			//back
//			-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 0.0f, 0.0f,
//			 0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 1.0f, 0.0f,
//			 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	1.0f, 1.0f,
//			 0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 1.0f, 1.0f,
//			-0.1f,  0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 0.0f, 1.0f,
//			-0.1f, -0.1f, -0.1f,	1.0, 0.0, 0.0,		0.0f, 0.0f, -1.0f,	 0.0f, 0.0f,
//	
//			//front
//			-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 1.0f, 0.0f,
//			 0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	1.0f, 1.0f,
//			 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 0.0f, 1.0f,
//			 0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	0.0f, 1.0f,
//			-0.1f,  0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 0.0f, 0.0f,
//			-0.1f, -0.1f, 0.1f,		0.0, 1.0, 0.0,		0.0f, 0.0f, 1.0f,	 1.0f, 0.0f,
//	
//			//left
//			-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	1.0f, 0.0f,
//			-0.1f,  0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	 1.0f, 1.0f,
//			-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	0.0f, 1.0f,
//			-0.1f, -0.1f, -0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	 0.0f, 1.0f,
//			-0.1f, -0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	0.0f, 0.0f,
//			-0.1f,  0.1f,  0.1f,	0.0, 0.0, 1.0,		-1.0f, 0.0f, 0.0f,	1.0f, 0.0f,
//	
//			//right
//			0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 0.0f, 1.0f,
//			0.1f,  0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 1.0f, 1.0f,
//			0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 1.0f, 0.0f,
//			0.1f, -0.1f, -0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 1.0f, 0.0f,
//			0.1f, -0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 0.0f, 0.0f,
//			0.1f,  0.1f,  0.1f,		0.0, 1.0, 1.0,		1.0f, 0.0f, 0.0f,	 0.0f, 1.0f,
//	
//			//bottom
//			-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	0.0f, 1.0f,
//			 0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	1.0f, 1.0f,
//			 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	1.0f, 0.0f,
//			 0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	 1.0f, 0.0f,
//			-0.1f, -0.1f,  0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	 0.0f, 0.0f,
//			-0.1f, -0.1f, -0.1f,	1.0, 0.0, 1.0,		0.0f, -1.0f, 0.0f,	 0.0f, 1.0f
//	
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(0.5, 0.4f, -1.0f),
//		glm::vec3(-0.6f, -0.2f, -2.5f),
//		glm::vec3(-0.7f, -0.7f, -12.3f),
//		glm::vec3(1.0f, -0.4f, -3.5f),
//		glm::vec3(-0.7f, 0.4f, -7.5f),
//		glm::vec3(0.3f, -0.6f, -2.5f),
//		glm::vec3(0.8f, 0.8f, -2.5f),
//		glm::vec3(0.6f, 0.2f, -1.5f),
//		glm::vec3(-0.3f, 0.6f, -1.5f)
//	};
//
//	GLuint VBO[2], VAO[2];//vertex buffer obj//vert array obj
//	glGenVertexArrays(2, VAO);
//	glGenBuffers(2, VBO);
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//
//	//-----------------------------------LIGHT
//
//	glBindVertexArray(VAO[0]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[0]);
//	//vertices1
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	////texture
//	//glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	//glEnableVertexAttribArray(2);
//
//
//	////-----------------------------------OBJECT
//
//	glBindVertexArray(VAO[1]);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO[1]);
//	//vertices3
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices1), vertices1, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	//normal
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 11 * sizeof(GLfloat), (GLvoid*)(9 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int diffusemap1, specularmap1;
//	//diffuse mapping on texture
//	glGenTextures(1, &diffusemap1);
//	glBindTexture(GL_TEXTURE_2D, diffusemap1);
//	if (!diffusemap1)
//	{
//		cout << "error" << endl;
//	}
//	else
//		cout << "diffusemap1 succed" << endl;
//	//specular map on texture
//	glGenTextures(1, &specularmap1);
//	glBindTexture(GL_TEXTURE_2D, specularmap1);
//	if (!specularmap1)
//	{
//		cout << "error" << endl;
//	}
//	else
//		cout << "specularmap1 succed";
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	glUniform1i(glGetUniformLocation(shaders3.Program, "diffusemapping"), 0);
//	//glUniform1i(glGetUniformLocation(shaders3.Program, "mat.specular"), 1);
//	int diffusemaplocation = glGetUniformLocation(shaders3.Program, "mat.diffuse");
//	//int specularmaplocation = glGetUniformLocation(shaders3.Program, "specularmapping");
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//-----------------------------------
//		//UPPER LIGHT
//
//		//2nd
//		//linking the shader / calling the shader
//		shaders1.Use();
//
//		//translation
//		glm::vec3 lightposition(glm::vec3(0.8 + transx1, 0.2 + transy1, 0.0));
//		glm::mat4 model1 = glm::mat4(1.0f);
//		model1 = glm::translate(model1, lightposition);
//
//		//model3 = glm::scale(model3, glm::vec3(0.2));
//		unsigned int translationacces1 = glGetUniformLocation(shaders1.Program, "model1");
//		glUniformMatrix4fv(translationacces1, 1, GL_FALSE, glm::value_ptr(model1));
//
//		//scale
//		glm::mat4 view2 = glm::mat4(1.0f);
//		view2 = glm::scale(view2, glm::vec3(scalefactor, scalefactor, scalefactor));
//		unsigned int scalenacces1 = glGetUniformLocation(shaders1.Program, "view2");
//		glUniformMatrix4fv(scalenacces1, 1, GL_FALSE, glm::value_ptr(view2));
//
//		//camera position or view position or eye**********************
//		glm::vec3 viewPos(glm::vec3(0.3 - transx1, 0.0 + transy1, 0.0));//*************
//		glm::mat4 model4 = glm::mat4(1.0f);
//		model4 = glm::translate(model4, viewPos);
//		unsigned int lightacces = glGetUniformLocation(shaders1.Program, "viewPosition");//************
//		glUniformMatrix4fv(lightacces, 1, GL_FALSE, glm::value_ptr(model4));
//
//		shaders1.setVec3("lightposition", lightposition);
//
//		//viewposition*********************
//		shaders1.setVec3("viewPosition", viewPos);
//
//		//6 must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[0]);
//		glDrawArrays(GL_TRIANGLES, 0, 36); 		//drawing	
//	
//
//		// MIDDLE OBJECT
//		//	glBindTexture(GL_TEXTURE_2D, diffusemap1);
//		//linking the shader / calling the shader
//		shaders3.Use();
//		glUniform1i(glGetUniformLocation(shaders3.Program, "Texture11"), 0);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		
//			//for color flunctation
//			glm::vec3 lightcolorfl;
//			lightcolorfl.r = sin(glfwGetTime() * 0.6f);
//			lightcolorfl.g = sin(glfwGetTime() * 0.2f);
//			lightcolorfl.b = sin(glfwGetTime() * 3.0f);
//	
//			glm::vec3 diffusecolor = lightcolorfl * glm::vec3(0.5);
//			glm::vec3 ambientcolor = diffusecolor * glm::vec3(0.2);
//	
//			//for the light properties
//			glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.ambient"), ambientcolor.r, ambientcolor.g, ambientcolor.b);
//			glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.diffuse"), diffusecolor.r, diffusecolor.g, diffusecolor.b);
//			glUniform3f(glGetUniformLocation((shaders3.Program), "lgt.specular"), 0.5f, 0.5f, 0.5f);
//	
//			//for the material properties
//			/*glUniform3f(glGetUniformLocation((shaders3.Program), "mat.ambient"), 1.0, 0.0, 0.3);
//			glUniform3f(glGetUniformLocation((shaders3.Program), "mat.diffuse"), 1.0, 0.0, 0.3);
//			glUniform3f(glGetUniformLocation((shaders3.Program), "mat.specular"), 1.0, 1.0, 1.0);*/
//
//			
//			//for the shininess properties
//			glUniform1f(glGetUniformLocation((shaders3.Program), "mat.shininess"), 32.0f);
//
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//with sin/tan angle
//		view = glm::translate(view, glm::vec3(0.0, 0.0, -7.0));
//		//		//translation
//		//		glm::mat4 model3 = glm::mat4(1.0f);
//		//		model3 = glm::translate(model3, glm::vec3(0.0 + transx3, -0.2 + transy3, 0.0));
//
//		//scale
//		glm::mat4 view1 = glm::mat4(1.0f);
//		view1 = glm::scale(view1, glm::vec3(scalefactor1, scalefactor1, scalefactor1));
//
//
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(40.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//		//
//		//		//step 3 get the uniform data from the vs shader file
//		//		//translation data fetch from shaders
//		//		unsigned int translationacces3 = glGetUniformLocation(shaders3.Program, "model3");
//		//		glUniformMatrix4fv(translationacces3, 1, GL_FALSE, glm::value_ptr(model3));
//		//
//		//		unsigned int rotateacces3 = glGetUniformLocation(shaders3.Program, "view3");
//		//		glUniformMatrix4fv(rotateacces3, 1, GL_FALSE, glm::value_ptr(view3));
//		//
//		//		//6 must pass parameter vao to see visibility of drawing 
//		//		glBindVertexArray(VAO[3]);
//		//		glDrawArrays(GL_TRIANGLES, 0, 36);		//drawing
//		unsigned int viewacces1 = glGetUniformLocation(shaders3.Program, "view1");
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(view1));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders3.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders3.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO[1]);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f , 0.0f, -1.0f));
//
//			//
//			//		//translation
//			//		glm::mat4 view3 = glm::mat4(1.0f);
//			//		view3 = glm::rotate(view3, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(1.0f, 1.0f, -1.0f));
//
//			unsigned int translationacces = glGetUniformLocation(shaders3.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		//drawing
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glBindVertexArray();
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, VAO);
//	glDeleteBuffers(2, VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_L:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_R:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{
//			switch (key)
//			{
//	
//			case GLFW_KEY_W:
//				transy += trans;
//				break;
//	
//			case GLFW_KEY_S:
//				transy -= trans;
//				break;
//	
//			case GLFW_KEY_A:
//				transx -= trans;
//				break;
//	
//			case GLFW_KEY_D:
//				transx += trans;
//				break;
//	
//			default:
//				break;
//			}
//		}
//
//		
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{
//			switch (key)
//			{
//
//			case GLFW_KEY_8:
//				transy1 += trans;
//				break;
//
//			case GLFW_KEY_2:
//				transy1 -= trans;
//				break;
//
//			case GLFW_KEY_4:
//				transx1 -= trans;
//				break;
//
//			case GLFW_KEY_6:
//				transx1 += trans;
//				break;
//
//			default:
//				break;
//			}
//		}
//
//
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{		
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//			switch (key)
//			{
//				case GLFW_KEY_Z:
//				{
//			
//					if (scalefactor <= 2.0)
//					{
//						scalefactor += 0.01;
//					}
//					else
//						scaleUp = false;
//						break;
//				}
//				case GLFW_KEY_X:
//				{
//			
//				if (scalefactor >= 0.5)
//					{
//						scalefactor -= 0.01;
//			
//					}
//					else
//						scaleUp = true;
//					break;
//				}
//			
//			}
//		}
//
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{
//			//scale factor conditions, boundaries for zoom in zoom out of the object
//			switch (key)
//			{
//			case GLFW_KEY_M:
//			{
//
//				if (scalefactor1 <= 2.0)
//				{
//					scalefactor1 += 0.01;
//				}
//				else
//					scaleUp1 = false;
//				break;
//			}
//			case GLFW_KEY_N:
//			{
//
//				if (scalefactor1 >= 0.5)
//				{
//					scalefactor1 -= 0.01;
//
//				}
//				else
//					scaleUp1 = true;
//				break;
//			}
//
//			}
//		}
//
//}


//How to draw circle in 2D


//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
////for circle
//const float numsteps = 100;
//const float angle = (3.14159 * 2) / numsteps;
//
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.1, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//		
//		//for circle
//		float xpos = 0; float ypos = 0; float radius = 0.8f;
//
//		//for circle
//		float prevx = xpos;
//		float prevy = ypos - radius;
//		for (int i = 0; i <= numsteps; i++)
//		{
//			float newx = radius * sin(angle * i);
//			float newy = -radius * cos(angle * i);
//			glBegin(GL_TRIANGLES);
//			glColor3f(1.0, 0, 0);
//			glVertex3f(0, 0, 0);
//			glVertex3f(prevx, prevy, 0);
//			glVertex3f(newx, newy, 0);
//			glEnd();
//			prevx = newx;
//			prevy = newy;
//
//		}
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}




//Skybox


//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 2000;
//	GLint height1 = 1500;
//	GLFWwindow* window; 
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); 
//
//	
//	glfwMakeContextCurrent(window);
//
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//
//	glViewport(0, 0, wid, height1);
//	glEnable(GL_DEPTH_TEST);
//	Shader shaders("skybox.vs", "skybox.frag");
//
//	
//
//	GLfloat vertices[] =
//	{
//		-0.1f, -0.1f, -0.1f, 
//		 0.1f, -0.1f, -0.1f,
//		 0.1f,  0.1f, -0.1f, 
//		 0.1f,  0.1f, -0.1f, 
//		-0.1f,  0.1f, -0.1f, 
//		-0.1f, -0.1f, -0.1f, 
//
//		-0.1f, -0.1f, 0.1f, 
//		 0.1f, -0.1f, 0.1f, 
//		 0.1f,  0.1f, 0.1f, 
//		 0.1f,  0.1f, 0.1f, 
//		-0.1f,  0.1f, 0.1f, 
//		-0.1f, -0.1f, 0.1f, 
//
//		-0.1f,  0.1f,  0.1f, 
//		-0.1f,  0.1f, -0.1f, 
//		-0.1f, -0.1f, -0.1f, 
//		-0.1f, -0.1f, -0.1f, 
//		-0.1f, -0.1f,  0.1f, 
//		-0.1f,  0.1f,  0.1f, 
//
//		0.1f,  0.1f,  0.1f,
//		0.1f,  0.1f, -0.1f, 
//		0.1f, -0.1f, -0.1f, 
//		0.1f, -0.1f, -0.1f, 
//		0.1f, -0.1f,  0.1f, 
//		0.1f,  0.1f,  0.1f, 
//
//		-0.1f, -0.1f, -0.1f, 
//		 0.1f, -0.1f, -0.1f,
//		 0.1f, -0.1f,  0.1f,
//		 0.1f, -0.1f,  0.1f, 
//		-0.1f, -0.1f,  0.1f, 
//		-0.1f, -0.1f, -0.1f, 
//
//		-0.1f, 0.1f, -0.1f, 
//		 0.1f, 0.1f, -0.1f, 
//		 0.1f, 0.1f,  0.1f, 
//		 0.1f, 0.1f,  0.1f, 
//		-0.1f, 0.1f,  0.1f, 
//		-0.1f, 0.1f, -0.1f
//	};
//
//	GLuint VBO, VAO;
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	while (!glfwWindowShouldClose(window))
//	{
//		
//		glClearColor(0, 0, 0, 0); 
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		glm::mat4 model = glm::mat4(1.0f);
//		model = glm::translate(model, glm::vec3(0.0, -0.3, -3.0));
//		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//
//		
//		glm::mat4 view = glm::mat4(1.0f);
//		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(45.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		glBindVertexArray(VAO);
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//	
//		glfwSwapBuffers(window);
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}




#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<iostream>
#include<GL\glew.h> 
#include"Shader1.h"
#include"SOIL2/SOIL2.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace std;

void MouseCallback(GLFWwindow* window, double xPos, double yPos);

GLint wid = 2000; //*window variable
GLint height1 = 1500; //*window variable
GLFWwindow* window; //pointer var as window that will hold address only 

//camera
glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);

 //timing
float deltaTime = 0.0f;	// time between current frame and last frame
float lastFrame = 0.0f;
// s-1 mouse var def
GLfloat yaw = -90.0f;
GLfloat pitch = 0.0f;
GLfloat fov = 45.0f;
GLfloat lastX = wid / 2.0;
GLfloat lastY = height1 / 2.0;
//bool keys[1024];
bool firstMouse = true;

void main()
{
	
	glfwInit();

	if (!glfwInit())
	{
		cout << "glfw lib error" << endl;
	}
	else
		cout << "glfw success" << endl;
	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL);


	glfwMakeContextCurrent(window);
	glfwSetCursorPosCallback(window, MouseCallback);
	glfwSetInputMode(window, GLFW_CURSOR,GLFW_CURSOR_DISABLED);

	if (glewInit() != GLEW_OK)
	{
		cout << "fail to open glew\n";

	}
	else
		cout << "glew works success\n";

	glViewport(0, 0, wid, height1);
	glEnable(GL_DEPTH_TEST);
	Shader shaders("skybox.vs", "skybox.frag");



	GLfloat vertices[] =
	{
		-0.1f, -0.1f, -0.1f,
		 0.1f, -0.1f, -0.1f,
		 0.1f,  0.1f, -0.1f,
		 0.1f,  0.1f, -0.1f,
		-0.1f,  0.1f, -0.1f,
		-0.1f, -0.1f, -0.1f,

		-0.1f, -0.1f, 0.1f,
		 0.1f, -0.1f, 0.1f,
		 0.1f,  0.1f, 0.1f,
		 0.1f,  0.1f, 0.1f,
		-0.1f,  0.1f, 0.1f,
		-0.1f, -0.1f, 0.1f,

		-0.1f,  0.1f,  0.1f,
		-0.1f,  0.1f, -0.1f,
		-0.1f, -0.1f, -0.1f,
		-0.1f, -0.1f, -0.1f,
		-0.1f, -0.1f,  0.1f,
		-0.1f,  0.1f,  0.1f,

		0.1f,  0.1f,  0.1f,
		0.1f,  0.1f, -0.1f,
		0.1f, -0.1f, -0.1f,
		0.1f, -0.1f, -0.1f,
		0.1f, -0.1f,  0.1f,
		0.1f,  0.1f,  0.1f,

		-0.1f, -0.1f, -0.1f,
		 0.1f, -0.1f, -0.1f,
		 0.1f, -0.1f,  0.1f,
		 0.1f, -0.1f,  0.1f,
		-0.1f, -0.1f,  0.1f,
		-0.1f, -0.1f, -0.1f,

		-0.1f, 0.1f, -0.1f,
		 0.1f, 0.1f, -0.1f,
		 0.1f, 0.1f,  0.1f,
		 0.1f, 0.1f,  0.1f,
		-0.1f, 0.1f,  0.1f,
		-0.1f, 0.1f, -0.1f
	};

	GLuint VBO, VAO;
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);

	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);


	while (!glfwWindowShouldClose(window))
	{

		glClearColor(0, 0, 0, 0);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		glm::mat4 model = glm::mat4(1.0f);
		model = glm::translate(model, glm::vec3(0.0, -0.3, -3.0));
		unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
		glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));

		//view
		glm::mat4 view1 = glm::mat4(1.0f);
		//with sin/tan angle
		view1 = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
		shaders.setMat4("view1", view1);

		glm::mat4 view = glm::mat4(1.0f);
		view = glm::rotate(view, (float)glfwGetTime() * glm::radians(-55.0f), glm::vec3(-1.0f, 1.0f, -1.0f));
		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));

		glm::mat4 projection;
		projection = glm::perspective(glm::radians(45.0f), (float)wid / (float)height1, 0.1f, 100.0f);
		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));

		glBindVertexArray(VAO);
		glDrawArrays(GL_TRIANGLES, 0, 36);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glfwTerminate();
}

void MouseCallback(GLFWwindow* window, double xPos, double yPos)
{
	if (firstMouse)
	{
		lastX = xPos;
		lastY = yPos;
		firstMouse = false;
	}

	GLfloat xOffset = xPos - lastX;
	GLfloat yOffset = lastY - yPos;  // Reversed since y-coordinates go from bottom to left

	lastX = xPos;
	lastY = yPos;

	float sensitivity = 0.05;
	xOffset *= sensitivity;
	yOffset *= sensitivity;

	yaw += xOffset;
	pitch += yOffset;

	if (pitch > 89.0f)
		pitch = 89.0f;
	if (pitch < -89.0f)
		pitch = -89.0f;

	glm::vec3 front;
	front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
	front.y = sin(glm::radians(pitch));
	front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
	cameraFront = glm::normalize(front);

}




//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//#include<GL\glew.h> 
//#include"Shader1.h"
//#include"SOIL2/SOIL2.h"
//#include <glm/glm.hpp>//Graphics Lib for mathematics.
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtc/type_ptr.hpp>
//
//using namespace std;
//
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods); //step 1: added keycall
//// s-2 mouse decl part
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset);
//void MouseCallback(GLFWwindow* window, double xPos, double yPos);
//
//GLint wid = 2000; //*window variable
//GLint height1 = 1500; //*window variable
//GLFWwindow* window; //pointer var as window that will hold address only 
//
//
// //camera
//glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
//glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
//glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);
//
// //timing
//float deltaTime = 0.0f;	// time between current frame and last frame
//float lastFrame = 0.0f;
//// s-1 mouse var def
//GLfloat yaw = -90.0f;
//GLfloat pitch = 0.0f;
//GLfloat fov = 45.0f;
//GLfloat lastX = wid / 2.0;
//GLfloat lastY = height1 / 2.0;
////bool keys[1024];
//bool firstMouse = true;
//
//
//GLfloat rotationx = 0.0f; //step 2: for rotating in x axis
//
//GLfloat transx = 0; //  step 2: for translation in x axis
//GLfloat transy = 0; //  step2: for translation in y axis
//
//GLfloat scalefactor = 1.0f; //step 2: for scaling
//GLboolean scaleUp = false;
//
//void main()
//{
//	
//	glfwInit();
//
//	if (!glfwInit())
//	{
//		cout << "glfw lib error" << endl;
//	}
//	else
//		cout << "glfw success" << endl;
//	window = glfwCreateWindow(wid, height1, "Window with background color", NULL, NULL); //*assigned window variable 
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	glfwSetKeyCallback(window, keyCall); //step 3: gave keycallback
//	glfwSetCursorPosCallback(window, MouseCallback);
//	glfwSetScrollCallback(window, ScrollCallback);
//	glfwSetInputMode(window, GLFW_CURSOR,GLFW_CURSOR_DISABLED);
//
//	//**************** here must add glew function use*********
//	if (glewInit() != GLEW_OK)
//	{
//		cout << "fail to open glew\n";
//
//	}
//	else
//		cout << "glew works success\n";
//
//
//	//view port
//	glViewport(0, 0, wid, height1);
//
//	glEnable(GL_DEPTH_TEST);
//
//	//Attaching shader Files 
//	Shader shaders("transform10.vs", "transform10.frag");
//
//
//
//	GLfloat vertices[] =
//	{
//		//change vertices as cube and add color too
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//		 0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 0.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		 0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 1.0f, 1.0f,
//		-0.5f,  0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 1.0f, 1.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 1.0, 0.0, 0.0f, 0.0f,
//
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 0.0, 0.0, 1.0, 1.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, -0.5f, 0.0, 0.0, 1.0, 0.0f, 1.0f,
//		-0.5f, -0.5f, 0.5f, 0.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 0.0, 0.0, 1.0, 1.0f, 0.0f,
//
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//		0.5f, 0.5f, -0.5f, 0.0, 1.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 0.0, 1.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 0.0, 1.0, 1.0, 0.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 0.0, 1.0, 1.0, 1.0f, 0.0f,
//
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//		0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 1.0f, 1.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 1.0f, 0.0f,
//		-0.5f, -0.5f, 0.5f, 1.0, 0.0, 1.0, 0.0f, 0.0f,
//		-0.5f, -0.5f, -0.5f, 1.0, 0.0, 1.0, 0.0f, 1.0f,
//
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f,
//		0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 1.0f, 1.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 1.0f, 0.0f,
//		-0.5f, 0.5f, 0.5f, 1.0, 1.0, 0.0, 0.0f, 0.0f,
//		-0.5f, 0.5f, -0.5f, 1.0, 1.0, 0.0, 0.0f, 1.0f
//		//end
//
//
//	};
//
//	glm::vec3 objPosition[] =
//	{
//		glm::vec3(0.0f, 0.0f, 0.0f),
//		glm::vec3(2.0f, 5.0f, -15.0f),
//		glm::vec3(-1.5f, -2.2f, -2.5f),
//		glm::vec3(-3.8f, -2.0f, -12.3f),
//		glm::vec3(2.4f, -0.4f, -3.5f),
//		glm::vec3(-1.7f, 3.0f, -7.5f),
//		glm::vec3(1.3f, -2.0f, -2.5f),
//		glm::vec3(1.5f, 2.0f, -2.5f),
//		glm::vec3(1.5f, 0.2f, -1.5f),
//		glm::vec3(-1.3f, 1.0f, -1.5f)
//	};
//
//	GLuint VBO, VAO;//vertex buffer obj//vert array obj
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	glBindVertexArray(VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	//vertices
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
//	glEnableVertexAttribArray(0);
//
//	//color
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(1);
//
//	//texture
//	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
//	glEnableVertexAttribArray(2);
//
//
//
//
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(0);
//
//
//	//texture-1 file manipulation / how to do the texture attachment wth of openGl soil lib.
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
//	unsigned char* image = SOIL_load_image("image1.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//	//texture-2 file manipulation / how to do the texture attachment wth of openGl soil lib.
//	unsigned int texture1;
//	glGenTextures(1, &texture1);
//	glBindTexture(GL_TEXTURE_2D, texture1);
//	//texturing
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//	//int width, height, nrChannels;
//	unsigned char* image1 = SOIL_load_image("awesomeface.png", &width, &height, 0, SOIL_LOAD_RGBA);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image1);
//	glGenerateMipmap(GL_TEXTURE_2D);
//	SOIL_free_image_data(image1);
//	glBindTexture(GL_TEXTURE_2D, 0);
//
//
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0, 0, 0, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//		//linking the shader / calling the shader
//		shaders.Use();
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture11"), 0);
//		glUniform1i(glGetUniformLocation(shaders.Program, "Texture22"), 1);
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, texture);
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, texture1);
//
//		//trabsaltion
//		//glm::mat4 model = glm::mat4(1.0f);
//		//model = glm::translate(model, glm::vec3(-0.9, -0.8, -3.0));
//
//		//view
//		glm::mat4 view = glm::mat4(1.0f);
//		//with sin/tan angle
//		view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
//		shaders.setMat4("view", view);
//
//		//scale
//		glm::mat4 view1 = glm::mat4(1.0f);
//		view1 = glm::scale(view1, glm::vec3(scalefactor, scalefactor, scalefactor));
//
//
//		glm::mat4 projection;
//		projection = glm::perspective(glm::radians(100.0f), (float)wid / (float)height1, 0.1f, 100.0f);
//
//		unsigned int viewacces1 = glGetUniformLocation(shaders.Program, "view1");
//		glUniformMatrix4fv(viewacces1, 1, GL_FALSE, glm::value_ptr(view1));
//
//		//view data fetch from shaders
//		unsigned int viewacces = glGetUniformLocation(shaders.Program, "view");
//		glUniformMatrix4fv(viewacces, 1, GL_FALSE, glm::value_ptr(view));
//
//		//scale data fetch from shaders
//		unsigned int scaleacces = glGetUniformLocation(shaders.Program, "projection");
//		glUniformMatrix4fv(scaleacces, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//must pass parameter vao to see visibility of drawing 
//		glBindVertexArray(VAO);
//
//		for (unsigned int i = 1; i <= 10; i++)
//		{
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, objPosition[i]);
//			model = glm::translate(model, glm::vec3(0.0 + transx, 0.0 + transy, 0));
//			float angle = 18.0 * i;
//			if (angle == 0)
//			{
//				angle = 40.0;
//			}
//			model = glm::rotate(model, glm::radians(angle) * rotationx, glm::vec3(0.0f , 0.0f, -1.0f));
//			
//			unsigned int translationacces = glGetUniformLocation(shaders.Program, "model");
//			glUniformMatrix4fv(translationacces, 1, GL_FALSE, glm::value_ptr(model));
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//		}
//
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods) //step 4: assigned keys in keycallback
//{
//	const GLfloat rotationSpeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//
//		switch (key)
//		{
//		case GLFW_KEY_L:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_R:
//			rotationx -= rotationSpeed;
//			break;
//		}
//
//	}
//
//	const GLfloat trans = 0.1;
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{
//			switch (key)
//			{
//	
//			case GLFW_KEY_W:
//				transy += trans;
//				break;
//	
//			case GLFW_KEY_S:
//				transy -= trans;
//				break;
//	
//			case GLFW_KEY_A:
//				transx -= trans;
//				break;
//	
//			case GLFW_KEY_D:
//				transx += trans;
//				break;
//	
//			default:
//				break;
//			}
//		}
//
//		if (action == GLFW_PRESS || action == GLFW_REPEAT)
//		{		
//		//scale factor conditions, boundaries for zoom in zoom out of the object
//			switch (key)
//			{
//				case GLFW_KEY_Z:
//				{
//			
//					if (scalefactor <= 2.0)
//					{
//						scalefactor += 0.01;
//					}
//					else
//						scaleUp = false;
//						break;
//				}
//				case GLFW_KEY_X:
//				{
//			
//				if (scalefactor >= 0.5)
//					{
//						scalefactor -= 0.01;
//			
//					}
//					else
//						scaleUp = true;
//					break;
//				}
//			
//			}
//		}
//}
//
//void ScrollCallback(GLFWwindow* window, double xOffset, double yOffset)
//{
//	if (fov >= 1.0f && fov <= 45.0f)
//		fov -= yOffset;
//	if (fov <= 1.0f)
//		fov = 1.0f;
//	if (fov >= 45.0f)
//		fov = 45.0f;
//
//}
//
//void MouseCallback(GLFWwindow* window, double xPos, double yPos)
//{
//	if (firstMouse)
//	{
//		lastX = xPos;
//		lastY = yPos;
//		firstMouse = false;
//	}
//
//	GLfloat xOffset = xPos - lastX;
//	GLfloat yOffset = lastY - yPos;  // Reversed since y-coordinates go from bottom to left
//
//	lastX = xPos;
//	lastY = yPos;
//
//	float sensitivity = 0.05;
//	xOffset *= sensitivity;
//	yOffset *= sensitivity;
//
//	yaw += xOffset;
//	pitch += yOffset;
//
//	if (pitch > 89.0f)
//		pitch = 89.0f;
//	if (pitch < -89.0f)
//		pitch = -89.0f;
//
//	glm::vec3 front;
//	front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
//	front.y = sin(glm::radians(pitch));
//	front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
//	cameraFront = glm::normalize(front);
//
//}
#pragma once

int InitWindowFailed();
int InitGlewFailed();
void renderLoop();

GLuint LoadShaders(const char *vertex_file_path, const char *fragment_file_path);
GLuint& LoadQuad();
GLuint& LoadTriangle();

void RenderVertex(GLuint vertexBuffer);
void RenderQuad(GLuint vertexBuffer);
void RenderTriangle(GLuint vertexBuffer);


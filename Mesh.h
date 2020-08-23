#include <GL\glew.h>

class Mesh
{
public:
    Mesh();
    ~Mesh();

    void CreateMesh(GLfloat *vertices, unsigned int *indices, unsigned int numOfVertices, unsigned int );
    void RenderMesh();
    void ClearMesh();

private:
    GLuint VAO, VBO, IBO;
    GLsizei indexCount;
};


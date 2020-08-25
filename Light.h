#pragma once

#include <GL/glew.h>
#include <GLM/glm.hpp>

class Light
{
public:
    Light();
    Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity);
    ~Light();

    void UseLight(GLfloat ambientIntensityLocation, GLfloat ambientColorLocation);

private:
    glm::vec3 color;
    GLfloat ambientIntensity;
};


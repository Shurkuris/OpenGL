#pragma once

#include <GL/glew.h>
#include <GLM/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <vector>

#include "ShadowMap.h"

class Light
{
public:
    Light();
    Light(GLfloat shadowWidth, GLfloat shadowHeight,
          GLfloat red, GLfloat green, GLfloat blue,
          GLfloat aIntensity, GLfloat dIntensity);
    ~Light();

    ShadowMap* GetShadowMap() { return shadowMap; }

protected:
    glm::vec3 color;
    GLfloat ambientIntensity;
    GLfloat diffuseIntensity;

    glm::mat4 lightProj;

    ShadowMap* shadowMap;
};


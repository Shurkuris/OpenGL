#pragma once

#include <GL\glew.h>

#include <GLM\glm.hpp>
#include <GLM\gtc\matrix_transform.hpp>
#include <GLFW/glfw3.h>

class Camera
{
public:
    Camera();
    Camera(glm::vec3 position, glm::vec3 up, GLfloat yaw, GLfloat pitch, GLfloat startMoveSpeed, GLfloat startTurnSpeed);
    ~Camera();

    void keyControl(bool* keys, GLfloat deltaTime);
    void mouseControl(GLfloat xChange, GLfloat yChange);

    glm::vec3 getCameraPosition();
    glm::vec3 getCameraDirection();

    glm::mat4 calculateViewMatrix();

private:
    glm::vec3 position;
    glm::vec3 front;
    glm::vec3 up;
    glm::vec3 right;
    glm::vec3 worldUp;

    GLfloat yaw;
    GLfloat pitch;

    GLfloat moveSpeed;
    GLfloat turnSpeed;

    void update();
};


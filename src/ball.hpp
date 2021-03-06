#ifndef BALL_H
#define BALL_H

#include "graphics.hpp"
#include "paddle.hpp"

class Ball {
  public:
    glm::vec4 position;
    glm::vec4 velocity;

    Ball();
    void reset();
    void draw(Graphics);
    void update(Paddle, Paddle);
};

#endif
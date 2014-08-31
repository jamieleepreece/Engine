#ifndef TRANSFORM_H
#define TRANSFORM_H

#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>

class Transform
{
public:
  Transform(const glm::vec3& position = glm::vec3(), const glm::quat& rotation = glm::quat(), const glm::vec3& scale = glm::vec3(1.0f));
  ~Transform(void);

  void rotate(const glm::vec3& axis, float angle);
  void scale(float scale);
  void scale(const glm::vec3& scale);
  void translate(const glm::vec3& position);

  void setPosition(const glm::vec3& position);

  void setScale(const glm::vec3& scale);

  void setRotation(const glm::quat& rotation);
  void setRotation(const glm::vec3& axis, float w);

  glm::vec3& getPosition(void);
  glm::vec3 getScale(void);
  glm::quat getRotation(void);

  glm::mat4 getTransformMatrix(void);

private:
  glm::vec3 m_position;
  glm::quat m_rotation;
  glm::vec3 m_scale;
};

#endif

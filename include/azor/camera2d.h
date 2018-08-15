#ifndef CAMERA_2D_H
#define CAMERA_2D_H

#include <glm/glm.hpp>

namespace azor
{
	class Camera2D
	{
	public:
		static glm::mat4 projection;
		static glm::mat4 view;
	public:
		 Camera2D() = delete;
		~Camera2D() = delete;
		static void initialize(float width, float height);
		static void translate(glm::vec2 pos);
	};
}

#endif // CAMERA_2D_H

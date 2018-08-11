#pragma once
#include <glm/glm.hpp>

namespace azor
{
	class Camera2D
	{
	public:
		static glm::mat4 projection_;

	public:
		 Camera2D() = delete;
		~Camera2D() = delete;
		static void initialize(float width, float height);
		static void translate(glm::vec2 pos);
		static void translate_to(glm::vec2 v);
	};
}

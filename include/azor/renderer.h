#pragma once
#include <glm/glm.hpp>
#include <string>
#include "rectangle.h"

namespace azor
{
	class Renderer
	{
		
	public:
		Renderer() = delete;
		~Renderer() = delete;

	public:
		static void initialize();
		static void clean_up();
		static void use_texture(const std::string& name);
		static void draw(glm::vec2 position, glm::vec2 size, float rotate_angle, glm::vec3 color = glm::vec3(1, 1, 1));
		static void draw(const Rectangle& rec, glm::vec2 position, glm::vec2 size, float rotate_angle, glm::vec3 color = glm::vec3(1, 1, 1));
		static void draw_text(const std::string& text, const glm::vec2& position, float scale, const glm::vec3& font_color);
	};
}

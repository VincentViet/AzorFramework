#ifndef RENDERER_H
#define RENDERER_H

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
		static void draw(const std::string& texture_name, glm::vec2 position, glm::vec2 size, float rotate_angle, glm::vec3 color = glm::vec3(255, 255, 255));
		static void draw(const std::string& texture_name, const Rectangle& rec, glm::vec2 position, glm::vec2 size, float rotate_angle, glm::vec3 color = glm::vec3(255, 255, 255));
		static void draw_text(const std::string& text, const std::string& font_name, const glm::vec2& position, glm::vec3 font_color);
		static void draw_symbol(const std::string& symbol_name, unsigned amount, const glm::vec2& position, glm::vec3 font_color);
	};
}

#endif // RENDERER_H

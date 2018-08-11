#pragma once
#include <glm/glm.hpp>

namespace azor
{
	struct Character
	{
		unsigned texture_id;
		glm::ivec2 size{};
		glm::ivec2 bearing{};
		int advance;

		Character();
		Character(unsigned id, const glm::ivec2& size, const glm::ivec2& bearing, int advance);
	};
}

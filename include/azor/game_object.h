#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <glm/glm.hpp>
#include <string>

namespace azor
{
	class GameObject
	{

	protected:
		glm::vec2 position_{}, size_{}, velocity_{};
		glm::vec3 color_{};
		float rotation_;
		std::string texture_name_;

	public:
		GameObject();
		explicit GameObject(
			glm::vec2 pos,
			glm::vec2 size,
			const std::string& texture_name,
			glm::vec3 color = glm::vec3(1),
			glm::vec2 velocity = glm::vec2(0));
		virtual ~GameObject() = default;

	public:
		static bool aabb_aabb_collision(GameObject& obj_one, GameObject& obj_two);
		static bool aabb_circle_collision(GameObject& circle, GameObject& block);
	};
}

#endif // GAME_OBJECT_H
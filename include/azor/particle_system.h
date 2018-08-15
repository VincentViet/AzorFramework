#ifndef PARTICLE_SYSTEM_H
#define PARTICLE_SYSTEM_H

#include <vector>
#include <string>
#include <glm/glm.hpp>

namespace azor
{
	struct Particle
	{
		float scale, life_time;
		glm::vec2 position{}, velocity{};
		glm::vec4 color{0};

		Particle(const float scale, const float life_time, const glm::vec2 velocity);

	};

	class ParticleEmitter
	{
		unsigned nr_particles_;
		std::vector<Particle> particles_;
		std::string texture_name_;
		static unsigned vbo_;
		static unsigned vao_;
		float particle_life_;
		float particle_scale_;
		float radius_;
		glm::vec2 dimensions_;

	private: // func
		int first_dead_particle();
		void respawn_particle(Particle& p) const;
	public:
		glm::vec2 position{};
		glm::vec2 particle_velocity{};
	public:
		explicit ParticleEmitter(unsigned number_of_particles, std::string tex_name, float life, float scale, float radius, glm::vec2 velocity);
		~ParticleEmitter() = default;
		static void initialize();
		static void clean_up();
		void update();
		void draw();
	};
}

#endif //PARTICLE_SYSTEM_H

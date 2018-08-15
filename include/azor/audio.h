#ifndef AUDIO_H
#define AUDIO_H

#include <string>
#include <map>

namespace azor
{
	class Audio
	{

	public:
		Audio() = delete;
		~Audio() = delete;

	public:
		static void initialize();
		static void clean_up();
		static void load_sound_from_file(const std::string& file_path, const std::string& name);
		static void play(const std::string& name, bool loop = false);
		static void set_volume(float vol);
		static void set_default_volume(const std::string& name, float vol);
		static void set_is_looped(bool loop);
		static void stop();
		static void stop_all_sounds();
	};
}

#endif // AUDIO_H

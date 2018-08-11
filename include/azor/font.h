 #pragma once
#include <string>
#include "character.h"

 namespace azor
 {
 	class Font
 	{
 		
 	public:
 		Font() = delete;
 		~Font() = delete;

 	public:
		static void initialize();
		static void load_font_from_file(const std::string& file_path, const std::string& font_name);
		static Character& get_character_info(unsigned character_code);
		static void clean_up();
 	};
 }

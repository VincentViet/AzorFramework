
#ifndef FONT_H
#define FONT_H

#include <string>
#include <map>
#include "character.h"

namespace azor
{
	class Font
	{

	public:
		static std::map<std::string, unsigned> font_storage;
		static std::map<unsigned, azor::Character> character_storage;
		static std::map<std::string, azor::Character> symbol_storage;
	public:
		Font() = delete;
		~Font() = delete;

	public:
		static void initialize();
		static void load_font_from_file(const std::string& file_path, const std::string& font_name, unsigned font_size);
		static void load_symbol(unsigned unicode, const std::string& font_path, const std::string& symbol_name,
		                        unsigned font_size);
		static void clean_up();
	};
}
#endif // FONT_H

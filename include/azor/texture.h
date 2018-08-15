#ifndef TEXTURE_H
#define TEXTURE_H

#include <string>
#include <glm/glm.hpp>

namespace azor
{

  class Texture
  {

  public:
	  Texture() = delete;
	  ~Texture() = delete;

  public:
	  static void initialize();
	  static void load_texture_form_file(const std::string& file_path, const std::string& name);
	  static glm::vec2 get_dimensions(const std::string& name);
	  static void bind(const std::string& name);
	  static void bind(unsigned id);
	  static void clean_up();
  };
}


#endif // TEXTURE_H
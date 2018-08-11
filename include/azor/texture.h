#pragma once
#include <map>
#include <string>
#include <glm/glm.hpp>

namespace azor
{

  class Texture
  {
  private:
	  static std::map<std::string, unsigned> texture_storage_;
	  static std::map<unsigned, glm::vec2> texture_dimesion_storage_;

  public:
	  Texture() = delete;
	  ~Texture() = delete;

  public:
	  static void load_texture_form_file(const std::string& file_path, const std::string& name);
	  static glm::vec2 get_dimensions(const std::string& name);
	  static void bind(const std::string& name);
	  static void unbind();
	  static void clean_up();
  };
}

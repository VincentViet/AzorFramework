#pragma once
#include <map>
#include <string>
#include <glm/glm.hpp>

namespace azor
{
  class Shader
  {
  private:
	 static std::map<std::string, unsigned> shader_storage_;

  public:
	  Shader() = delete;
	  ~Shader() = delete;
	  static void clean_up();

  public:
	  static void load_shader(const char *vertex_shader_path, const char *fragment_shader_path, const std::string& name);
	  static void use_shader(const std::string& name);
	  static unsigned get_shader(const std::string& name);
    
    static void set_float(const char *variable_name, float value, const std::string& shader_name, unsigned char use = false);
	  static void set_integer(const char *variable_name, int value, const std::string& shader_name, unsigned char
		  use = false);
	  static void set_vector2_f(const char *variable_name, float x, float y, const std::string& shader_name, unsigned char
		  use = false);
	  static void set_vector2_f(const char *variable_name, const glm::vec2 &value, const std::string& shader_name, unsigned char
		  use = false);
	  static void set_vector3_f(const char *variable_name, float x, float y, float z, const std::string& shader_name, unsigned char
		  use = false);
	  static void set_vector3_f(const char *variable_name, const glm::vec3 &value, const std::string& shader_name, unsigned char
		  use = false);
	  static void set_vector4_f(const char *variable_name, float x, float y, float z, float w, const std::string&
	                            shader_name, unsigned char
		  use = false);
	  static void set_vector4_f(const char *variable_name, const glm::vec4 &value, const std::string& shader_name, unsigned char
		  use = false);
	  static void set_matrix4(const char *variable_name, const glm::mat4 &matrix, const std::string& shader_name, unsigned char
		  use = false);
  };
}

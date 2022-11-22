#pragma once

#include "shader.hpp"
#include <Texture.hpp>

#include <map>
#include <typeinfo>
#include <typeindex> 

namespace gl {

    // std::map<std::type_index, void*> renderers_;
    // std::map<std::string, Shader>    shaders_;
    class ResourceManager {
        std::map<std::string, Texture_base*> textures_;

        public:
        ~ResourceManager() {clear();}

        Texture_base* loadTexture(Texture_base* texture, std::string name);
        Texture_base* texture(std::string name);

        void clear();

    };



}
#ifndef CUBE_HPP
#define CUBE_HPP

#include "geometries/geometry.hpp"

namespace geometry {
  class Cube : public Geometry {
  public:
    Cube(bool is_skybox=false, const glm::vec3& size={ 1, 1, 1 });
    std::vector<float> get_vertexes() const override;
    unsigned int get_n_elements() const override;
    std::vector<unsigned int> get_indices() const override;
    std::vector<glm::vec3> get_positions() const override;

  private:
    /* width, height, depth of cube */
    float m_width;
    float m_height;
    float m_depth;

    /* internal: used for skybox (ccw winding order with normal pointing inwards) */
    static const std::vector<unsigned int> INDICES_INTERNAL;
    static const std::vector<unsigned int> INDICES_EXTERNAL;

    static const std::vector<glm::vec3> POSITIONS;
  };
}

#endif // CUBE_HPP

# Build example
add_executable(example
  window.cpp
  glew.c
  vec2.cpp
  example.cpp
  mat2.cpp
  color.cpp
  Circle.cpp)
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES})
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
# Build tests
add_executable(tests
   tests.cpp
   vec2.cpp
   mat2.cpp
   Circle.cpp
   rectangle.cpp
   color.cpp
   glew.c
   window.cpp
   )
target_link_libraries(tests
   ${GLFW_LIBRARIES}
   glfw
   nanovg
   ${OPENGL_LIBRARIES}
   )



# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  vec2.cpp
  mat2.cpp
  circle.cpp
  rectangle.cpp
  color.cpp)
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES})
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  window.cpp
  glew.c
  tests.cpp
  vec2.cpp
  mat2.cpp
  circle.cpp
  rectangle.cpp
  color.cpp)
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES})
  
  # Build aufgabe2bis4
add_executable(aufgabe2bis4 aufgabe2bis4.cpp)
add_executable(aufgabe5 aufgabe5.cpp)
add_executable(aufgabe7 
aufgabe7.cpp
  vec2.cpp
  mat2.cpp
  circlecopy.cpp
  color.cpp)
add_executable(aufgabe9 aufgabe9.cpp)
add_executable(aufgabe10 aufgabe10.cpp)

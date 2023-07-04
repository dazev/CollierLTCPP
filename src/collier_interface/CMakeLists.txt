add_library(CollierInterface lt_collier_interface_complex.F90)
target_include_directories(CollierInterface PRIVATE
    ${CMAKE_SOURCE_DIR}/src/collier_interface/include
)
target_link_libraries(CollierInterface collier)
# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(FATAL_ERROR "Could not find messages which '/home/ubunturos/catkin_ws/src/beginner_tutorials/srv/dis.srv' depends on. Did you forget to specify generate_messages(DEPENDENCIES ...)?
Cannot locate message [float]: unknown package [beginner_tutorials] on search path [{}]")
message(STATUS "beginner_tutorials: 0 messages, 1 services")

set(MSG_I_FLAGS "")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(beginner_tutorials_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_cpp(beginner_tutorials
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/beginner_tutorials
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(beginner_tutorials_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(beginner_tutorials_generate_messages beginner_tutorials_generate_messages_cpp)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(beginner_tutorials_gencpp)
add_dependencies(beginner_tutorials_gencpp beginner_tutorials_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS beginner_tutorials_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_eus(beginner_tutorials
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/beginner_tutorials
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(beginner_tutorials_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(beginner_tutorials_generate_messages beginner_tutorials_generate_messages_eus)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(beginner_tutorials_geneus)
add_dependencies(beginner_tutorials_geneus beginner_tutorials_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS beginner_tutorials_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_lisp(beginner_tutorials
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/beginner_tutorials
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(beginner_tutorials_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(beginner_tutorials_generate_messages beginner_tutorials_generate_messages_lisp)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(beginner_tutorials_genlisp)
add_dependencies(beginner_tutorials_genlisp beginner_tutorials_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS beginner_tutorials_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_nodejs(beginner_tutorials
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/beginner_tutorials
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(beginner_tutorials_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(beginner_tutorials_generate_messages beginner_tutorials_generate_messages_nodejs)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(beginner_tutorials_gennodejs)
add_dependencies(beginner_tutorials_gennodejs beginner_tutorials_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS beginner_tutorials_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_py(beginner_tutorials
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/beginner_tutorials
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(beginner_tutorials_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(beginner_tutorials_generate_messages beginner_tutorials_generate_messages_py)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(beginner_tutorials_genpy)
add_dependencies(beginner_tutorials_genpy beginner_tutorials_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS beginner_tutorials_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/beginner_tutorials)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/beginner_tutorials
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/beginner_tutorials)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/beginner_tutorials
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/beginner_tutorials)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/beginner_tutorials
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/beginner_tutorials)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/beginner_tutorials
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/beginner_tutorials)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/beginner_tutorials\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/beginner_tutorials
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()

#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#ifdef __MINGW32__
  #include <openvr_mingw.hpp>
#else
  #include <openvr.h>
#endif // __MINGW32__
#include "vectorstorm/matrix/matrix4.h"
#include "input/controller.h"

namespace vrstorm {

struct controller {
  unsigned int id = 0;
  input::controller::hand_type hand = input::controller::hand_type::UNKNOWN;

  matrix4f position;

  #ifndef VRSTORM_DISABLED
    vr::RenderModel_t* model = nullptr;
  #endif // VRSTORM_DISABLED
};

}

#endif // CONTROLLER_H_INCLUDED

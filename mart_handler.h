#pragma once
#include "esphome.h"

namespace smart_handler {

class SmartHandler : public Component {
 public:
  void setup() override;    // called once at startup
  void loop() override;     // optional
};

}  // namespace smart_handler

#ifndef RWRAPPER_RTEXTACTION_H
#define RWRAPPER_RTEXTACTION_H

#include "RGraphicsAction.h"

namespace graphics {
namespace devices {
namespace actions {

class RTextAction : public RGraphicsAction {
public:
  virtual void setEnabled(bool isEnabled) = 0;
  virtual double textWidth() = 0;
  virtual Point location() = 0;
};

}  // actions
}  // devices
}  // graphics

#endif //RWRAPPER_RTEXTACTION_H

#include "RCircleAction.h"

#include <sstream>
#include <algorithm>

#include "util/RescaleUtil.h"

namespace devices {
  namespace actions {
    RCircleAction::RCircleAction(Point center, double radius, pGEcontext context)
      : center(center), radius(radius), context(*context) { DEVICE_TRACE; }

    void RCircleAction::rescale(const RescaleInfo& rescaleInfo) {
      DEVICE_TRACE;
      util::rescaleInPlace(center, rescaleInfo);
      //radius *= std::min(xScale, yScale);  // Note: I have come to conclusion that radius should stay the same
    }

    void RCircleAction::perform(Ptr<RGraphicsDevice> device) {
      DEVICE_TRACE;
      device->drawCircle(center, radius, &context);
    }

    Ptr<RGraphicsAction> RCircleAction::clone() {
      return makePtr<RCircleAction>(center, radius, &context);
    }

    std::string RCircleAction::toString() {
      auto sout = std::ostringstream();
      sout << "RCircleAction {center = " << center << ", r = " << radius << "}";
      return sout.str();
    }
  }
}
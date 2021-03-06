#pragma once

#include "IRequestHandler.h"

namespace net {

class HeartbeatRequestHandler : public IRequestHandler
{
public:
  json::Document process(const Request& request) const override;
};

} // namespace net

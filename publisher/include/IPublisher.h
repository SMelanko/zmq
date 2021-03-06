#pragma once

#include <string>

namespace net {

class IPublisher
{
public:
  virtual ~IPublisher() noexcept = default;

  /**
   * @brief Sends out data to the clients that were subscribed to the specified topic.
   */
  virtual void sendOut(const std::string& topic, const std::string& data) = 0;

  /**
   * @brief Sends out data to all connected clients.
   */
  virtual void broadcast(const std::string& data) = 0;
};

} // namespace net

/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ABI35_0_0BatchedEventQueue.h"

namespace facebook {
namespace ReactABI35_0_0 {

void BatchedEventQueue::enqueueEvent(const RawEvent &rawEvent) const {
  EventQueue::enqueueEvent(rawEvent);
  eventBeat_->request();
}

} // namespace ReactABI35_0_0
} // namespace facebook

/**
 * Copyright (c) 2017-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */
#pragma once

#include "MessageType.h"
#include "Message.h"
#include "logdevice/include/EnumMap.h"

namespace facebook { namespace logdevice {

/**
 * @file a specialization of EnumMap for mapping MessageTypes and
 *       deserializers.
 *
 *       DO NOT TRY TO MERGE THIS INTO MessageType.h! Message::deserializer_t
 *       cannot be forward-declared.
 *       Message.h includes MessageType.h. This creates a circular #include
 *       dependency if MessageTypeInfo is in MessageType.h.
 */

extern EnumMap<MessageType, Message::deserializer_t*> messageDeserializers;

}} // namespace facebook::logdevice

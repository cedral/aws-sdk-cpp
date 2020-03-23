﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{
  enum class ChatItemType
  {
    NOT_SET,
    MESSAGE,
    EVENT,
    CONNECTION_ACK
  };

namespace ChatItemTypeMapper
{
AWS_CONNECTPARTICIPANT_API ChatItemType GetChatItemTypeForName(const Aws::String& name);

AWS_CONNECTPARTICIPANT_API Aws::String GetNameForChatItemType(ChatItemType value);
} // namespace ChatItemTypeMapper
} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws

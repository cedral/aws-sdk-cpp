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

#include <aws/chime/model/VoiceConnectorGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

VoiceConnectorGroup::VoiceConnectorGroup() : 
    m_voiceConnectorGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_voiceConnectorItemsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

VoiceConnectorGroup::VoiceConnectorGroup(JsonView jsonValue) : 
    m_voiceConnectorGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_voiceConnectorItemsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceConnectorGroup& VoiceConnectorGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceConnectorGroupId"))
  {
    m_voiceConnectorGroupId = jsonValue.GetString("VoiceConnectorGroupId");

    m_voiceConnectorGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceConnectorItems"))
  {
    Array<JsonView> voiceConnectorItemsJsonList = jsonValue.GetArray("VoiceConnectorItems");
    for(unsigned voiceConnectorItemsIndex = 0; voiceConnectorItemsIndex < voiceConnectorItemsJsonList.GetLength(); ++voiceConnectorItemsIndex)
    {
      m_voiceConnectorItems.push_back(voiceConnectorItemsJsonList[voiceConnectorItemsIndex].AsObject());
    }
    m_voiceConnectorItemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceConnectorGroup::Jsonize() const
{
  JsonValue payload;

  if(m_voiceConnectorGroupIdHasBeenSet)
  {
   payload.WithString("VoiceConnectorGroupId", m_voiceConnectorGroupId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_voiceConnectorItemsHasBeenSet)
  {
   Array<JsonValue> voiceConnectorItemsJsonList(m_voiceConnectorItems.size());
   for(unsigned voiceConnectorItemsIndex = 0; voiceConnectorItemsIndex < voiceConnectorItemsJsonList.GetLength(); ++voiceConnectorItemsIndex)
   {
     voiceConnectorItemsJsonList[voiceConnectorItemsIndex].AsObject(m_voiceConnectorItems[voiceConnectorItemsIndex].Jsonize());
   }
   payload.WithArray("VoiceConnectorItems", std::move(voiceConnectorItemsJsonList));

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws

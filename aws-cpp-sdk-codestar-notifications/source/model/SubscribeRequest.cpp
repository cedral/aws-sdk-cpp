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

#include <aws/codestar-notifications/model/SubscribeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarNotifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SubscribeRequest::SubscribeRequest() : 
    m_arnHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String SubscribeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}





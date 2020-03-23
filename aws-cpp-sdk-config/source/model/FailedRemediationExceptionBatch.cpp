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

#include <aws/config/model/FailedRemediationExceptionBatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

FailedRemediationExceptionBatch::FailedRemediationExceptionBatch() : 
    m_failureMessageHasBeenSet(false),
    m_failedItemsHasBeenSet(false)
{
}

FailedRemediationExceptionBatch::FailedRemediationExceptionBatch(JsonView jsonValue) : 
    m_failureMessageHasBeenSet(false),
    m_failedItemsHasBeenSet(false)
{
  *this = jsonValue;
}

FailedRemediationExceptionBatch& FailedRemediationExceptionBatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");

    m_failureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedItems"))
  {
    Array<JsonView> failedItemsJsonList = jsonValue.GetArray("FailedItems");
    for(unsigned failedItemsIndex = 0; failedItemsIndex < failedItemsJsonList.GetLength(); ++failedItemsIndex)
    {
      m_failedItems.push_back(failedItemsJsonList[failedItemsIndex].AsObject());
    }
    m_failedItemsHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedRemediationExceptionBatch::Jsonize() const
{
  JsonValue payload;

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  if(m_failedItemsHasBeenSet)
  {
   Array<JsonValue> failedItemsJsonList(m_failedItems.size());
   for(unsigned failedItemsIndex = 0; failedItemsIndex < failedItemsJsonList.GetLength(); ++failedItemsIndex)
   {
     failedItemsJsonList[failedItemsIndex].AsObject(m_failedItems[failedItemsIndex].Jsonize());
   }
   payload.WithArray("FailedItems", std::move(failedItemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws

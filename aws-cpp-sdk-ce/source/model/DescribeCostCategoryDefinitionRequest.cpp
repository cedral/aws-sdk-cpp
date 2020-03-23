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

#include <aws/ce/model/DescribeCostCategoryDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCostCategoryDefinitionRequest::DescribeCostCategoryDefinitionRequest() : 
    m_costCategoryArnHasBeenSet(false),
    m_effectiveOnHasBeenSet(false)
{
}

Aws::String DescribeCostCategoryDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_costCategoryArnHasBeenSet)
  {
   payload.WithString("CostCategoryArn", m_costCategoryArn);

  }

  if(m_effectiveOnHasBeenSet)
  {
   payload.WithString("EffectiveOn", m_effectiveOn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCostCategoryDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.DescribeCostCategoryDefinition"));
  return headers;

}





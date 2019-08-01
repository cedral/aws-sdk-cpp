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

#include <aws/directconnect/model/UpdateDirectConnectGatewayAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDirectConnectGatewayAssociationRequest::UpdateDirectConnectGatewayAssociationRequest() : 
    m_associationIdHasBeenSet(false),
    m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet(false),
    m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet(false)
{
}

Aws::String UpdateDirectConnectGatewayAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("associationId", m_associationId);

  }

  if(m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet)
  {
   Array<JsonValue> addAllowedPrefixesToDirectConnectGatewayJsonList(m_addAllowedPrefixesToDirectConnectGateway.size());
   for(unsigned addAllowedPrefixesToDirectConnectGatewayIndex = 0; addAllowedPrefixesToDirectConnectGatewayIndex < addAllowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++addAllowedPrefixesToDirectConnectGatewayIndex)
   {
     addAllowedPrefixesToDirectConnectGatewayJsonList[addAllowedPrefixesToDirectConnectGatewayIndex].AsObject(m_addAllowedPrefixesToDirectConnectGateway[addAllowedPrefixesToDirectConnectGatewayIndex].Jsonize());
   }
   payload.WithArray("addAllowedPrefixesToDirectConnectGateway", std::move(addAllowedPrefixesToDirectConnectGatewayJsonList));

  }

  if(m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet)
  {
   Array<JsonValue> removeAllowedPrefixesToDirectConnectGatewayJsonList(m_removeAllowedPrefixesToDirectConnectGateway.size());
   for(unsigned removeAllowedPrefixesToDirectConnectGatewayIndex = 0; removeAllowedPrefixesToDirectConnectGatewayIndex < removeAllowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++removeAllowedPrefixesToDirectConnectGatewayIndex)
   {
     removeAllowedPrefixesToDirectConnectGatewayJsonList[removeAllowedPrefixesToDirectConnectGatewayIndex].AsObject(m_removeAllowedPrefixesToDirectConnectGateway[removeAllowedPrefixesToDirectConnectGatewayIndex].Jsonize());
   }
   payload.WithArray("removeAllowedPrefixesToDirectConnectGateway", std::move(removeAllowedPrefixesToDirectConnectGatewayJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDirectConnectGatewayAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.UpdateDirectConnectGatewayAssociation"));
  return headers;

}





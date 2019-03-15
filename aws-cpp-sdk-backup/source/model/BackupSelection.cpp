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

#include <aws/backup/model/BackupSelection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

BackupSelection::BackupSelection() : 
    m_selectionNameHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_listOfTagsHasBeenSet(false)
{
}

BackupSelection::BackupSelection(JsonView jsonValue) : 
    m_selectionNameHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_listOfTagsHasBeenSet(false)
{
  *this = jsonValue;
}

BackupSelection& BackupSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectionName"))
  {
    m_selectionName = jsonValue.GetString("SelectionName");

    m_selectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListOfTags"))
  {
    Array<JsonView> listOfTagsJsonList = jsonValue.GetArray("ListOfTags");
    for(unsigned listOfTagsIndex = 0; listOfTagsIndex < listOfTagsJsonList.GetLength(); ++listOfTagsIndex)
    {
      m_listOfTags.push_back(listOfTagsJsonList[listOfTagsIndex].AsObject());
    }
    m_listOfTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupSelection::Jsonize() const
{
  JsonValue payload;

  if(m_selectionNameHasBeenSet)
  {
   payload.WithString("SelectionName", m_selectionName);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_resourcesHasBeenSet)
  {
   Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  if(m_listOfTagsHasBeenSet)
  {
   Array<JsonValue> listOfTagsJsonList(m_listOfTags.size());
   for(unsigned listOfTagsIndex = 0; listOfTagsIndex < listOfTagsJsonList.GetLength(); ++listOfTagsIndex)
   {
     listOfTagsJsonList[listOfTagsIndex].AsObject(m_listOfTags[listOfTagsIndex].Jsonize());
   }
   payload.WithArray("ListOfTags", std::move(listOfTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws

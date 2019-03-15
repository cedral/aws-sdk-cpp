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

#include <aws/backup/model/RecoveryPointCreator.h>
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

RecoveryPointCreator::RecoveryPointCreator() : 
    m_backupPlanIdHasBeenSet(false),
    m_backupPlanArnHasBeenSet(false),
    m_backupPlanVersionHasBeenSet(false),
    m_backupRuleIdHasBeenSet(false)
{
}

RecoveryPointCreator::RecoveryPointCreator(JsonView jsonValue) : 
    m_backupPlanIdHasBeenSet(false),
    m_backupPlanArnHasBeenSet(false),
    m_backupPlanVersionHasBeenSet(false),
    m_backupRuleIdHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryPointCreator& RecoveryPointCreator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupPlanId"))
  {
    m_backupPlanId = jsonValue.GetString("BackupPlanId");

    m_backupPlanIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupPlanArn"))
  {
    m_backupPlanArn = jsonValue.GetString("BackupPlanArn");

    m_backupPlanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupPlanVersion"))
  {
    m_backupPlanVersion = jsonValue.GetString("BackupPlanVersion");

    m_backupPlanVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupRuleId"))
  {
    m_backupRuleId = jsonValue.GetString("BackupRuleId");

    m_backupRuleIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryPointCreator::Jsonize() const
{
  JsonValue payload;

  if(m_backupPlanIdHasBeenSet)
  {
   payload.WithString("BackupPlanId", m_backupPlanId);

  }

  if(m_backupPlanArnHasBeenSet)
  {
   payload.WithString("BackupPlanArn", m_backupPlanArn);

  }

  if(m_backupPlanVersionHasBeenSet)
  {
   payload.WithString("BackupPlanVersion", m_backupPlanVersion);

  }

  if(m_backupRuleIdHasBeenSet)
  {
   payload.WithString("BackupRuleId", m_backupRuleId);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws

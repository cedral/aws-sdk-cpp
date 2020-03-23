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

#include <aws/kendra/model/DataSourceSyncJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace DataSourceSyncJobStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int SYNCING_HASH = HashingUtils::HashString("SYNCING");
        static const int INCOMPLETE_HASH = HashingUtils::HashString("INCOMPLETE");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");


        DataSourceSyncJobStatus GetDataSourceSyncJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return DataSourceSyncJobStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return DataSourceSyncJobStatus::SUCCEEDED;
          }
          else if (hashCode == SYNCING_HASH)
          {
            return DataSourceSyncJobStatus::SYNCING;
          }
          else if (hashCode == INCOMPLETE_HASH)
          {
            return DataSourceSyncJobStatus::INCOMPLETE;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return DataSourceSyncJobStatus::STOPPING;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return DataSourceSyncJobStatus::ABORTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceSyncJobStatus>(hashCode);
          }

          return DataSourceSyncJobStatus::NOT_SET;
        }

        Aws::String GetNameForDataSourceSyncJobStatus(DataSourceSyncJobStatus enumValue)
        {
          switch(enumValue)
          {
          case DataSourceSyncJobStatus::FAILED:
            return "FAILED";
          case DataSourceSyncJobStatus::SUCCEEDED:
            return "SUCCEEDED";
          case DataSourceSyncJobStatus::SYNCING:
            return "SYNCING";
          case DataSourceSyncJobStatus::INCOMPLETE:
            return "INCOMPLETE";
          case DataSourceSyncJobStatus::STOPPING:
            return "STOPPING";
          case DataSourceSyncJobStatus::ABORTED:
            return "ABORTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceSyncJobStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws

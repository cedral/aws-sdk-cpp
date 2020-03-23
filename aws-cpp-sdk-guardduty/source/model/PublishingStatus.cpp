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

#include <aws/guardduty/model/PublishingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace PublishingStatusMapper
      {

        static const int PENDING_VERIFICATION_HASH = HashingUtils::HashString("PENDING_VERIFICATION");
        static const int PUBLISHING_HASH = HashingUtils::HashString("PUBLISHING");
        static const int UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY_HASH = HashingUtils::HashString("UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        PublishingStatus GetPublishingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VERIFICATION_HASH)
          {
            return PublishingStatus::PENDING_VERIFICATION;
          }
          else if (hashCode == PUBLISHING_HASH)
          {
            return PublishingStatus::PUBLISHING;
          }
          else if (hashCode == UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY_HASH)
          {
            return PublishingStatus::UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return PublishingStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PublishingStatus>(hashCode);
          }

          return PublishingStatus::NOT_SET;
        }

        Aws::String GetNameForPublishingStatus(PublishingStatus enumValue)
        {
          switch(enumValue)
          {
          case PublishingStatus::PENDING_VERIFICATION:
            return "PENDING_VERIFICATION";
          case PublishingStatus::PUBLISHING:
            return "PUBLISHING";
          case PublishingStatus::UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY:
            return "UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY";
          case PublishingStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PublishingStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws

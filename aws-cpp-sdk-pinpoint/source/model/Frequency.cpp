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

#include <aws/pinpoint/model/Frequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace FrequencyMapper
      {

        static const int ONCE_HASH = HashingUtils::HashString("ONCE");
        static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
        static const int EVENT_HASH = HashingUtils::HashString("EVENT");


        Frequency GetFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONCE_HASH)
          {
            return Frequency::ONCE;
          }
          else if (hashCode == HOURLY_HASH)
          {
            return Frequency::HOURLY;
          }
          else if (hashCode == DAILY_HASH)
          {
            return Frequency::DAILY;
          }
          else if (hashCode == WEEKLY_HASH)
          {
            return Frequency::WEEKLY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return Frequency::MONTHLY;
          }
          else if (hashCode == EVENT_HASH)
          {
            return Frequency::EVENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Frequency>(hashCode);
          }

          return Frequency::NOT_SET;
        }

        Aws::String GetNameForFrequency(Frequency enumValue)
        {
          switch(enumValue)
          {
          case Frequency::ONCE:
            return "ONCE";
          case Frequency::HOURLY:
            return "HOURLY";
          case Frequency::DAILY:
            return "DAILY";
          case Frequency::WEEKLY:
            return "WEEKLY";
          case Frequency::MONTHLY:
            return "MONTHLY";
          case Frequency::EVENT:
            return "EVENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FrequencyMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws

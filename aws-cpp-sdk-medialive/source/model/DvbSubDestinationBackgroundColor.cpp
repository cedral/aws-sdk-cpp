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

#include <aws/medialive/model/DvbSubDestinationBackgroundColor.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace DvbSubDestinationBackgroundColorMapper
      {

        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");


        DvbSubDestinationBackgroundColor GetDvbSubDestinationBackgroundColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return DvbSubDestinationBackgroundColor::BLACK;
          }
          else if (hashCode == NONE_HASH)
          {
            return DvbSubDestinationBackgroundColor::NONE;
          }
          else if (hashCode == WHITE_HASH)
          {
            return DvbSubDestinationBackgroundColor::WHITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubDestinationBackgroundColor>(hashCode);
          }

          return DvbSubDestinationBackgroundColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubDestinationBackgroundColor(DvbSubDestinationBackgroundColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubDestinationBackgroundColor::BLACK:
            return "BLACK";
          case DvbSubDestinationBackgroundColor::NONE:
            return "NONE";
          case DvbSubDestinationBackgroundColor::WHITE:
            return "WHITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSubDestinationBackgroundColorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

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

#include <aws/waf-regional/model/ParameterExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFRegional
  {
    namespace Model
    {
      namespace ParameterExceptionReasonMapper
      {

        static const int INVALID_OPTION_HASH = HashingUtils::HashString("INVALID_OPTION");
        static const int ILLEGAL_COMBINATION_HASH = HashingUtils::HashString("ILLEGAL_COMBINATION");
        static const int ILLEGAL_ARGUMENT_HASH = HashingUtils::HashString("ILLEGAL_ARGUMENT");


        ParameterExceptionReason GetParameterExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_OPTION_HASH)
          {
            return ParameterExceptionReason::INVALID_OPTION;
          }
          else if (hashCode == ILLEGAL_COMBINATION_HASH)
          {
            return ParameterExceptionReason::ILLEGAL_COMBINATION;
          }
          else if (hashCode == ILLEGAL_ARGUMENT_HASH)
          {
            return ParameterExceptionReason::ILLEGAL_ARGUMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterExceptionReason>(hashCode);
          }

          return ParameterExceptionReason::NOT_SET;
        }

        Aws::String GetNameForParameterExceptionReason(ParameterExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ParameterExceptionReason::INVALID_OPTION:
            return "INVALID_OPTION";
          case ParameterExceptionReason::ILLEGAL_COMBINATION:
            return "ILLEGAL_COMBINATION";
          case ParameterExceptionReason::ILLEGAL_ARGUMENT:
            return "ILLEGAL_ARGUMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterExceptionReasonMapper
    } // namespace Model
  } // namespace WAFRegional
} // namespace Aws

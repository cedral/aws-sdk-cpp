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

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the "From" address for an email message that's sent to participants
   * in a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyEmailMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API JourneyEmailMessage
  {
  public:
    JourneyEmailMessage();
    JourneyEmailMessage(Aws::Utils::Json::JsonView jsonValue);
    JourneyEmailMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline JourneyEmailMessage& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline JourneyEmailMessage& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline JourneyEmailMessage& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}

  private:

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

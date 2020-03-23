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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/RecoveryOptionType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The data type for <code>AccountRecoverySetting</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AccountRecoverySettingType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AccountRecoverySettingType
  {
  public:
    AccountRecoverySettingType();
    AccountRecoverySettingType(Aws::Utils::Json::JsonView jsonValue);
    AccountRecoverySettingType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline const Aws::Vector<RecoveryOptionType>& GetRecoveryMechanisms() const{ return m_recoveryMechanisms; }

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline bool RecoveryMechanismsHasBeenSet() const { return m_recoveryMechanismsHasBeenSet; }

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline void SetRecoveryMechanisms(const Aws::Vector<RecoveryOptionType>& value) { m_recoveryMechanismsHasBeenSet = true; m_recoveryMechanisms = value; }

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline void SetRecoveryMechanisms(Aws::Vector<RecoveryOptionType>&& value) { m_recoveryMechanismsHasBeenSet = true; m_recoveryMechanisms = std::move(value); }

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline AccountRecoverySettingType& WithRecoveryMechanisms(const Aws::Vector<RecoveryOptionType>& value) { SetRecoveryMechanisms(value); return *this;}

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline AccountRecoverySettingType& WithRecoveryMechanisms(Aws::Vector<RecoveryOptionType>&& value) { SetRecoveryMechanisms(std::move(value)); return *this;}

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline AccountRecoverySettingType& AddRecoveryMechanisms(const RecoveryOptionType& value) { m_recoveryMechanismsHasBeenSet = true; m_recoveryMechanisms.push_back(value); return *this; }

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline AccountRecoverySettingType& AddRecoveryMechanisms(RecoveryOptionType&& value) { m_recoveryMechanismsHasBeenSet = true; m_recoveryMechanisms.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RecoveryOptionType> m_recoveryMechanisms;
    bool m_recoveryMechanismsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

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
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/BatchPermissionsFailureEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LakeFormation
{
namespace Model
{
  class AWS_LAKEFORMATION_API BatchGrantPermissionsResult
  {
  public:
    BatchGrantPermissionsResult();
    BatchGrantPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGrantPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline const Aws::Vector<BatchPermissionsFailureEntry>& GetFailures() const{ return m_failures; }

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline void SetFailures(const Aws::Vector<BatchPermissionsFailureEntry>& value) { m_failures = value; }

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline void SetFailures(Aws::Vector<BatchPermissionsFailureEntry>&& value) { m_failures = std::move(value); }

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline BatchGrantPermissionsResult& WithFailures(const Aws::Vector<BatchPermissionsFailureEntry>& value) { SetFailures(value); return *this;}

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline BatchGrantPermissionsResult& WithFailures(Aws::Vector<BatchPermissionsFailureEntry>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline BatchGrantPermissionsResult& AddFailures(const BatchPermissionsFailureEntry& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline BatchGrantPermissionsResult& AddFailures(BatchPermissionsFailureEntry&& value) { m_failures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchPermissionsFailureEntry> m_failures;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

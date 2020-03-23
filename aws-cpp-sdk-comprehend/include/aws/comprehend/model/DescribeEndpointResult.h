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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EndpointProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class AWS_COMPREHEND_API DescribeEndpointResult
  {
  public:
    DescribeEndpointResult();
    DescribeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline const EndpointProperties& GetEndpointProperties() const{ return m_endpointProperties; }

    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline void SetEndpointProperties(const EndpointProperties& value) { m_endpointProperties = value; }

    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline void SetEndpointProperties(EndpointProperties&& value) { m_endpointProperties = std::move(value); }

    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointProperties(const EndpointProperties& value) { SetEndpointProperties(value); return *this;}

    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointProperties(EndpointProperties&& value) { SetEndpointProperties(std::move(value)); return *this;}

  private:

    EndpointProperties m_endpointProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MitigationActionIdentifier.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API ListMitigationActionsResult
  {
  public:
    ListMitigationActionsResult();
    ListMitigationActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListMitigationActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A set of actions that matched the specified filter criteria.</p>
     */
    inline const Aws::Vector<MitigationActionIdentifier>& GetActionIdentifiers() const{ return m_actionIdentifiers; }

    /**
     * <p>A set of actions that matched the specified filter criteria.</p>
     */
    inline void SetActionIdentifiers(const Aws::Vector<MitigationActionIdentifier>& value) { m_actionIdentifiers = value; }

    /**
     * <p>A set of actions that matched the specified filter criteria.</p>
     */
    inline void SetActionIdentifiers(Aws::Vector<MitigationActionIdentifier>&& value) { m_actionIdentifiers = std::move(value); }

    /**
     * <p>A set of actions that matched the specified filter criteria.</p>
     */
    inline ListMitigationActionsResult& WithActionIdentifiers(const Aws::Vector<MitigationActionIdentifier>& value) { SetActionIdentifiers(value); return *this;}

    /**
     * <p>A set of actions that matched the specified filter criteria.</p>
     */
    inline ListMitigationActionsResult& WithActionIdentifiers(Aws::Vector<MitigationActionIdentifier>&& value) { SetActionIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A set of actions that matched the specified filter criteria.</p>
     */
    inline ListMitigationActionsResult& AddActionIdentifiers(const MitigationActionIdentifier& value) { m_actionIdentifiers.push_back(value); return *this; }

    /**
     * <p>A set of actions that matched the specified filter criteria.</p>
     */
    inline ListMitigationActionsResult& AddActionIdentifiers(MitigationActionIdentifier&& value) { m_actionIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListMitigationActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListMitigationActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListMitigationActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MitigationActionIdentifier> m_actionIdentifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

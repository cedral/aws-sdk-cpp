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
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowSummary.h>
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
namespace Connect
{
namespace Model
{
  class AWS_CONNECT_API ListContactFlowsResult
  {
  public:
    ListContactFlowsResult();
    ListContactFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListContactFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the contact flows.</p>
     */
    inline const Aws::Vector<ContactFlowSummary>& GetContactFlowSummaryList() const{ return m_contactFlowSummaryList; }

    /**
     * <p>Information about the contact flows.</p>
     */
    inline void SetContactFlowSummaryList(const Aws::Vector<ContactFlowSummary>& value) { m_contactFlowSummaryList = value; }

    /**
     * <p>Information about the contact flows.</p>
     */
    inline void SetContactFlowSummaryList(Aws::Vector<ContactFlowSummary>&& value) { m_contactFlowSummaryList = std::move(value); }

    /**
     * <p>Information about the contact flows.</p>
     */
    inline ListContactFlowsResult& WithContactFlowSummaryList(const Aws::Vector<ContactFlowSummary>& value) { SetContactFlowSummaryList(value); return *this;}

    /**
     * <p>Information about the contact flows.</p>
     */
    inline ListContactFlowsResult& WithContactFlowSummaryList(Aws::Vector<ContactFlowSummary>&& value) { SetContactFlowSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about the contact flows.</p>
     */
    inline ListContactFlowsResult& AddContactFlowSummaryList(const ContactFlowSummary& value) { m_contactFlowSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about the contact flows.</p>
     */
    inline ListContactFlowsResult& AddContactFlowSummaryList(ContactFlowSummary&& value) { m_contactFlowSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListContactFlowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListContactFlowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListContactFlowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ContactFlowSummary> m_contactFlowSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

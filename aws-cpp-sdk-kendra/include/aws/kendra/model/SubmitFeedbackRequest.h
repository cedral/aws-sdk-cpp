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
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ClickFeedback.h>
#include <aws/kendra/model/RelevanceFeedback.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class AWS_KENDRA_API SubmitFeedbackRequest : public KendraRequest
  {
  public:
    SubmitFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitFeedback"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index that was queried.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index that was queried.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index that was queried.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index that was queried.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index that was queried.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index that was queried.</p>
     */
    inline SubmitFeedbackRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index that was queried.</p>
     */
    inline SubmitFeedbackRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index that was queried.</p>
     */
    inline SubmitFeedbackRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The identifier of the specific query for which you are submitting feedback.
     * The query ID is returned in the response to the operation.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The identifier of the specific query for which you are submitting feedback.
     * The query ID is returned in the response to the operation.</p>
     */
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }

    /**
     * <p>The identifier of the specific query for which you are submitting feedback.
     * The query ID is returned in the response to the operation.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }

    /**
     * <p>The identifier of the specific query for which you are submitting feedback.
     * The query ID is returned in the response to the operation.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }

    /**
     * <p>The identifier of the specific query for which you are submitting feedback.
     * The query ID is returned in the response to the operation.</p>
     */
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }

    /**
     * <p>The identifier of the specific query for which you are submitting feedback.
     * The query ID is returned in the response to the operation.</p>
     */
    inline SubmitFeedbackRequest& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The identifier of the specific query for which you are submitting feedback.
     * The query ID is returned in the response to the operation.</p>
     */
    inline SubmitFeedbackRequest& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the specific query for which you are submitting feedback.
     * The query ID is returned in the response to the operation.</p>
     */
    inline SubmitFeedbackRequest& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>Tells Amazon Kendra that a particular search result link was chosen by the
     * user. </p>
     */
    inline const Aws::Vector<ClickFeedback>& GetClickFeedbackItems() const{ return m_clickFeedbackItems; }

    /**
     * <p>Tells Amazon Kendra that a particular search result link was chosen by the
     * user. </p>
     */
    inline bool ClickFeedbackItemsHasBeenSet() const { return m_clickFeedbackItemsHasBeenSet; }

    /**
     * <p>Tells Amazon Kendra that a particular search result link was chosen by the
     * user. </p>
     */
    inline void SetClickFeedbackItems(const Aws::Vector<ClickFeedback>& value) { m_clickFeedbackItemsHasBeenSet = true; m_clickFeedbackItems = value; }

    /**
     * <p>Tells Amazon Kendra that a particular search result link was chosen by the
     * user. </p>
     */
    inline void SetClickFeedbackItems(Aws::Vector<ClickFeedback>&& value) { m_clickFeedbackItemsHasBeenSet = true; m_clickFeedbackItems = std::move(value); }

    /**
     * <p>Tells Amazon Kendra that a particular search result link was chosen by the
     * user. </p>
     */
    inline SubmitFeedbackRequest& WithClickFeedbackItems(const Aws::Vector<ClickFeedback>& value) { SetClickFeedbackItems(value); return *this;}

    /**
     * <p>Tells Amazon Kendra that a particular search result link was chosen by the
     * user. </p>
     */
    inline SubmitFeedbackRequest& WithClickFeedbackItems(Aws::Vector<ClickFeedback>&& value) { SetClickFeedbackItems(std::move(value)); return *this;}

    /**
     * <p>Tells Amazon Kendra that a particular search result link was chosen by the
     * user. </p>
     */
    inline SubmitFeedbackRequest& AddClickFeedbackItems(const ClickFeedback& value) { m_clickFeedbackItemsHasBeenSet = true; m_clickFeedbackItems.push_back(value); return *this; }

    /**
     * <p>Tells Amazon Kendra that a particular search result link was chosen by the
     * user. </p>
     */
    inline SubmitFeedbackRequest& AddClickFeedbackItems(ClickFeedback&& value) { m_clickFeedbackItemsHasBeenSet = true; m_clickFeedbackItems.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides Amazon Kendra with relevant or not relevant feedback for whether a
     * particular item was relevant to the search.</p>
     */
    inline const Aws::Vector<RelevanceFeedback>& GetRelevanceFeedbackItems() const{ return m_relevanceFeedbackItems; }

    /**
     * <p>Provides Amazon Kendra with relevant or not relevant feedback for whether a
     * particular item was relevant to the search.</p>
     */
    inline bool RelevanceFeedbackItemsHasBeenSet() const { return m_relevanceFeedbackItemsHasBeenSet; }

    /**
     * <p>Provides Amazon Kendra with relevant or not relevant feedback for whether a
     * particular item was relevant to the search.</p>
     */
    inline void SetRelevanceFeedbackItems(const Aws::Vector<RelevanceFeedback>& value) { m_relevanceFeedbackItemsHasBeenSet = true; m_relevanceFeedbackItems = value; }

    /**
     * <p>Provides Amazon Kendra with relevant or not relevant feedback for whether a
     * particular item was relevant to the search.</p>
     */
    inline void SetRelevanceFeedbackItems(Aws::Vector<RelevanceFeedback>&& value) { m_relevanceFeedbackItemsHasBeenSet = true; m_relevanceFeedbackItems = std::move(value); }

    /**
     * <p>Provides Amazon Kendra with relevant or not relevant feedback for whether a
     * particular item was relevant to the search.</p>
     */
    inline SubmitFeedbackRequest& WithRelevanceFeedbackItems(const Aws::Vector<RelevanceFeedback>& value) { SetRelevanceFeedbackItems(value); return *this;}

    /**
     * <p>Provides Amazon Kendra with relevant or not relevant feedback for whether a
     * particular item was relevant to the search.</p>
     */
    inline SubmitFeedbackRequest& WithRelevanceFeedbackItems(Aws::Vector<RelevanceFeedback>&& value) { SetRelevanceFeedbackItems(std::move(value)); return *this;}

    /**
     * <p>Provides Amazon Kendra with relevant or not relevant feedback for whether a
     * particular item was relevant to the search.</p>
     */
    inline SubmitFeedbackRequest& AddRelevanceFeedbackItems(const RelevanceFeedback& value) { m_relevanceFeedbackItemsHasBeenSet = true; m_relevanceFeedbackItems.push_back(value); return *this; }

    /**
     * <p>Provides Amazon Kendra with relevant or not relevant feedback for whether a
     * particular item was relevant to the search.</p>
     */
    inline SubmitFeedbackRequest& AddRelevanceFeedbackItems(RelevanceFeedback&& value) { m_relevanceFeedbackItemsHasBeenSet = true; m_relevanceFeedbackItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet;

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet;

    Aws::Vector<ClickFeedback> m_clickFeedbackItems;
    bool m_clickFeedbackItemsHasBeenSet;

    Aws::Vector<RelevanceFeedback> m_relevanceFeedbackItems;
    bool m_relevanceFeedbackItemsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws

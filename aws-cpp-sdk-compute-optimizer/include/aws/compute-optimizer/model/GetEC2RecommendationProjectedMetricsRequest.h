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
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/MetricStatistic.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class AWS_COMPUTEOPTIMIZER_API GetEC2RecommendationProjectedMetricsRequest : public ComputeOptimizerRequest
  {
  public:
    GetEC2RecommendationProjectedMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEC2RecommendationProjectedMetrics"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendation projected metrics.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendation projected metrics.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendation projected metrics.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendation projected metrics.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendation projected metrics.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendation projected metrics.</p>
     */
    inline GetEC2RecommendationProjectedMetricsRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendation projected metrics.</p>
     */
    inline GetEC2RecommendationProjectedMetricsRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendation projected metrics.</p>
     */
    inline GetEC2RecommendationProjectedMetricsRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>The statistic of the projected metrics.</p>
     */
    inline const MetricStatistic& GetStat() const{ return m_stat; }

    /**
     * <p>The statistic of the projected metrics.</p>
     */
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }

    /**
     * <p>The statistic of the projected metrics.</p>
     */
    inline void SetStat(const MetricStatistic& value) { m_statHasBeenSet = true; m_stat = value; }

    /**
     * <p>The statistic of the projected metrics.</p>
     */
    inline void SetStat(MetricStatistic&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }

    /**
     * <p>The statistic of the projected metrics.</p>
     */
    inline GetEC2RecommendationProjectedMetricsRequest& WithStat(const MetricStatistic& value) { SetStat(value); return *this;}

    /**
     * <p>The statistic of the projected metrics.</p>
     */
    inline GetEC2RecommendationProjectedMetricsRequest& WithStat(MetricStatistic&& value) { SetStat(std::move(value)); return *this;}


    /**
     * <p>The granularity, in seconds, of the projected metrics data points.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The granularity, in seconds, of the projected metrics data points.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The granularity, in seconds, of the projected metrics data points.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The granularity, in seconds, of the projected metrics data points.</p>
     */
    inline GetEC2RecommendationProjectedMetricsRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The time stamp of the first projected metrics data point to return.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time stamp of the first projected metrics data point to return.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time stamp of the first projected metrics data point to return.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time stamp of the first projected metrics data point to return.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time stamp of the first projected metrics data point to return.</p>
     */
    inline GetEC2RecommendationProjectedMetricsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time stamp of the first projected metrics data point to return.</p>
     */
    inline GetEC2RecommendationProjectedMetricsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time stamp of the last projected metrics data point to return.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time stamp of the last projected metrics data point to return.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time stamp of the last projected metrics data point to return.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time stamp of the last projected metrics data point to return.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time stamp of the last projected metrics data point to return.</p>
     */
    inline GetEC2RecommendationProjectedMetricsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time stamp of the last projected metrics data point to return.</p>
     */
    inline GetEC2RecommendationProjectedMetricsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet;

    MetricStatistic m_stat;
    bool m_statHasBeenSet;

    int m_period;
    bool m_periodHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws

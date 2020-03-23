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
#include <aws/compute-optimizer/model/MetricName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes a projected utilization metric of a recommendation option, such as
   * an Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ProjectedMetric">AWS
   * API Reference</a></p>
   */
  class AWS_COMPUTEOPTIMIZER_API ProjectedMetric
  {
  public:
    ProjectedMetric();
    ProjectedMetric(Aws::Utils::Json::JsonView jsonValue);
    ProjectedMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the projected utilization metric.</p> <note> <p>Memory metrics
     * are only returned for resources that have the unified CloudWatch agent installed
     * on them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline const MetricName& GetName() const{ return m_name; }

    /**
     * <p>The name of the projected utilization metric.</p> <note> <p>Memory metrics
     * are only returned for resources that have the unified CloudWatch agent installed
     * on them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the projected utilization metric.</p> <note> <p>Memory metrics
     * are only returned for resources that have the unified CloudWatch agent installed
     * on them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline void SetName(const MetricName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the projected utilization metric.</p> <note> <p>Memory metrics
     * are only returned for resources that have the unified CloudWatch agent installed
     * on them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline void SetName(MetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the projected utilization metric.</p> <note> <p>Memory metrics
     * are only returned for resources that have the unified CloudWatch agent installed
     * on them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline ProjectedMetric& WithName(const MetricName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the projected utilization metric.</p> <note> <p>Memory metrics
     * are only returned for resources that have the unified CloudWatch agent installed
     * on them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Install-CloudWatch-Agent.html">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> </note>
     */
    inline ProjectedMetric& WithName(MetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The time stamps of the projected utilization metric.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }

    /**
     * <p>The time stamps of the projected utilization metric.</p>
     */
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }

    /**
     * <p>The time stamps of the projected utilization metric.</p>
     */
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampsHasBeenSet = true; m_timestamps = value; }

    /**
     * <p>The time stamps of the projected utilization metric.</p>
     */
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::move(value); }

    /**
     * <p>The time stamps of the projected utilization metric.</p>
     */
    inline ProjectedMetric& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}

    /**
     * <p>The time stamps of the projected utilization metric.</p>
     */
    inline ProjectedMetric& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}

    /**
     * <p>The time stamps of the projected utilization metric.</p>
     */
    inline ProjectedMetric& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(value); return *this; }

    /**
     * <p>The time stamps of the projected utilization metric.</p>
     */
    inline ProjectedMetric& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(std::move(value)); return *this; }


    /**
     * <p>The values of the projected utilization metrics.</p>
     */
    inline const Aws::Vector<double>& GetValues() const{ return m_values; }

    /**
     * <p>The values of the projected utilization metrics.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of the projected utilization metrics.</p>
     */
    inline void SetValues(const Aws::Vector<double>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of the projected utilization metrics.</p>
     */
    inline void SetValues(Aws::Vector<double>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of the projected utilization metrics.</p>
     */
    inline ProjectedMetric& WithValues(const Aws::Vector<double>& value) { SetValues(value); return *this;}

    /**
     * <p>The values of the projected utilization metrics.</p>
     */
    inline ProjectedMetric& WithValues(Aws::Vector<double>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values of the projected utilization metrics.</p>
     */
    inline ProjectedMetric& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    MetricName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws

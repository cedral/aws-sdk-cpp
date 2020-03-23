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
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/ComprehendMedicalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

  /**
   */
  class AWS_COMPREHENDMEDICAL_API DescribeEntitiesDetectionV2JobRequest : public ComprehendMedicalRequest
  {
  public:
    DescribeEntitiesDetectionV2JobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEntitiesDetectionV2Job"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier that Amazon Comprehend Medical generated for the job. The
     * <code>StartEntitiesDetectionV2Job</code> operation returns this identifier in
     * its response.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier that Amazon Comprehend Medical generated for the job. The
     * <code>StartEntitiesDetectionV2Job</code> operation returns this identifier in
     * its response.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The identifier that Amazon Comprehend Medical generated for the job. The
     * <code>StartEntitiesDetectionV2Job</code> operation returns this identifier in
     * its response.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier that Amazon Comprehend Medical generated for the job. The
     * <code>StartEntitiesDetectionV2Job</code> operation returns this identifier in
     * its response.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier that Amazon Comprehend Medical generated for the job. The
     * <code>StartEntitiesDetectionV2Job</code> operation returns this identifier in
     * its response.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier that Amazon Comprehend Medical generated for the job. The
     * <code>StartEntitiesDetectionV2Job</code> operation returns this identifier in
     * its response.</p>
     */
    inline DescribeEntitiesDetectionV2JobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier that Amazon Comprehend Medical generated for the job. The
     * <code>StartEntitiesDetectionV2Job</code> operation returns this identifier in
     * its response.</p>
     */
    inline DescribeEntitiesDetectionV2JobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier that Amazon Comprehend Medical generated for the job. The
     * <code>StartEntitiesDetectionV2Job</code> operation returns this identifier in
     * its response.</p>
     */
    inline DescribeEntitiesDetectionV2JobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws

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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A complex type that controls whether access logs are written for the
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionLogging">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsCloudFrontDistributionLogging
  {
  public:
    AwsCloudFrontDistributionLogging();
    AwsCloudFrontDistributionLogging(Aws::Utils::Json::JsonView jsonValue);
    AwsCloudFrontDistributionLogging& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket to store the access logs in.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket to store the access logs in.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket to store the access logs in.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket to store the access logs in.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket to store the access logs in.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket to store the access logs in.</p>
     */
    inline AwsCloudFrontDistributionLogging& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket to store the access logs in.</p>
     */
    inline AwsCloudFrontDistributionLogging& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket to store the access logs in.</p>
     */
    inline AwsCloudFrontDistributionLogging& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>With this field, you can enable or disable the selected distribution.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>With this field, you can enable or disable the selected distribution.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>With this field, you can enable or disable the selected distribution.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>With this field, you can enable or disable the selected distribution.</p>
     */
    inline AwsCloudFrontDistributionLogging& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specifies whether you want CloudFront to include cookies in access logs.</p>
     */
    inline bool GetIncludeCookies() const{ return m_includeCookies; }

    /**
     * <p>Specifies whether you want CloudFront to include cookies in access logs.</p>
     */
    inline bool IncludeCookiesHasBeenSet() const { return m_includeCookiesHasBeenSet; }

    /**
     * <p>Specifies whether you want CloudFront to include cookies in access logs.</p>
     */
    inline void SetIncludeCookies(bool value) { m_includeCookiesHasBeenSet = true; m_includeCookies = value; }

    /**
     * <p>Specifies whether you want CloudFront to include cookies in access logs.</p>
     */
    inline AwsCloudFrontDistributionLogging& WithIncludeCookies(bool value) { SetIncludeCookies(value); return *this;}


    /**
     * <p>An optional string that you want CloudFront to use as a prefix to the access
     * log filenames for this distribution.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>An optional string that you want CloudFront to use as a prefix to the access
     * log filenames for this distribution.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>An optional string that you want CloudFront to use as a prefix to the access
     * log filenames for this distribution.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>An optional string that you want CloudFront to use as a prefix to the access
     * log filenames for this distribution.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>An optional string that you want CloudFront to use as a prefix to the access
     * log filenames for this distribution.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>An optional string that you want CloudFront to use as a prefix to the access
     * log filenames for this distribution.</p>
     */
    inline AwsCloudFrontDistributionLogging& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>An optional string that you want CloudFront to use as a prefix to the access
     * log filenames for this distribution.</p>
     */
    inline AwsCloudFrontDistributionLogging& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>An optional string that you want CloudFront to use as a prefix to the access
     * log filenames for this distribution.</p>
     */
    inline AwsCloudFrontDistributionLogging& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    bool m_includeCookies;
    bool m_includeCookiesHasBeenSet;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

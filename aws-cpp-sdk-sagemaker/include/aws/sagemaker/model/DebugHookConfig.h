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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CollectionConfiguration.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration information for the debug hook parameters, collection
   * configuration, and storage paths.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DebugHookConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API DebugHookConfig
  {
  public:
    DebugHookConfig();
    DebugHookConfig(Aws::Utils::Json::JsonView jsonValue);
    DebugHookConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Path to local storage location for tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline const Aws::String& GetLocalPath() const{ return m_localPath; }

    /**
     * <p>Path to local storage location for tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }

    /**
     * <p>Path to local storage location for tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline void SetLocalPath(const Aws::String& value) { m_localPathHasBeenSet = true; m_localPath = value; }

    /**
     * <p>Path to local storage location for tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline void SetLocalPath(Aws::String&& value) { m_localPathHasBeenSet = true; m_localPath = std::move(value); }

    /**
     * <p>Path to local storage location for tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline void SetLocalPath(const char* value) { m_localPathHasBeenSet = true; m_localPath.assign(value); }

    /**
     * <p>Path to local storage location for tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline DebugHookConfig& WithLocalPath(const Aws::String& value) { SetLocalPath(value); return *this;}

    /**
     * <p>Path to local storage location for tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline DebugHookConfig& WithLocalPath(Aws::String&& value) { SetLocalPath(std::move(value)); return *this;}

    /**
     * <p>Path to local storage location for tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline DebugHookConfig& WithLocalPath(const char* value) { SetLocalPath(value); return *this;}


    /**
     * <p>Path to Amazon S3 storage location for tensors.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>Path to Amazon S3 storage location for tensors.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>Path to Amazon S3 storage location for tensors.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>Path to Amazon S3 storage location for tensors.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>Path to Amazon S3 storage location for tensors.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>Path to Amazon S3 storage location for tensors.</p>
     */
    inline DebugHookConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>Path to Amazon S3 storage location for tensors.</p>
     */
    inline DebugHookConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>Path to Amazon S3 storage location for tensors.</p>
     */
    inline DebugHookConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}


    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHookParameters() const{ return m_hookParameters; }

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline bool HookParametersHasBeenSet() const { return m_hookParametersHasBeenSet; }

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline void SetHookParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hookParametersHasBeenSet = true; m_hookParameters = value; }

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline void SetHookParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hookParametersHasBeenSet = true; m_hookParameters = std::move(value); }

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline DebugHookConfig& WithHookParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHookParameters(value); return *this;}

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline DebugHookConfig& WithHookParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHookParameters(std::move(value)); return *this;}

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(const Aws::String& key, const Aws::String& value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(key, value); return *this; }

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(Aws::String&& key, const Aws::String& value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(const Aws::String& key, Aws::String&& value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(Aws::String&& key, Aws::String&& value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(const char* key, Aws::String&& value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(Aws::String&& key, const char* value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration information for the debug hook parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(const char* key, const char* value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(key, value); return *this; }


    /**
     * <p>Configuration information for tensor collections.</p>
     */
    inline const Aws::Vector<CollectionConfiguration>& GetCollectionConfigurations() const{ return m_collectionConfigurations; }

    /**
     * <p>Configuration information for tensor collections.</p>
     */
    inline bool CollectionConfigurationsHasBeenSet() const { return m_collectionConfigurationsHasBeenSet; }

    /**
     * <p>Configuration information for tensor collections.</p>
     */
    inline void SetCollectionConfigurations(const Aws::Vector<CollectionConfiguration>& value) { m_collectionConfigurationsHasBeenSet = true; m_collectionConfigurations = value; }

    /**
     * <p>Configuration information for tensor collections.</p>
     */
    inline void SetCollectionConfigurations(Aws::Vector<CollectionConfiguration>&& value) { m_collectionConfigurationsHasBeenSet = true; m_collectionConfigurations = std::move(value); }

    /**
     * <p>Configuration information for tensor collections.</p>
     */
    inline DebugHookConfig& WithCollectionConfigurations(const Aws::Vector<CollectionConfiguration>& value) { SetCollectionConfigurations(value); return *this;}

    /**
     * <p>Configuration information for tensor collections.</p>
     */
    inline DebugHookConfig& WithCollectionConfigurations(Aws::Vector<CollectionConfiguration>&& value) { SetCollectionConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configuration information for tensor collections.</p>
     */
    inline DebugHookConfig& AddCollectionConfigurations(const CollectionConfiguration& value) { m_collectionConfigurationsHasBeenSet = true; m_collectionConfigurations.push_back(value); return *this; }

    /**
     * <p>Configuration information for tensor collections.</p>
     */
    inline DebugHookConfig& AddCollectionConfigurations(CollectionConfiguration&& value) { m_collectionConfigurationsHasBeenSet = true; m_collectionConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_localPath;
    bool m_localPathHasBeenSet;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_hookParameters;
    bool m_hookParametersHasBeenSet;

    Aws::Vector<CollectionConfiguration> m_collectionConfigurations;
    bool m_collectionConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
